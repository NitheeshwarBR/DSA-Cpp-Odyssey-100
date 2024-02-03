#include<iostream>
#include<string>
using namespace std;
string fill_spaces(string s , char c)
{
    int i=0;
    while(s[i]!=' ')
    {
        i++;
    }
    int n=s.length();
    for(int j=0;j<n;j++)
    {
        if(j==i)
        {
            s[j]=c;
        }
    }
    return s;
}
int main()
{
    string s;
  char c;
  cout << "Enter the string: ";
  getline(cin, s); // Use getline to read the entire line
  cout << "Enter the character: ";
  cin >> c;
  string res = fill_spaces(s, c);
  cout << "Result: " << res << endl;
}