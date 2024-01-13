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