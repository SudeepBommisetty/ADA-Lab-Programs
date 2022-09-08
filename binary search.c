#include<stdio.h>
#include<time.h>

int binSearch(int a[], int ele, int start, int end) {
    int mid = (start+end)/2;
    int pos;
    if(a[mid] == ele) return mid;
    if(a[mid]>ele)
    pos = binSearch( a, ele, start, mid-1);
    else
    pos = binSearch( a, ele, mid+1, end);
    double d;
    for(d=0;d<99999;d++) {
      d++;
      d--;
    }
    return pos;
}


void main() {
    int arr[10], n, item, pos;
    clock_t start, end;
    printf("enter number of elements : ");
    scanf("%d", &n);
    printf("enter elements : ");
    for(int i=0; i<n ; i++)
        scanf("%d", &arr[i]);
    printf("enter the element to search : ");
    scanf("%d", &item);
    start = clock();
    pos=binSearch(arr, item, 0, n);
    end= clock();
    printf("element found at %d\n", pos);
    printf("time: %f", (double)(end-start)/CLOCKS_PER_SEC);
}
