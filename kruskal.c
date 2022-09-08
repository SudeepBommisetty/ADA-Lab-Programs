#include<stdio.h>

#define inf 999 
int cost[20][20], parentkru[20], t[20][2];

int find (int v) {
  
  while (parentkru [v] ) {
     v=parentkru [v] ;
  }
  return v;
}

void unionkru(int i, int j) {
  parentkru[j] = i;
}
void kruskal(int n) {
    int min, i, j, k, u, v;
    int res1, res2, sum = 0;       ///check check
    for(k=1; k<n ; k++) {
        min = inf;
        
        for(i=1; i<n-1 ; i++) {
            for(j=1; j<=n ; j++){
                
                if(i == j) 
                    continue;
                
                if(cost[i][j] < min){
                
                    u = find(i);
                    v = find(j);
                    
                    if(u != v){
                        res1 = i;
                        res2 = j;
                        min = cost[i][j];
                    }
                }
            }
        }
        unionkru(res1, find(res2));
        t[k][1]=res1;
        t[k][2]=res2;
        sum += min;
    }
    
    printf("cost mst is %d", sum);
    
}
void main() {
  int i , j,n;
  
  printf ("\n Enter the number of vertices : ");
  scanf ("*d" , &n) ;

  for (i=1; i<=n; i++)
  parent [i] =0;
  printf ( "\n Enter the cost adjacent matrix 0- for self edge and 999-if no edge \n") ;
  for (i=1; i<=n; i++)
    for (j=1; j<=n; j+ +)
      scanf ( "*d" , &cost [i] [j]) ;
  kruskal (n) ;
}
