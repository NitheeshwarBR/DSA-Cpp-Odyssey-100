#include<iostream>
using namespace std;
int def_power(int a , int b)
{
    int result=1;
    for(int i=1;i<=b;i++)
        {
            result*=a;
        }
        return result;
}
int main()
{
    int a , b;
    cout<<" Enter the base and index ";
    cin >> a >> b;
    cout<<a <<" ^ "<<b<<" is "<<def_power(a,b)<<endl;
    return 0;
}