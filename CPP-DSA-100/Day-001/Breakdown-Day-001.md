# Left Rotating an Array by K Elements

## Description
Given an array nums where nums[i] represents the elements of the array and a factor k , 
<br/>
The array should be returned such that it is rotated by K number of elements.

### Constraints
- Assume that the given array is of integer type 
- The Modifications should ve made to the original array itself
- Time Complexity : (1< O < n)
- Space Complexity : (1< O < n)


#### Example 1 :
***INPUT***
```
nums[] = [1,2,3,4,5] , k=1
```
***Expected Output***
```
nums[] =[2,3,4,5,1]
```
---

#### Example 2:
***INPUT***
```
nums[] =[7,8,9,10,25,11] , k=2
 ```
***Expected Output***
```
nums[] = [9,10,25,11,7,8]
```
---


### Approach 1 `[Change The order of the elements]`
***Intuition*** : An array in order to be rotated the elements in the array elements order must be changed based on specified condition
#### Algorithm
```
step 1 : Store the First k elements in an array 
step 2 : Traverse through the array from 0 to  n-k
step 3 : Store the current element(i) with the (i+k)
step 4 : Store the last elements at the back 

```
#### Code
```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> LeftRotateArray(vector<int> &nums, int k) {
  vector<int> temp(nums.begin(), nums.begin() + k);
  int n = nums.size();
  for (int i = 0; i < n - k; i++) {
    nums[i] = nums[i + k];
  }
  for (int j = 0; j < k; j++) {
    nums[n - k + j] = temp[j];
  }
  return nums;
}
int main() {
  vector<int> a = {1, 2, 3, 4, 5};
  int k = 2;
  vector<int> result = LeftRotateArray(a, k);
  int m = result.size();
  cout << " Rotated array " << endl;
  for (int i = 0; i < m; i++) {
    cout << result[i] << " ";
  }
  cout << endl;
}

```
### Complexity Analysis
#### Time Complexity 
```
T(n) = T(O(n))+T(O(k))
T(n) = O(n)

where ,
n -> number of elements in the array
```
#### Space Complexity 

```
S(n) = S(O(k))
S(n) = O(k)

where ,
n -> number of elements in an array 
k -> The factor k , The number of elements by which it is rotated
```
---

### Approach 2 :`[]`




