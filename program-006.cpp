#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
  vector<int> nums = {1,5,7,9};
  int n = nums.size();

  set<int> distinct_elements(nums.begin(), nums.end());

  auto it = max_element(distinct_elements.begin(), distinct_elements.end());
  int m = (it != distinct_elements.end()) ? *it : 0;

  vector<int> b(distinct_elements.begin(), distinct_elements.end());
  vector<int> result;

  for (int i = 1; i <= m; i++) {
    if (find(b.begin(), b.end(), i) == b.end()) {
      result.push_back(i);
    }
  }

  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }

  cout << endl;

  return 0;
}
