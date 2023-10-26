#include<iostream>
using namespace std;
int main(){
    string str,str1;
    str="fami";
    str1="ly";
    str.append(str1);
    cout<<str<<endl;
    //or
    cout<<str+str1<<endl;
    return 0;
}