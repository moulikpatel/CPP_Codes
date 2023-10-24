#include<iostream>
using namespace std;
int main(){
    int x;
    int n,m;
    int arr[n][m];
    cout<<"enter rows and columns";
     cin>>n>>m;
     cout<<"enter a element to search in matrix"<<endl;
     cin>>x;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==x){
                cout<<"element found\n";
            }
        }
    }
    return 0;

}