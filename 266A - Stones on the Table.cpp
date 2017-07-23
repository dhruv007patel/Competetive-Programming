#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,i,f=0;
    cin>>n;
    string str;
    cin>>str;

    for(i=0;n>i;i++)
    {
        if(str[i]==str[i-1]){f+=1;}
    }

    cout<<f;
return 0;
}
