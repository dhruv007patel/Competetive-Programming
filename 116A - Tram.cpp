#include<iostream>

using namespace std;

int main(){int n,i,j;cin>>n;
int a[n][2];
int t=0,mx=0;
for(i=0;n>i;i++)
    for(j=0;2>j;j++)
        cin>>a[i][j];
for(i=0;n>i;i++)
    for(j=0;2>j;j++){
        if(j==0){
        t=t-a[i][j];
        if(t>mx){mx=t;}
      }
       if(j!=0){
        t=t+a[i][j];
        if(t>mx){mx=t;}
       }
   }
   cout<<mx;
return 0;
}
