# Push Zeros to End
## Description
Given an array nums where nums[i] represents the elements of the array
<br/>
The array should be returned such that the non zero elements must be placed before all the zeros **in order**



### Constraints
- Assume that the given array is of integer type 
- The Modifications should be made to the original array itself
- Time Complexity : (1< O < n)
- Space Complexity : (1< O < n)


#### Example 1 :
***INPUT***
```
nums[] = [1, 2, 3, 0, 0, 6, 5, 3, 0]
```
***Expected Output***
```
nums[] =[1,2,3,6,5,3,0,0,0]
```
---

#### Example 2:
***INPUT***
```
nums[] =[7,8,9,0,0,3,0,12,0,0,25]
 ```
***Expected Output***
```
nums[] = [7,8,9,3,12,25,0,0,0,0,0]
```
---


### Approach 1 `[Swap with non zero elements]`
***Intuition*** : An Non Zero element must be swapped with the zero element in place
#### Algorithm
```
step 1 : Traverse through the array from 0 to n
step 2 : check if the Zero element exists
step 3 : If the Zero is encountered then Traverse the array from 1 to n
step 4 : Check if the non zero element is encountered and swap with the first occurence of an non zero element with the zero

```
#### Code 1
```cpp
#include <iostream>
#include <vector>
using namespace std;
void PushZeros(vector<int> &nums) {
  int n = nums.size();
  for (int i = 0; i < n; i++) {
    if (nums[i] == 0) {
      for (int j = i + 1; j < n; j++) {
        if (nums[j] != 0) {
          swap(nums[i], nums[j]);
          break;
        }
      }
    }
  }
}
int main() {
  vector<int> a = {1, 2, 3, 0, 0, 6, 5, 3, 0};
  PushZeros(a);
  cout << " Result " << endl;
  for (const auto c : a) {
    cout << c << " ";
  }
  return 0;
}

```

##### problem-tags
- Arrays / vectors
- vector iterations (begin , end )
### Complexity Analysis
#### Time Complexity 
```
T(n) = T(O(n*n))
T(n) = O(n^2)


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

#### Code 2
```cpp
#include <iostream>
#include <vector>
using namespace std;
void PushZeors(vector<int> &nums) {
  int n = nums.size();
  for (int i = 0; i < n; i++) {
    if (nums[i] == 0) {
      int temp = i;
      while (nums[temp] == 0 && temp < n) {
        temp++;
      }
      nums[i] = nums[temp];
      nums[temp] = 0;
    }
  }
}
int main() {
  vector<int> a = {10, 5, 0, 0, 8, 0, 9, 0};
  PushZeors(a);
  cout << "Res" << endl;
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}
```
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
