#include <iostream>

using namespace std;

bool nums[100];

int main(){
  for(int i = 2; i < sizeof(nums); ++i){
    nums[i] = true;
  }
  for(int i = 2; i*i < sizeof(nums); ++i){
    if(nums[i]){
      for(int j = i*i; j < sizeof(nums); j+=i){
        nums[j] = false;
      }
    }
  }
  for(int i = 1; i < sizeof(nums); ++i){
    if(nums[i]) cout << i << " ";
  }
}