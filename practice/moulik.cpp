#include<iostream>
using namespace std;
int linearsearch(int n,int target,int arr[] ){
      for(int i=0;i<n;i++){
        if(arr[i]==target)
        cout<<i;
      }
      return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int target;
    cout<<"enter target value"<<endl;
    cin>>target;
    for(int i=0;i<n;i++){
        cin>>arr[i];
      

    }
        cout<<linearsearch(n,target,arr);
        return 0;
}
