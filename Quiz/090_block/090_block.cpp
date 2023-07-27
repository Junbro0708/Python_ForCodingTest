#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Block{
  int s, h, w;

  Block(int a, int b, int c){
    s = a;
    h = b;
    w = c;
  }

  bool operator<(const Block &b)const{
    return s > b.s;
  }
};

int main(){
  int N, answer = 0;
  cin >> N;

  vector<Block> list;
  vector<int> res(N);
  for(int i = 0; i < N; ++i){
    int temp1, temp2, temp3;
    cin >> temp1 >> temp2 >> temp3;
    list.push_back(Block(temp1, temp2, temp3));
  }

  sort(list.begin(), list.end());

  res[0] = list[0].h;
  for(int i = 1; i < N; ++i){
    int max = 0;
    for(int j = i - 1; j >= 0; --j){
      if(list[i].w < list[j].w){
        if(max < res[j]){
          max = res[j];
        }
      }
    }
    res[i] = max + list[i].h;
    if(answer < max + list[i].h) answer = max + list[i].h;
  }

  cout << answer;
  return 0;
}

/*
5
25 3 4
4 4 6
9 2 3
16 2 5
1 5 2
*/