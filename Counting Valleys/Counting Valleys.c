#include<stdio.h>
int main()
 { int n;
  scanf("%d", &n); 
  int j = 0, i = 0, cnt = 0; 
  char a[n]; 
  for(j = 0; j < n+1; j++) 
  { 
      scanf("%c", &a[j]);
       }
\

for(j = 1; j < n+1; j++)
{
    if(a[j] == 'U')
    {
        i = i + 1;
        if(i == 0)
            cnt++;
    }
    else if(a[j] == 'D')
    {
        i = i - 1;
    }
}

printf("%d", cnt);

return 0;
}
