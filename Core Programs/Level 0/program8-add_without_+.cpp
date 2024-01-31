#include<iostream>
#include<cmath>
using namespace std;
int add_two_numbers(int a, int b)
{
    return ((pow(a,2)-pow(b,2))/(a-b));
}
int main()
{
    cout<<"Enter two numbers ";
    int a , b;
    cin >>a >>b;
    cout<< " The addition of "<<a<<" , "<<b<<" is "<<add_two_numbers(a,b);
    cout<<endl;
    return 0;
}