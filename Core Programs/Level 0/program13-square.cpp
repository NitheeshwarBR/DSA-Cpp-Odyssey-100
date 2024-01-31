#include<iostream>
using namespace std;
int square(int a)
{
    return a*a;
}
int main()
{
    cout<<" Enter a number ";
    int a;
    cin>>a;
    cout<<" The Square of "<<a<<" is "<<square(a)<<endl;
    return 0;
}