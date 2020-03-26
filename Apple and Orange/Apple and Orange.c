#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int s,t,a,b,m,n,i,j,mr[100000],nr[100000],count1=0,count2=0;
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);

    for(i=0;i<m;i++)
    {
        scanf("%d ",&mr[i]);
    }

    for(j=0;j<n;j++)
    {
        scanf("%d ",&nr[j]);
    }

        for(i=0;i<m;i++)
        {
            int check1=mr[i]+a;
            if((check1>=s)&&(check1<=t))
                {
                    count1+=1;
                }
        }
        printf("%d\n",count1);

        for(j=0;j<n;j++)
        {
            int check2=b+nr[j];
            if((check2>=s)&&(check2<=t))
                {
                    count2+=1;
                }
        }
        printf("%d",count2);

    
    return 0;
}
