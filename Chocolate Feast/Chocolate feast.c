#include <math.h>
#include <stdio.h>
int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int c; 
        int m; 
        scanf("%d %d %d",&n,&c,&m);
        int  choc=n/c;
        int mc=n/c;
   do{
       if(choc>=m)
       {
            choc-=m;
           choc+=1;
       mc+=1;   }             
        } while(choc>=m);
        printf("%d\n",mc);
        
    }
   
    return 0;
}
