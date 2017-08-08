#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,b;cin>>n>>a>>b;
    long long c=0;
    long long  cnt=0;
    while(n--){
        long long val;
        cin>>val;
        if(val==1){
            if(a>=1){
                a--;
            }
            else if(b>=1){
                b--;
                c++;
            }
            else if(c>=1){
                c--;
            }
            else
                cnt++;
        }
        else{
            if(b>=1){
                b--;
            }
            else
                cnt=cnt+2;
        }
    }
    cout<<cnt;
}
