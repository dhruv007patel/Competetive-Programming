    #include<bits/stdc++.h>

    using namespace std;

    int main()
    {
        string s;
        cin>>s;
        int n = s.length()-1,l=0;
        bool f = true;
        while(s[n]=='0' && n>=0)
            --n;
        while(l<=n)
        {
            if(s[l]!=s[n])
            f = false;
            ++l;
            --n;
        }
        if(f)
            cout<<"YES";
        else
            cout<<"NO";
        return 0;
    }
