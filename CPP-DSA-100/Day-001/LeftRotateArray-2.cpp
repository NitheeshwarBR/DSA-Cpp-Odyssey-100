#include <iostream>
#include<vector>
using namespace std;
void LeftRotateArray(vector<int>& nums)
{
    int temp=nums[0];
    int n=nums.size();
    for(int i=1;i<n;i++){
        nums[i-1]=nums[i];
    }
    nums[n-1]=temp;
}
int main()
{
    vector<int> a ={1,2,3,4,5};
    int k = 2;
    for(int i=0;i<k;i++){
        LeftRotateArray(a);
    }
    int m =a.size();
    cout<<" Rotated Array "<<endl;
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}