//convertion of string from lower to upper or upper to lower using transfrom function
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"enter lower case string"<<endl;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s;
 return 0;
}