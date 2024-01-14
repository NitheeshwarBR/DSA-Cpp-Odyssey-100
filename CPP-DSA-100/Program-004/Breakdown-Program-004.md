# SubArray Exists
## Description
Given an sorted array nums where nums[i] represents the elements of the array and the target sum
<br/>
return if there exists subarray whose sum is equal to the target sum



### Constraints
- Assume that the given array is of integer type 
- The Modifications should be made to the original array itself
- Time Complexity : (1< O < n)
- Space Complexity : (1< O < n)


#### Example 1 :
***INPUT***
```
nums[] = [3,2,0,4,7] , targetSum = 6
```
***Expected Output***
```
True
```
---


### Approach 1 `[Sliding Window]`
***Intuition*** : To Check if the subarray exists , increase the window size and elements until the sum is equal to the target sum 
#### Algorithm
```
step 1 : Maintain 2 pointers (Start , end)
step 2 : Traverse through the array from 0 to n
step 3 : Add the sum of the subarray continously until when the sum < targetSum
step 4 : If the Sum > targetSum , adjust ( decrease ) the size of the window until when the Sum == targetSum

```
#### Code 1
```cpp
//Sliding window approach
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

```

##### problem-tags
- Arrays / vectors
- vector iterations (begin , end )
- Sliding Window Technique
### Complexity Analysis
#### Time Complexity 
```
T(n) = T(O(n))
T(n) = O(n)


where ,
n -> number of elements in the array
```
#### Space Complexity 

```
S(n) = S(O(1))
S(n) = O(1)

where ,
n -> number of elements in an array 
```
---
