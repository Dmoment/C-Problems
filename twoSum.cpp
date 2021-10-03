#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
    vector<int> result;
    vector<pair<int, int>> tmp;
    for (int i =0; i< nums.size(); ++i){
        tmp.push_back(make_pair(nums[i], i));
    }
    sort(tmp.begin(), tmp.end());
    int p = 0, q= tmp.size() - 1;
    for(int i =0; i< tmp.size(); ++i){
        cout << tmp[p].first << " "<< tmp[q].first << endl;
        if ((tmp[p].first + tmp[q].first) > target){
            q--;
            continue;
        }else if((tmp[p].first + tmp[q].first) < target){
            p++;
            continue;
        }else if(tmp[p].first + tmp[q].first == target){
            result.push_back(tmp[p].second);
            result.push_back(tmp[q].second);
            break;
        }
    } 
    return result;
} 

int main()
{
    int target, n;
    cin >> n >> target;
    vector<int> nums;
    while(n--){
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }
    vector<int> result = twoSum(nums, target);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << ' ';
    }

}
