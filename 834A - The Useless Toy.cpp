#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n, i, j, max = 0, ans  = 0, n1 = 3, n2 = 3;
    char c1, c2;
    cin>>c1>>c2;
    cin>>n;
    if(c1=='^')
        n1 = 1;
    else if(c1=='>')
        n1 = 2;
    else if(c1==118)
        n1 = 3;
    else if(c1=='<')
        n1 = 4;

    if(c2=='^')
        n2 = 1;
    else if(c2=='>')
        n2 = 2;
    else if(c2==118)
        n2 = 3;
    else if(c2=='<')
        n2 = 4;

    max = abs(n1-n2);

    if(max%2==0)
        {
            cout<<"undefined";
            return 0;
        }

    if(n2>n1)
        max = n2 - n1;
    if(n2<n1)
        max = 4 - abs(n2-n1);

    n = n % 4;
    if(max==n)
        cout<<"cw";
    else
        cout<<"ccw";
}
