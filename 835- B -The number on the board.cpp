#include <bits/stdc++.h>

using namespace std;

int main() {
	long k;
	vector<int>m;
	cin>>k;
	string n;
	cin>>n;
	int l=n.length();
	long sum=0;
	for(int i=0;i<l;i++){
	    int t=(n[i]-'0');
	    m.push_back(t);
	    sum+=t;
	}
	sort(m.begin(),m.end());
	int j=0;
	while(sum<k){
	    sum+=9-m[j];
	    j++;
	}
	cout<<j;
	return 0;
}
