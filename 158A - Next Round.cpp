#include<iostream>

using namespace std;

int main(){
int n,i,p,f=0,s=0;
cin>>n;cin>>p;
int a[n];
for(i=0;n>i;i++){
    cin>>a[i];
if(a[i]==0)f++;
}

for(i=0;n>i;i++){
        if(a[p-1]!=0)
        {
            if(a[i]>=a[p-1])s++;}
else if(a[i]>a[p-1])s++;}
if(f!=n)
cout<<s;
else cout<<0;

return 0;
}
