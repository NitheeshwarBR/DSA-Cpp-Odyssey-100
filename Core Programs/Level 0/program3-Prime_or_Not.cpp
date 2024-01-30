#include<iostream>
using namespace std;
bool isPrime(int n)
{   int count=0;
    if(n==1) return false;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
        
    }
    return (count>1)?false:true;
}
int main()
{
    cout<<"Enter a Number to check prime or not : ";
    int n;
    cin>>n;
    bool result=isPrime(n);
    if (result) cout<< n <<" is a prime number "<<endl;
    else cout << n << " is not a prime number " << endl;
}