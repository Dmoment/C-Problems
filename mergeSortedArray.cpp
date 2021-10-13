#include <iostream>
#include <vector>
#include<climits>
#include <bits/stdc++.h>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  vector<int>::iterator it = nums1.begin() + m;
  vector<int>::iterator it2 = nums2.begin();
  nums1.insert(it, it2, nums2.end());
  vector<int>::iterator erase_it_start = nums1.begin() + m + n;
  vector<int>::iterator erase_it_end = nums1.end();
  nums1.erase(erase_it_start, erase_it_end);
  sort(nums1.begin(), nums1.end());
  for(int i = 0; i < nums1.size(); ++i){
    cout << nums1[i] << " ";
  }
        
}

int main()
{
    int m, n;
    vector<int> nums1;
    vector<int> nums2;
    cin >> m >>n;
    for(int i = 0; i< m; i++){
      int num;
      cin >> num;
      nums1.push_back(num);
    }
    for(int i = m; i< m + n; i++){
      nums1.push_back(0);
    }
    for(int i =0; i < n; i++){
      int tmp;
      cin >> tmp;
      nums2.push_back(tmp);
    }
    merge(nums1, m, nums2, n);

}
