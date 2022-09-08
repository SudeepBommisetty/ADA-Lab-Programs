#include <stdio.h>
#include<time.h>
int main(){
int i,j,k,n,a[10][10],indeg[10],flag[10],count=0;
double d;
clock_t start, end;
printf("Enter the no of vertices:\n");
scanf("%d",&n);

printf("Enter the adjacency matrix:\n");
for(i=0;i<n;i++){
    //Enter row %d\n",i+1);
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}

for(i=0;i<n;i++){
        indeg[i]=0;
        flag[i]=0;
    }

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            indeg[i]=indeg[i]+a[j][i];

    printf("\nThe topological order is:");
    start = clock();
    while(count<n){
        for(k=0;k<n;k++){
            if((indeg[k]==0) && (flag[k]==0)){
                printf("%d ",(k+1));
                flag [k]=1;
            }
            for(d=0 ; d< 999999 ; d++) {
                d++;
                d--;
            }
            for(i=0;i<n;i++){
                if(a[i][k]==1)
                    indeg[k]--;
            }
        }

        count++;
    }
    end = clock();
    printf("\n\n  TIME TAKEN : %f \n",  (double)(end-start)/CLOCKS_PER_SEC );

    return 0;
}
