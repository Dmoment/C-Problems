#include <iostream>
#include <vector>
#include<climits>
#include <bits/stdc++.h>

using namespace std;

int subArray(vector<int> &nums){
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < nums.size(); i++)
    {
        max_ending_here = max_ending_here + nums[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
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
