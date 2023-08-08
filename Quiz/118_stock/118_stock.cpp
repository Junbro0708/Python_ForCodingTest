#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
  vector<int> stock;
  stock.push_back(1);
  stock.push_back(2);
  stock.push_back(3);

  int max_ = -2147000000, min_ = 2147000000;
  for(int i = 0; i < stock.size(); ++i){
    max_ = max(max_, stock[i] - min_);
    min_ = min(min_, stock[i]);
  }
  cout << max_ << "\n";
  return 0;
}