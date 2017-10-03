#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[2*n];
	int count=0;
	for(int i=0;i<(2*n);i++){
		cin>>arr[i];
	}
	for(int i=0;i<(2*n);i++){
		if(i+1!=(2*n)&&arr[i]==arr[i+1]){
			count++;
		}
		for(int j=i+3;j<(2*n);j+=2){
			if(arr[i]==arr[j]){
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}
