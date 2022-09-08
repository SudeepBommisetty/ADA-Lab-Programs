#include<stdio.h>
#include<time.h>

void main()
{
    int a[100],n,j,i,key,k;
    double m;
    clock_t t;
    printf("enter the number of the array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i]=(rand()%(100));
    }
    printf("elements");
    for(k=0;k<n;k++)
    {
        printf("%d\n",a[k]);
    }
     printf("enter the element to search");
    scanf("%d",&key);
   t = clock();
    for(m=0;m<100000000;m++);
    for(j=0;j<n;j++)
    {
        if(a[j]==key)
        {
            printf("\nelement is found");
            printf("No. of clicks %ld clicks (%f seconds).\n",
           t, ((float)t) / CLOCKS_PER_SEC);
            exit(0);
        }
    }
    printf("\nelement is not found");
    printf("No. of clicks %ld clicks (%f seconds).\n",
           t, ((float)t) / CLOCKS_PER_SEC);
}
