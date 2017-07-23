#include<iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    string s[n];
    for(int i=0;n>i;i++)
        cin>>s[i];
    for(int i=0;n>i;i++)
    {

        if(s[i]=="Tetrahedron"){sum+=4;}
        if(s[i]=="Cube"){sum+=6;}
        if(s[i]=="Octahedron"){sum+=8;}
        if(s[i]=="Dodecahedron"){sum+=12;}
        if(s[i]=="Icosahedron"){sum+=20;}
    }

    cout<<sum;
    return 0;
}
