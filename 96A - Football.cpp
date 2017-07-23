#include<iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int i,c=1;
    for(i=1;s.length()>i;i++)
        {
            if(s[i]==s[i-1])
            {
                c+=1;
                if(c==7)
                {
                cout<<"YES"<<endl;
                return 0;
                }
            }

                else
                {
                    c=1;
                }
            }
                cout<<"NO"<<endl;
                return 0;


}
