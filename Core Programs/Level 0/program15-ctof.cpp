#include <iostream>
using namespace std;
double ctof(int temp)
{
    return (((9/5)*temp)+32);
}
double ftoc(int temp)
{
    return ((temp-32)*(5/9));
}
int main()
{
    cout << " 1 . celcius to fahrenheit "<<endl;
    cout << " 2 .  fahrenheit to  celcius " << endl;
    cout<<" Enter your choice ";
    int a;
    cin>>a;
    double result;
    switch (a)
    {
    case 1:
        cout << " Enter the value in celcius ";
      int n;
      cin >> n;
        result=ctof(n);
        break;
    case 2:
    cout << " Enter the value in fahrenheit ";
      int f;
      cin >> f;
        result=ftoc(f);
        break;
    default:
        cout<<"Enter a valid choice ";
        break;
    }
    cout<<" The result is "<<result<<endl;
    return 0;
}