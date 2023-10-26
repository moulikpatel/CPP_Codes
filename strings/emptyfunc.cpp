#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="my name is moulik";
    cout<<str<<endl;
    str.clear();
    if(str.empty()){
        cout<<"string is empty"<<endl;
    }
 return 0;
}