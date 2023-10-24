// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
int n;
int arr[n];
int target;
cout<<"enter the size of an array"<<endl;
cin>>n;
cout<<"enter array elements"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"enter the value of target"<<endl;
cin>>target;
for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
	
    if((arr[i]+arr[j])==target){
        cout<<i<<j<<endl;
    
	}
	}
}

    return 0;
}
