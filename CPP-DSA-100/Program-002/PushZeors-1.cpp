#include <iostream>
#include <vector>
using namespace std;
void PushZeros(vector<int>& nums)
{
    int n = nums.size();
    for(int i=0;i<n;i++)
    {
        if(nums[i]==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[j]!=0)
                {
                    swap(nums[i],nums[j]);
                    break;
                }
            }
        }
    }

}
int main()
{
    vector<int> a ={1,2,3,0,0,6,5,3,0};
    PushZeros(a);
    cout<<" Result "<<endl;
    for(const auto c : a)
    {
        cout<<c<<" ";
    }
    return 0;
}