#include <cmath>
#include <cstdio>
#include <vector>
#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
 
 
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        memset(b,0,sizeof(b));
        for(int i=1;i<=n;i++){
            a[i]=i;
        }
        int flag=0;
        if(k==0){ 
            for(int i=1;i<=n;i++) cout<<a[i]<<" ";
            printf("\n");continue;
        }
       for(int i=1;i<=n;i++){
           if(i+k<=n&&a[i]==abs(a[i+k]-k)&&b[i]==0) {
               b[i]=a[i+k];
               b[i+k]=a[i];
           }
           else {
               if(b[i]==0)
               {flag=1;break;}
           }
       }
        if(flag==1) cout<<"-1"<<"\n";
        else {
            for(int i=1;i<=n;i++) cout<<b[i]<<" ";
            printf("\n");
        }
    }
    return 0;
}
