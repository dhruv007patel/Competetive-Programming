#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    int total = 0;
    for(int i = 0;i < v.size();i++)
    {
        cin >> v[i];
        total += v[i];
        int given = min(total,8);
        total -= given;
        k -= given;
        if(k <= 0)
        {
            cout << i + 1;
            return 0;
        }
    }
    cout <<-1;
    return 0;
}
