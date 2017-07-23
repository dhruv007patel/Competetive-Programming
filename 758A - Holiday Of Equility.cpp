#include<iostream>
#include<algorithm>

using namespace std;

    int main(){
    int n;
    cin>>n;
    int s=0,m=0;
    int x;
    for(int i=0;n>i;i++)
    {
        cin>>x;
        s+=x;
        int m=max(m,x);

    }
    cout<<n<<" "<<s<<" "<<m;
    cout <<(m*(s-n));




return 0;
}
