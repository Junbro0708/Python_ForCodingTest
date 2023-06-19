// #include <iostream>

// using namespace std;

// int main(){
//   string str, answer = "";

//   getline(cin, str);

//   for(int i = 0; i < str.length(); ++i){
//     char temp;
//     if(str[i] >= 65 && str[i] <= 90){
//       temp = str[i] + 32;
//       answer += temp;
//     }else if(str[i] >= 97 && str[i] <= 122){
//       answer += str[i];
//     }
//   }

//   cout << answer;
// }

#include <stdio.h>

int main(){
  char a[101], b[101];
  int p = 0;

  gets(a);
  for(int i = 0; a[i] != '\0'; ++i){
    if(a[i] != ' '){
      if(a[i] >= 65 && a[i] <= 90){
        b[p++] = a[i] + 32;
      }else b[p++] = a[i];
    }
  }
  b[p] = '\0';
  printf("%s", b);
  return 0;
}