#include<iostream>
#include<string>
using namespace std;


int main()
{   int f=0;
    string s;
    cin>>s;

    if(s.find_first_of("HQ9")!=string::npos){cout<<"YES";}
    else cout<<"NO";
  return 0;
}
