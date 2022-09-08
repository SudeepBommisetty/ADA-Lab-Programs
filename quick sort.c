#include<stdio.h>
#include<time.h>
void delay()
{
    int i;
    for(i=0;i<99999999;i++)
    {

        int temp;
        temp=temp+1;
    }
}
void quicksort(int number[25],int first,int last){
   delay();
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
         i++;
         while(number[j]>number[pivot])
         j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);
   }
}
int main(){
     clock_t start,end;
   int i, count, number[25];
   printf("No. of elements: ");
   scanf("%d",&count);
   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
   scanf("%d",&number[i]);
   start=clock();
   quicksort(number,0,count-1);
   end=clock();
   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
   printf(" %d",number[i]);
   printf("Time taken:%f",(double)(end-start)/CLOCKS_PER_SEC);
   return 0;
}
