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