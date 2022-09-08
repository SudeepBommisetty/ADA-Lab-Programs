#include<stdio.h>

int w[10], p[9], n;

int maxim(int x, int y) {
    x>y? x : y;
}

int knap(int i, int m) {
    if(i == n) return w[i] > m ? 0 : p[i];
    
    if(w[i] > m) return knap(i+1, m);
    return
    maxim( knap(i+1, m), knap(i+1, m-w[i]) + p[i]);
}



void main() {
    int i, m;
    printf("number of items");
    scanf("%d", &n);
    
    printf("enter weight and value for each item:\n");
    for(i=1; i<=n ; i++)
        scanf("%d %d", &w[i], &p[i] );
    
    printf("enter capacity of knapsack ");
    scanf("%d", &m);
    
    int maxprofit = knap(1, m);
    printf("  max profit : %d", maxprofit );
}
