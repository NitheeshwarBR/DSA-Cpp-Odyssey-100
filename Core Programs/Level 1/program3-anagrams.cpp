//check whether 2 strings are anagrams to each other
#include<iostream>
#include<string>
#include<map>
using namespace std;
bool isAnagram (string s1 , string s2)
{
    bool flag=true;
    map<char,int>count;
    for(const auto & c : s1)
    {
        count[c]++;
    }
    for(const auto & c : s2)
    {
        count[c]--;
    }
    for(const auto& [key , value] : count)
    {
      if(value!=0)
          {
            flag=false;
            break;
          }
    }
    return flag;

}
int main()
{
    string s1,s2;
    cout<< " Enter string 1 : ";
    cin>>s1;
    cout<<" Enter strig 2 : ";
    cin>>s2;
    bool result=isAnagram(s1,s2);
    if(result) cout<<s1<<" and "<<s2<<" are anagrams "<<endl;
    else
      cout << s1 << " and " << s2 << " are not anagrams " << endl;
}