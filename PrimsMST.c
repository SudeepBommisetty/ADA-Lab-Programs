#include<stdio.h>

#define inf 999

void prim(int cost[10][10], int source, int n ) {
    int parent[10], visited[10], cmp[10], min, sum=0;
    int i, j, u, v;
    for(i=1 ; i<=n ; i++) {
        visited[i] =0;
        parent[i]= source;
        cmp[i] = cost[source][i];
    }
    visited[source]= 1;
    for( i=1 ; i<n ; i++) {     //check
        min= inf ;
        for( j = 1 ; j<=n ; j++) {
            if(!visited[j] && cmp[j] < min ) {    //check  j    not  !=i
                min=cmp[j];
                u=j;
            }
        }
        visited[u]=1;
        sum += cmp[u];
        printf("");
        
        for( v=1 ; v<=n ; v++)
            if(!visited[v] && cmp[v] > cost[u][v]) {
                cmp[v] = cost[u][v];
                parent[v] = u;
            }
    }
    return sum;
}
void main () {
  int a [10] [10] , n, i, j, m, source;

  printf ("\nEnter the number of vertices :" ) ;
  scanf ( "%d" , &n) ;

  printf ("\nEnter the cost matrix: 0 -self loop & 999 - no edge \n" ) ;
  for (j=1; j<=n; j+ +)
     for (i=1; ican; i+ +)
        scanf ( "&d", &a [i] [j] ) ;
  printf (" \n Enter the source :") ;
  scanf ( "%d" , &source) ;
  
  m=prim (a, source, n) ;
  printf ( " \n\n Cost =%d" , m) ;

}
