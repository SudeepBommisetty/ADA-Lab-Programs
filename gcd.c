#include<stdio.h>
#include<time.h>

int gcd(int m,int n) {
  if(n == 0) return m;
  double i;
  for( i=0; i<99999; i++){
    i++;
    i--;
  }

  return gcd(n, m%n);
}

int main() {
  double d;
  int n, m, res;
  clock_t start, end;

  printf("enter m and n : ");
  scanf("%d %d", &m , &n);

  start=clock();
  res = gcd(m,n);
  end = clock();


  printf("gcd of %d and %d is %d\n", m , n, res);
  printf("time : %f \n", (double)(end-start)/CLOCKS_PER_SEC);




  printf("\n bef return 0 \n");
  return 0;
}
