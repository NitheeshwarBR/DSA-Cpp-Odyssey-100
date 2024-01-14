#include<iostream>
#include<map>
#include<vector>
using namespace std;
void GetFrquencies(vector<int>& nums)
{
    int n=nums.size();
    map<int,int>result;
    for(int num:nums)
    {
        result[num]++; //count the frequencies and store it in hashmap with value as key and frequenciy as value
    }
    for(const auto& c : result)
    {
        cout<<c.first<<" - "<<c.second<<endl;
    }
}
int main()
{
    vector<int> a ={12, 1, 1, 4, 5, 12, 1, 4, 5};
    GetFrquencies(a);
    return 0;
}