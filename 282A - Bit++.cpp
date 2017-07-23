#include<iostream>

using namespace std;

int main()
{
    int n,i,X=0;
    cin>>n;
    string s[150];
    for(i=0;i<n;i++)
    cin>>s[i];
        for(i=0;n>i;i++)
        {
            if(s[i]== "++X"){++X;}
            else if(s[i]== "X--"){X--;}
            else if(s[i]== "X++"){X++;}
            else if(s[i]== "--X"){--X;}
        }

    cout<<X;
    return 0;
}
