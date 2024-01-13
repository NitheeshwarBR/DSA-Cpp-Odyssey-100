#include <iostream>
#include <vector>
using namespace std;
void PushZeros(vector<int>& arr)
{
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            int j=i;
            while(arr[j]==0 && j<n)
            {
                j++;
            }
            arr[i]=arr[j];
            arr[j]=0;
        }
    }
}
int main()
{
    vector<int> a = {1, 2, 3, 0, 0, 6, 5, 3, 0};
  PushZeros(a);
  cout << " Result " << endl;
  for (const auto c : a) {
    cout << c << " ";
  }
  cout<<endl;
  return 0;
}