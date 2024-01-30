#include<iostream>
using namespace std;

int fibo(int n)
{
    if(n==0 || n==1)
        return n;
    else 
     return fibo(n-1)+fibo(n-2);
}
int main()
{
    cout<<"Enter a number ";
    int n ;
    cin >> n;
    cout<<" Fibbonacci Series ";
    int i=0;
    while(i<n)
    {
        cout<<" "<<fibo(i);
        i++;
    }
    cout<<endl;
    return 0;
}