#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a,b,c,count=0;
    scanf("%d %d %d",&a,&b,&c);
    for(int temp=a;temp<=b;temp++)
        {
        int p=temp,rev=0;
        while(p!=0)
            {
            rev=rev*10+(p%10);
            p=p/10;
        }
        if(abs(rev-temp)%c==0)
            count++;
    }
    printf("%d",count);
    return 0;
}
