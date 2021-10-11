#include <iostream>
#include <vector>
#include<climits>
#include <iterator>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int subArray(vector<int> &nums){
    // base condition
  if (nums.size() == 1){
    return nums[0];
  }
  
  vector<int> left, right;
  vector<int>::iterator middleItr(nums.begin() + nums.size()/2);
  for (auto it = nums.begin(); it != nums.end(); ++it){
    if(distance(it, middleItr) > 0){
      left.push_back(*it);
    }
    else {
      right.push_back(*it);
    }
  }
  int left_mss = subArray(left);
  int right_mss = subArray(right);
  int leftSum = INT_MIN;
  int rightSum = INT_MIN;
  int sum =0;
  vector<int>::reverse_iterator leftit;
  vector<int>::iterator rightit;
  for(leftit = left.rbegin(); leftit != left.rend(); ++leftit){
    sum += *leftit;
    leftSum = max(sum, leftSum);
  }
  sum = 0;
  for(rightit = right.begin(); rightit != right.end(); ++rightit){
    sum += *rightit;
    rightSum = max(sum, rightSum);
  }
  int ans = max(left_mss, right_mss);
  return (max(ans, leftSum + rightSum));

} 


int main()
{
    int target, n;
    cin >> n ;
    vector<int> nums;
    while(n--){
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }
    int result = subArray(nums);
    cout << result;

}
