#include<stdio.h>
#include<time.h>

void selectionSort(int a[],int n) {
  int i, j, min, temp ;
  
  for(i=0; i<n-1 ; i++) {
    min = i;
    for(j=i+1; j<n ; j++) {
      if(a[j] < a[min])
        min = j;
      //  delay  ...
      for(d = 9999 ; d>0 ; d--) {
        d++;
        d--;
      }
    }
    temp = a[min];
    a[min] = a[i];
    a[i] = temp;
  }
}
int main() {
    int a[20], n, i, upper, lower;
    clock_t start, end;

    printf("enter the size of array:");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int num = (rand() %
        (upper - lower + 1)) + lower;
        a[i] = num ;
    }

    start = clock();
    insertionSort(a, n);
    end = clock();
    
    printf("\n  after SORTING : ");
    for(i=0 ; i<n ; i++)
        printf("%d, ", a[i]);

    printf("TIME TAKEN : %f",  (double)(end-start)/CLOCKS_PER_SEC );
    return 0;
}
