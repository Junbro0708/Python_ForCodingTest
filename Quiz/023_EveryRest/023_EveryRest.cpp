#include <iostream>

using namespace std;

// int main(){
//   int num;
//   cin >> num;

//   for(int i = 1; i <= num; ++i){
//     int cnt = 0;
//     for(int j = 1; j <= i; ++j){
//       if(i % j == 0) cnt++;
//     }
//     cout << cnt << " ";
//   }
//   return 0;
// }

int cnt[50001];

int main(){
  int num;
  cin >> num;

  for(int i = 1; i <= num; ++i){
    for(int j = i; j <= num; j+=i){
      cnt[j]++;
    }
  }
  for(int i = 1; i <= num; ++i)
    cout << cnt[i] << " ";
  return 0;
}