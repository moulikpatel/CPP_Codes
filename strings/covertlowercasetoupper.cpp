#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s="asljfroeritfjidcxvfiog";//covert to upper case
   for(int i=0;i<s.size();i++){
    if(s[i]>='a' && s[i]<='z'){
        s[i]=s[i]-32;
    }
   
   }
    cout<<s<<endl;
    //convert to lower case
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z')
        s[i]=s[i]+32;
    }
    cout<<s;
 return 0;
}