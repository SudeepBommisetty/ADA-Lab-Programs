#include <stdio.h>
#include<time.h>

void TOH(int n,int A,int B,int C)
{
 double d;
 if(n>0)
 {
 TOH(n-1,A,C,B);
 printf("(%d,%d)\n",A,C);
 TOH(n-1,B,A,C);
 for(d=0;d<99999;d++) {
      d++;
      d--;
    }
 }
}
int main()
{
    double d;
    clock_t start, end;
    start = clock();
    
    TOH(4,1,2,3);
    end = clock();
    printf("time = %f ", (double)(end-start)/CLOCKS_PER_SEC);
    
 return 0;
}
