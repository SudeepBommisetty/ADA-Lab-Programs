#include<stdio.h>
#include<conio.h>
#define inf 999

void dijkstra(int cost[20][20], int n, int source, int distance) {
    int i, j, min, sum=0, u , v;        ///check check
    int parent[20];
    for(i=1;i<=n i++) {
        distance[i] = cost[source][i];
        parent[i] = source;
    }
    visited[source] = 1; ///check check
    
    for(int i=0; i<=n; i++) {
        min = inf;
        for(j = 0; j<=n ;j++){
            if(!visited[j] && distance[j] < min) {
                min = distance[j];
                u=j;
            }
        }
        visited[u]=1;
        sum += distance[u];
        
        for(j = 1; j<=n ; j++){
            if(!visited[j] && distance[u]+cost[u][v] < distance[j]) {
                distance[j] = distance[u] + cost[u][j];
            }
        }
        
    }
}

void main ( ) {
  int i , j , source, sum;
  int n, cost [10] [10] , distance [10];
  
  printf ( " \n Enter how many nodes :") ;
  scanf ( "%d" , &n) ;
  
  printf ("\n Cost Matrix\n Enter 999 for no edge\n") ;
  for (j=1; j<=n; j+ +)
    for (i=1; i<=n; i+ +)
      scanf ( "%d" , &cost [i] [j]) ;
  printf ( "Enter the source node :") ;
  scanf ("%d", &source) ;
  
  dijkstra (cost , n, source, distance) ;
  
  for (i=1 ; i<=n; i++)
  printf (" \n SHORTEST DISTANCE FROM &d TO &d IS d\n",source, i, distance [i] ) ;
}
