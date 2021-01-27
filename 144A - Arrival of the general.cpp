#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	int max=0;
	int min=0;
	int min_index=0;
	int max_index=0;
	for(int i=0;i<n;i++){
			cin>>arr[i];
			if(i==0){
				max=arr[i];
			}
			if(max<arr[i]){
				max=arr[i];
				max_index=i;	
			}
			if(i==0){
				min=arr[i];
			}
			if(min>=arr[i]){
				min=arr[i];
				min_index=i;
			}
		}
		int count=0;
		if(max_index==0&&min_index==n-1){
			cout<<count;
			exit(0);
		}
		//int j=max_index;
		for(int i=max_index;i>=1;i--){
			int temp=arr[i];
			arr[i]=arr[i-1];
			arr[i-1]=temp;
			max_index=max_index-1;
			count++;
		}
//		if(arr[max_index]==arr[max_index+1]){
//			count--;
//		}
		for(int i=0;i<n;i++){
			if(i==0){
				min=arr[i];
			}
			if(min>=arr[i]){
				min=arr[i];
				min_index=i;
			}
		}
		//int k=min_index;
		for(int j=min_index;j<n-1;j++){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			min_index=min_index+1;
			count++;
		}
//		if(arr[min_index]==arr[min_index-1]){
//			count--;
//		}
		//System.out.println(min_index);
		//System.out.println(arr[min_index]);
		cout<<count;
	}



