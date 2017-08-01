#include <bits/stdc++.h>
using namespace std;
int a[8];
void count(void)
{
    int n;
    cin>>n;
    for(int i= 1; i<= 7; i++)
        cin>>a[i];
    int p= 8;
    while(n> 0)
    {
        p = (p%8)+1;
        n -= a[p];
    }
    cout<< p <<endl;
}
int main()
{
    count();
    return 0;
}
