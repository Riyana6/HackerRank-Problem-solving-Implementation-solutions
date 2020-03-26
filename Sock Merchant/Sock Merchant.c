#include<stdio.h>
#include<string.h>

int main()
{
 int ar[100];
 int i,j,k,n;
 int count=0;

 //printf("Enter number of socks: ");
 scanf("%d",&n);

 //printf("\n\nEnter color of %d socks\n\n",n);

 for(i=0;i<n;i++)
 {
    scanf("%d",&ar[i]);
 }
 for(i=0;i<n;i++)
 {
    k=1;
    if(ar[i]!=0)
    {
        for(j=i+1;j<n;j++)
        {
           if(ar[i]==ar[j])
             {
               k++;
               ar[j]=0;
             }
        }
    count+=k/2;
    }
 }
  printf("%d",count);
}
