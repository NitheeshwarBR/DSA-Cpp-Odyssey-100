
#include<iostream>
#include<vector>
using namespace std;
bool SubArrayExists(vector<int>& nums , int targetSum)
{
    int start =0 ;
    int end=0;
    int currentSum=0;
    int n=nums.size();
    bool flag=false;
    while(end<n)
    {
        currentSum+=nums[end];
        while(currentSum>targetSum)
        {
            currentSum-=nums[start];
            start++;
        }
        if(currentSum==targetSum)
        {
            flag=true;
            break;
        }
        
    }
    return flag;
}
int main()
{
    vector<int> a ={3,2,0,4,7};
    int target = 6;
    bool result=SubArrayExists(a,target);
    cout<< result<<endl;;
    return 0;
}