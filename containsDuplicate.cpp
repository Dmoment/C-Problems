#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool twoSum(vector<int> &nums){
  vector<int>::iterator it = nums.begin();
  set<int> s;
  for(it = nums.begin(); it != nums.end(); ++it){
    s.insert(*it);
  }
  if (nums.size() == s.size())
    return false;
  return true;  
} 

int main()
{
    int n;
    cin >> n ;
    vector<int> nums;
    while(n--){
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }
    bool result = twoSum(nums);
    cout << result;
    // for(int i = 0; i < result.size(); i++){
    //     cout << result[i] << ' ';
    // }

}
