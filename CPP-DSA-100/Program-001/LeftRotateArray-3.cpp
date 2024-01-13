#include <iostream>
#include <vector>
using namespace std;

void LeftRotateArray(vector<int> &nums, int k) {
  int n = nums.size();
  k = k % n;

  for (int i = 0; i < k / 2; i++) {
    swap(nums[i], nums[k - i - 1]);
  }

  for (int i = k; i < (n + k) / 2; i++) {
    swap(nums[i], nums[n - i + k - 1]);
  }

  for (int i = 0; i < n / 2; i++) {
    swap(nums[i], nums[n - i - 1]);
  }
}

int main() {
  vector<int> a = {1, 2, 3, 4, 5};
  int k = 2;
  LeftRotateArray(a, k);

  int m = a.size();
  cout << "Rotated array" << endl;
  for (int i = 0; i < m; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}
