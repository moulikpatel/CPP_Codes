#include<iostream>
using namespace std;
int main(){
	int n,arr[n],counter=1;
	cout<<"enter size of the array"<<endl;
	cin>>n;
	cout<<"enter array elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	while(counter<n-1){
		for(int i=0;i<n-counter;i++){
			if(arr[i]> arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		counter++;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}
