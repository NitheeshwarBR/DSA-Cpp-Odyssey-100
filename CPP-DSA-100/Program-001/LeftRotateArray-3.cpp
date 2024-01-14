#include<iostream>
#include<vector>
using namespace std;

void ReverseArray(vector<int> &nums, int start, int end) {
  while (start < end) {
    swap(nums[start], nums[end]);
    start++;
    end--;
  }
}

void LeftRotateArray(vector<int> &nums, int k) {
  int n = nums.size();
  k = k % n; 
  ReverseArray(nums, 0, k - 1);
  ReverseArray(nums, k, n - 1);
  ReverseArray(nums, 0, n - 1);
}

int main() {
  vector<int> a = {1, 2, 3, 4, 5};
  int k = 1;

  LeftRotateArray(a, k);

  int m = a.size();
  cout << "Rotated Array" << endl;
  for (int i = 0; i < m; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}