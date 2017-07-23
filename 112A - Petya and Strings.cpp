#include<iostream>
#include<cctype>


using namespace std;
int main(){
int i,f=0,n=0;
string s1,s2;
cin>>s1;
cin>>s2;
for(i=0;s1.size()>i;i++){
    s1[i]=tolower(s1[i]);
    s2[i]=tolower(s2[i]);
}

for(i=0;s1.length()>i;i++){

   if(s1[i]==s2[i]){f++;
   if(f==s1.length()){n=1;}
   continue;}

        if(s1[i]>s2[i]){cout<<1;break;}
        if(s1[i]<s2[i]){cout<<-1;break;}


}if(n==1){cout<<0;}
return 0;
}
