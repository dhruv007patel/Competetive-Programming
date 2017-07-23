#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    for(int l=0;l<=1000;l++)
    {
        for(int r=l;r<=1000;r++)
        {
            int L=0,R=0;
            for(int k=l;k<=r;k++)
            {
                if(k%2==0)
                {
                    R++;
                }
                else
                    L++;
            }
            if(L==a&&R==b)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
