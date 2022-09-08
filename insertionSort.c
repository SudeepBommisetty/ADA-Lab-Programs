#include<stdio.h>
#include<time.h>
void insertionSort(int a[], int n) {
    int  i, j;
    double d;
    printf("\n in sort: \n");
    for(i=0; i<n ;i++){
      for(j=i+1; j>0;j--) {
      for(d=0 ; d< 999999 ; d++) {
        d++;
        d--;
      }
        if(a[j] < a[j-1]) {
            int temp = a[j];
            a[j]= a[j-1];
            a[j-1] = temp;
        }
      }
    }

}

int main() {
    int a[20], n, i, upper, lower;
    clock_t start, end;

    printf("enter the size of array:");
    scanf("%d", &n);
    //printf("Enter the array elements");
    //for(i=0; i<n; i++)
      //  scanf("%d", &a[i]);

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
