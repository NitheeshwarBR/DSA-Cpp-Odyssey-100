#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isPalindrome(string s)
{
    stack<char>stack1;
    int n=s.length();
    for(int i=0;i<n;i++)
        stack1.push(s[i]);
    string res="";
    while(!stack1.empty()){
        res+=stack1.top();
        stack1.pop();
    }
    cout<<" The reversed string is "<<res<<endl;
    return s==res;
}
int main()
{
    string s;
    cout<<" Enter the string ";
    cin>>s;
    bool result = isPalindrome(s);
    if(result) cout<<s << " is a palindrome "<<endl;
    else cout << s << " is not a palindrome " << endl;
    return 0;
}