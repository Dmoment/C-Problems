#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    int n,a;
    cin >> n;
    if (n < 0){
      a = abs(n);
    } else{
      a = n;
    }
    string s = to_string(a);
    string tmp = to_string(a);
    reverse(s.begin(), s.end());
    std::string rs = s;
    stringstream ss(s);
    int revNum;
    ss >> revNum;
    if (n < 0){
      revNum *= -1;
    }
    reverse(rs.begin(), rs.end());
    if (revNum > 2147483647){
      return 0;
    }
    if (rs == tmp){
      return revNum;
    } else{
      return  0;
    }

  return 0;
}
