#include<iostream>
using namespace std;
void fibo(int n)
{
    int sum=0;
    int a =0;
    int b=1;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<< a <<" ";
            continue;
        }
        if(i==2)
        {
            cout<< b<<" ";
            continue;
        }
        sum=a+b;
        b=a;
        a=sum;
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<" Enter a number ";
    cin>> n;
    fibo(n);
    return 0;
}