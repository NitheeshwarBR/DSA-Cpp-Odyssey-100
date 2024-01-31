#include<iostream>
using namespace std;
bool leap_or_not(int n)
{
    if(n%4==0 || n%400 == 0) return true;
    return false;
}
int main()
{
    cout<<" Enter the year ";
    int n;
    cin>>n;
    bool result = leap_or_not(n);
    if(result) cout<<n <<" is a leap year "<<endl;
    else cout << n << " is not a leap year " << endl;
}