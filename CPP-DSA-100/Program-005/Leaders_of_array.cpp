// leaders in an array
#include <iostream>
#include <vector>
using namespace std;
vector<int> leaders_in_array(vector<int> &nums) {
  vector<int> result;
  int n = nums.size();
  for (int i = 0; i < n; i++) {
    bool is_leader = 1;
    for (int j = i + 1; j < n; j++) {
      if (nums[i] < nums[j]) {
        is_leader = 0;
        break;
      }
    }
    if (is_leader)
      result.push_back(nums[i]);
  }
  return result;
}
int main() {
  vector<int> arr1 = {7, 10, 4, 3, 6, 5, 2};
  vector<int> res = leaders_in_array(arr1);
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
  }
  cout << endl;
  return 0;
}