//
//  016_Greedy_Coin.cpp
//  ForCodingTest
//
//  Created by MAS on 2023-02-24.
//

#include <iostream>
#include <vector>

using namespace std;

int N, K, cnt = 0;
vector<int> coins;

int main(){
    cin >> N >> K;
    
    for(int i = 0; i < N; ++i){
        int temp;
        cin >> temp;
        coins.push_back(temp);
    }
    
    sort(coins.begin(), coins.end(), greater<int>());
    
    for(int j = 0; j < coins.size(); ++j){
        if(K - coins[j] < 0) continue;
        
        while (K - coins[j] >= 0) {
            K -= coins[j];
            cnt++;
        }
    }
    cout << cnt << "\n";
}
