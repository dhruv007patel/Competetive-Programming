#include <iostream>
using namespace std;

int main(){int n;
cin>>n;
   int s,a[n][3],k=0,f=0;
for(int i=0;n>i;i++)
    for(int j=0;3>j;j++)
       cin>>a[i][j];

for(int i=0;n>i;i++){
    for(int j=0;3>j;j++){
        if(a[i][j]!=0)k++;
           }
           if(k>=2){ f=f+1;}
           k=0;}

cout<<f;

   return 0;
 }

