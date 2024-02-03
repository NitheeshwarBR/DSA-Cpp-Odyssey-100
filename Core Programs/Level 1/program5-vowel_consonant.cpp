#include<iostream>
#include<set>
using namespace std;
bool isVowel(char a)
{
    set<char>vowels={'a','e','i','o','u','A','E','I','O','U'};
   return vowels.find(a) != vowels.end();
}
int main()
{
    cout<<" Enter the character ";
    char c;
    cin>>c;
    bool result=isVowel(c);
    if(result) cout<<c<<" is a vowel "<<endl;
    else cout << c << " is a consonant " << endl;
}