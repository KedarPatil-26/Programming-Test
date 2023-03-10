#include<iostream>
#include<string>

using namespace std;

void palindrome(string s){
    string p = s;

    reverse(p.begin(), p.end());
    if(p==s){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}
 int main(){
    string s = "ABCBA";
    cout<<palindrome(s);
    return 0;
 }