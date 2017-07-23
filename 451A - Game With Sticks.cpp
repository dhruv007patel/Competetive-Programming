#include<iostream>

using namespace std;

int main()
{
    int n,m,sum=0;
    cin>>n>>m;
   int a[n][m];
   for(int i=0;n>i;i++)
        for(int j=0;m>j;j++)
            a[i][j]=1;
    for(int i=0;n>i;i++)
        for(int j=0;m>j;j++)
            if(i==j)
            sum+=a[i][j];

            if(sum%2!=0){cout<<"Akshat";}

            else cout<<"Malvika";
    return 0;
}
