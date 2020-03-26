#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,value[15],i,j,x,count[15];
    scanf("%d",&n);
    if(n<=15 && n>=1) {
       for(i=1;i<=n;i++){
       count[i]=0;
           scanf("%d",&value[i]);
           x=value[i];
           while(x!=0){
           
               j=x%10;
               if(j!=0 && value[i]%j==0)                 
                {  
                   count[i]++;
               }
               x=x/10;
           } 
       }
        for(i=1;i<=n;i++) printf("%d\n",count[i]); 
    }  
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
