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
    int n,k,i,j,number[100],a,l;

    scanf("%d %d",&n,&k);
    for(l=0;l<n;l++)
    {
        scanf("%d",&number[l]);
    }
         for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
            if(number[n-1]>k)
            {
                printf("%d",number[n-1]-k);
            }
            else {
            printf("0");
            }
    return 0;
}
