#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,s1=0,s2=0,c=0;
   vector<int>v1;
   vector<int>v2;
   do
    {
        int x ;
        if ( std::cin >> x )
            v1.push_back(x);
    }
    while(std::cin&&std::cin.peek()!='\n');
    do
    {
        int y ;
        if (std::cin>>y)
            v2.push_back(y);
    }
    while(std::cin&&std::cin.peek()!='\n');
    cin>>n;
    int i,j;
    for(i=0;v1.size()>i;i++)
    {
        s1+=v1[i];
    }
    for(j=0;v2.size()>j;j++)
    {
        s2+=v2[j];
    }
   int n1=(s1+5-1)/5;
   int n2=(s2+10-1)/10;
   c=n1+n2;
    if(n<c)
        cout<<"NO";
    else
        cout<<"YES";

    return 0;
}

