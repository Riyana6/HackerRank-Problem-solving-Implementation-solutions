#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

int i,j,k,n,count=0;
int ar[100];

scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
    scanf("%d",&ar[i]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(i==j)
        {
            continue;
        }
        else
        {
            if((ar[i]+ar[j])%k==0)
            {
                count++;
            }
        }
    }
}
printf("%d",count/2);



    return 0;
}
