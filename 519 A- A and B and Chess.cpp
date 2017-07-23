#include<iostream>

using namespace std;

int main()
{
   string s[100];
   int t=0,t1=0;
    for(int i=0;100>i;i++)
    {
                cin>>s[i];
    }
    for(int i=0;100>i;i++)
    {
        for(int j=0;i>j;j++)
        {

        if(s[i][j]=='.')
        {
            continue;
        }
        if(s[i][j]=='Q')
           {
               t=t+9;
           }
        if(s[i][j]=='R')
        {
            t=t+5;
        }
        if(s[i][j]=='B')
        {
            t=t+3;
        }
        if(s[i][j]=='N')
        {
            t=t+3;
        }
        if(s[i][j]=='P')
        {
            t=t+1;
        }
        if(s[i][j]=='q')
           {
               t1=t1+9;
           }
        if(s[i][j]=='r')
        {
            t1=t1+5;
        }
        if(s[i][j]=='b')
        {
            t1=t1+3;
        }
        if(s[i][j]=='n')
        {
            t1=t1+3;
        }
        if(s[i][j]=='p')
        {
            t1=t1+1;
        }
    }

    }

    if(t>t1)
    {
        cout<<"White";
    }
    if(t1>t)
    {
        cout<<"Black";
    }
    if(t1==t)
    {
        cout<<"Draw";
    }

    cout<<t1<<"  "<<t;
    return 0;
}

