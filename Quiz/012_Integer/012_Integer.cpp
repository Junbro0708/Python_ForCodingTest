#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int a, b;
  cin >> a >> b;

  string str_a = to_string(a);
  string str_b = to_string(b);
  reverse(str_a.begin(), str_a.end());
  reverse(str_b.begin(), str_b.end());

  int answer = stoi(str_a) > stoi(str_b) ? stoi(str_a) : stoi(str_b);

  cout << answer;
}