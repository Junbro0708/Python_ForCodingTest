#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Nums
{
  int a, b;

  Nums(int x, int y){
    a = x;
    b = y;
  }

  bool operator<(const Nums &c)const{
    return a < c.a;
  }
};


int main(){
  priority_queue<Nums> list;
  list.push(Nums(55, 11));
  list.push(Nums(456, 22));
  list.push(Nums(999, -10));
  list.push(Nums(-4, 465));
  cout << list.top().a << "\n";

  vector<Nums> list2;
  list2.push_back(Nums(55, 11));
  list2.push_back(Nums(465, 22));
  list2.push_back(Nums(999, -10));
  list2.push_back(Nums(-4, 465));

  cout << list2[0].a << " " << list2[0].b << "\n";

  sort(list2.begin(), list2.end());

  cout << list2[0].a << " " << list2[0].b << "\n";
  return 0;
}