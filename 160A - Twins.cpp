#include<iostream>
#include<algorithm>
using namespace std;


int main(){
int n,s=0,i;
cin>>n;
int a[n];
for(i=0;n>i;i++)
    cin>>a[i];
for(i=0;n>i;i++)
   s+=a[i];
sort(a,a+n);
for(int i=0;n>i;i++)
cout<<a[i];



return 0;
}
