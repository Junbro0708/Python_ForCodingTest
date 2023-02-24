////
////  009_DFS_Basic.cpp
////  ForCodingTest
////
////  Created by MAS on 2023-02-23.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//#define MAX_N 100002
//
//using namespace std;
//
//bool visited[MAX_N];
//int Count[MAX_N];
//int cnt = 1;
//vector<int> Graph[MAX_N];
//
//void dfs(int node){
//    if(visited[node]){
//        return;
//    }
//    visited[node] = true;
//    Count[node] = cnt;
//    cnt++;
//    
//    sort(Graph[node].begin(), Graph[node].end());
//    for(int next = 0; next < Graph[node].size(); ++next){
//        int x = Graph[node][next];
//        dfs(x);
//    }
//}
//
//int main(){
//    int N, M, R;
//    cin >> N >> M >> R;
//    for(int i = 0; i < M; ++i){
//        int u, v;
//        cin >> u >> v;
//        Graph[u].push_back(v);
//        Graph[v].push_back(u);
//    }
//    dfs(R);
//    for(int z = 1; z <= N; ++z){
//        cout << Count[z] << "\n";
//    }
//}
