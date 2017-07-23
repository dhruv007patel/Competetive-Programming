#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,i,l;string s[100];
cin>>n;
for(i=0;n>i;i++)
{
    cin>>s[i];
    l=s[i].size();
    if(l<=10){
        cout<<s[i]<<endl;
    }
    else
        cout<<s[i][0]<<l-2<<s[i][l-1]<<endl;
}

return 0;
}
