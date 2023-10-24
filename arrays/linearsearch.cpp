#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int keys){
	for(int i=0;i<n;i++){
		if(arr[i]==keys){
		
		return i;
	}
	}
	return -1;
	}
int main(){
	int n;
	cin>>n;
	int arr[n];
	cout<<"enter array elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	int keys;
	cout<<"enter a num to find in array"<<endl;
	cin>>keys;
	cout<<linearsearch(arr,n,keys)<<endl;
	
}
