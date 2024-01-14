# Frequencies of an Sorted Array
## Description
Given an sorted array nums where nums[i] represents the elements of the array
<br/>
return the Frequencies (number of occurrences of the element) in the array



### Constraints
- Assume that the given array is of integer type 
- The Modifications should be made to the original array itself
- Time Complexity : (1< O < n)
- Space Complexity : (1< O < n)


#### Example 1 :
***INPUT***
```
nums[] = [10,10,10,25,30,30]
```
***Expected Output***
```
{
    10 - 3
    25 - 1
    30 - 2
}
```
---

#### Example 2:
***INPUT***
```
nums[] =[12,1,1,4,5,12,1,4,5]
 ```
***Expected Output***
```
{
    1 - 3
    4 - 2
    5 - 2
    12 - 2
}
```
---


### Approach 1 `[Count with Hash Map]`
***Intuition*** : Count the frequencies of the array with help of hashmap where the key would be the element and value would be frequencies
#### Algorithm
```
step 1 : Maintain a Hashmap
step 2 : Traverse through the array from 0 to n
step 3 : Count the number of occurences of each element in the array
step 4 : Display the key value pairs of the hashmap

```
#### Code 1
```cpp
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

```

##### problem-tags
- Arrays / vectors
- vector iterations (begin , end )
- Map / unordered_map
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
