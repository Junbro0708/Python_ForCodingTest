//
//  010_DP_Tiles.cpp
//  ForCodingTest
//
//  Created by MAS on 2023-02-23.
//

#include <iostream>

#define MAX_N 1000001

using namespace std;

int N;
int tiles[MAX_N];

int main(){
    cin >> N;
    
    tiles[1] = 1;
    tiles[2] = 2;
    for(int i = 3; i <= N; ++i){
        tiles[i] = (tiles[i - 1] + tiles[i - 2]) % 15746;
    }
    cout << tiles[N] << "\n";
}
