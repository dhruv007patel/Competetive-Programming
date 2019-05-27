//Check Rotation in a string
#include<bits/stdc++.h>
using namespace std;
bool checkRotation(string s1,string s2)
{
    if(s1.length()==s2.length() && (s2+s2).find(s1)!=string::npos)
        return true;
    return false;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(checkRotation(s1,s2))
    {
        cout<<"string1 and string2 are Rotated String\n";
    }
    else
    {
        cout<<"String1 and String2 are not Rotated String\n";
    }
    return 0;
}
