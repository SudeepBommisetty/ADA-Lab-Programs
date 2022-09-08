#include<stdio.h>
#include<time.h>

void create(int []);
void down_adjust(int [],int);

void main()
{
int heap[30],n,i,last,temp;
clock_t s, e;

printf("Enter no. of elements:");
scanf("%d",&n);
//printf("\nEnter elements:");
for(i=1;i<=n;i++)
heap[i] = rand() % 999 ;
//create a heap
heap[0]=n;
create(heap);

 s = clock();
//sorting
while(heap[0] > 1)
{
//swap heap[1] and heap[last]
double d;
for(d=0; d< 999999 ; d++){
    d++;
    d--;
}
last=heap[0];
temp=heap[1];
heap[1]=heap[last];
heap[last]=temp;
heap[0]--;
down_adjust(heap,1);
}
e = clock();
//print sorted data

printf("\nArray after sorting:\n");
for(i=1;i<=n;i++)
printf("%d ",heap[i]);

printf("\n time taken : %f", (double)(e-s)/CLOCKS_PER_SEC);

}


void create(int heap[])
{
int i,n;
n=heap[0]; //no. of elements
for(i=n/2;i>=1;i--)
down_adjust(heap,i);
}

void down_adjust(int heap[],int i)
{
int j,temp,n,flag=1;
n=heap[0];
while(2*i<=n && flag==1)
{
j=2*i; //j points to left child
if(j+1<=n && heap[j+1] > heap[j])
j=j+1;
if(heap[i] > heap[j])
flag=0;
else
{
temp=heap[i];
heap[i]=heap[j];
heap[j]=temp;
i=j;
}
}
}
