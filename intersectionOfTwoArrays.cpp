#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2){
  sort(nums1.begin(), nums1.end());
  sort(nums2.begin(), nums2.end());
  vector <int> intersect;
  set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(intersect));
  return intersect;
} 

int main()
{
    int m, n;
    cin >> m >> n ;
    vector<int> nums1;
    vector<int> nums2;
    while(m--){
        int tmp;
        cin >> tmp;
        nums1.push_back(tmp);
    }
     while(n--){
        int tmp1;
        cin >> tmp1;
        nums2.push_back(tmp1);
    }
    vector <int> result = intersect(nums1, nums2);
    for(int i = 0; i< result.size(); ++i){
      cout << " " << result[i];
    }
}
