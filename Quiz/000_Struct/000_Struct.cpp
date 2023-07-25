#include <iostream>
#include <vector>

using namespace std;

struct Loc{
  int x, y, z;
  Loc(int a, int b, int c){
    x = a;
    y = b;
    z = c;
  }
  bool operator<(const Loc &l)const{
    if(x != l.x) return x<l.x;
    if(y != l.y) return y<l.y;
    if(z != l.z) return z<l.z;
  }
};

int main(){
  vector<Loc> XY;
  XY.push_back(Loc(2, 3, 5));
  XY.push_back(Loc(3, 6, 7));
  XY.push_back(Loc(2, 3, 1));
  XY.push_back(Loc(5, 2, 3));
  XY.push_back(Loc(3, 1, 6));
  sort(XY.begin(), XY.end());
  for(auto pos : XY)
    cout << pos.x << pos.y << pos.z << "\n";
}