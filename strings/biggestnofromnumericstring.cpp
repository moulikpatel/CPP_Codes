#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"enter numeric string"<<endl;
    cin>>s;
    sort(s.begin(),s.end(), greater<int>());
    cout<<s;
 return 0;
}