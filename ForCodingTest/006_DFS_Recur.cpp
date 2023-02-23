////
////  006_DFS_Recur.cpp
////  ForCodingTest
////
////  Created by MAS on 2023-02-21.
////
//
//#include <iostream>
//#include <queue>
//
//#define MAX_N 10
//
//using namespace std;
//
//int N, E;
//int Graph[MAX_N][MAX_N];
//int visited[MAX_N];
//
//void dfs(int node){
//    visited[node] = true;
//    cout << node << " ";
//    
//    for(int next = 0; next < N; ++next){
//        if(!visited[next] && Graph[node][next])
//            dfs(next);
//    }
//}
//
//int main(){
//    cin >> N >> E;
//    memset(visited, false, sizeof(visited));
//    memset(Graph, 0, sizeof(Graph));
//    
//    for(int i = 0; i < E; ++i){
//        int u, v;
//        cin >> u >> v;
//        Graph[u][v] = Graph[v][u] = 1;
//    }
//    dfs(0);
//    return 0;
//}
