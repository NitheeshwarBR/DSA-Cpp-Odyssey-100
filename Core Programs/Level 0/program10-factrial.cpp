#include<iostream>
using namespace std;
int fact(int n)
{
    int result=1;
    for(int i=1;i<=n;i++)
    {
        result*=i;
    }
    return result;
} 
int main()
{
    cout<<"Enter a number ";
    int n;
    cin>>n;
    cout<<"The Factorial of "<<n<<" is "<<fact(n)<<endl;
    return 0;
}