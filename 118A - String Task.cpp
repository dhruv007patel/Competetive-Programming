#include<iostream>
#include<string>
#include<cctype>

using namespace std;
bool Vowel(char c){
    char a=tolower(c);
  return (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'y');
}


int main(){
string s;
cin>>s;
for(int i=0;i<s.size();i++){
if(!Vowel(s[i])){
        s[i]=tolower(s[i]);
    cout<<'.'<<s[i];
}
}
return 0;}
