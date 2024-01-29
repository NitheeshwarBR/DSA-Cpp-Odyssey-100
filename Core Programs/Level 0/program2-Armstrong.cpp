//write a program to check whether an integer is armstrong number or not
#include<iostream>
#include<cmath>
using namespace std;
bool isArmstrong(int n)
{
    int no_digits=0;
    int num=n;
    while(num!=0)
    {
        num/=10;
        ++no_digits;
    }
    num=n;

    int result=0;
    int power;
    while(num!=0)
    {
        int rem=num%10;
        power=round(pow(rem,no_digits));
        result+=power;
        num/=10;
    }
   
    
    return result==n;
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool result=isArmstrong(n);
    if(result) cout<<n<<" is a armstrong number"<<endl;
    else cout<<n << " is not a armstrong number"<<endl;
}