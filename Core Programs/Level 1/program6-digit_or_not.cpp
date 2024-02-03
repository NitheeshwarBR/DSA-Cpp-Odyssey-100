#include<iostream>
using namespace std;
bool is_digit_or_not(char s)
{
    return ((s) >= 48 && (s) <= 57) ? true : false;
}
int main()
{
    cout<<" Enter the character : ";
    char s;
    cin>>s;
    bool result = is_digit_or_not(s);
    if(result) cout<<s <<" is a digit "<<endl;
    else cout<<s<<" is not a digit "<<endl;
    return 0;
}