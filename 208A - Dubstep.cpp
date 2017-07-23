#include <string>
#include <iostream>

using namespace std;

void removeSubstrs(string& s, string& p) {
  string::size_type n = p.length();
  for (string::size_type i = s.find(p);i != string::npos;i = s.find(p))
      if(i==0)s.replace(i,n,"");
      else s.replace(i,n," ");
}

int main() {
    string s1;
    cin>>s1;
    string pattern = "WUB";
    removeSubstrs(s1,pattern);
    cout<<s1;
return 0;
}
