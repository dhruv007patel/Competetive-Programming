#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int a[n];
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    for(int i=0;n>i;i++)
    {
        cin>>a[i];
    }

    for(int i=0;n>i;i++)
    {
        if(a[i]<0)
            v1.push_back(a[i]);
        else if(a[i]==0)
            v3.push_back(a[i]);
        else
            v2.push_back(a[i]);
    }
        if (v2.size() == 0)
        {
            for(int i = 0; i < 2; i++)
            v2.push_back(v1.back()),v1.pop_back();
        }
        if (v1.size() % 2 == 0) {
                v3.push_back(v1.back());
                v1.pop_back();
        }
    cout<<v1.size()<<" ";
    for(int i=0;v1.size()>i;i++)
    cout<<v1[i]<<" ";
    cout<<endl;
    cout<<v2.size()<<" ";
    for(int i=0;v2.size()>i;i++)
        cout<<v2[i]<<" ";
    cout<<endl;
    cout<<v3.size()<<" ";
    for(int i=0;v3.size()>i;i++)
        cout<<v3[i]<<" ";
    cout<<endl;
    return 0;
}

