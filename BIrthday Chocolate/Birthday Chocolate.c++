#include<stdio.h>

int main()
{
    int n,i,s[1000],d,m,temp,count=0,sum=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    scanf("%d%d",&d,&m);
    for(i=0;i<n;i++)
    {
        sum=0;
        temp=0;
    
        for(j=i;j<n;j++)
        {
            if(temp<m)
            {
                sum=sum+s[j];
            
                temp++;
            }
        }
        if(sum==d)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
