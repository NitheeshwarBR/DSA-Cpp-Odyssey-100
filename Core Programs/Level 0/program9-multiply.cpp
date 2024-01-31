#include<iostream>
using namespace std;
int multiply(int a , int b)
{
    int prod=0;
    for(int i=1;i<=b;i++)
    {
        prod+=a;
    }
    return prod;
}
int main()
{
    cout<<" Enter 2 numbers ";
    int a ,b;
    cin>>a>>b;
    int result= multiply(a,b);
    cout<<" The product of "<<a<<" and "<<b<<" is "<<result <<endl;
    return 0;
}