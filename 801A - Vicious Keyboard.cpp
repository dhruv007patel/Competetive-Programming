    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        string s;
        cin>>s;
        int c=0;
        for(int i=1;s.length()>i;i++)
        {
            if(s[i]=='K' && s[i-1]=='V')
            {
                c++;
                s[i]='-';
                s[i-1]='-';
            }
        }
        for(int i=0;s.length()>i;i++)
        {
            if((s[i]=='V' && s[i-1]=='V')||(s[i]=='K'&& s[i-1]=='K'))
            {
                c++;
                break;
            }
        }
        cout<<c++;
       return 0;
    }
