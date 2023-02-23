//
//  008_DFS_BFS.cpp
//  ForCodingTest
//
//  Created by MAS on 2023-02-21.
//

#include <iostream>
#include <queue>
#include <stack>
#include <string.h>

#define MAX_N 1001

using namespace std;

int N, E, V;
int Graph[MAX_N][MAX_N];

void dfs(int node){
    bool visited[MAX_N] = { false };
    stack<int> mystack;
    mystack.push(node);
    
    while(!mystack.empty()){
        int curr = mystack.top();
        mystack.pop();
        
        if(visited[curr]) continue;
        
        cout << curr << " ";
        visited[curr] = true;
        
        for(int next = N; next > 0; --next){
            if(!visited[next] && Graph[curr][next]){
                mystack.push(next);
            }
        }
    }
}

void bfs(int node){
    bool visited[MAX_N] = { false };
    queue<int> myqueue;
    myqueue.push(node);
    visited[node] = true;
    
    while(!myqueue.empty()){
        int curr = myqueue.front();
        myqueue.pop();
        
        cout << curr << " ";
        
        for(int next = 1; next <= N; ++next){
            if(!visited[next] && Graph[curr][next]){
                visited[next] = true;
                myqueue.push(next);
            }
        }
    }
}

int main(){
    cin >> N >> E >> V;
    memset(Graph, 0, sizeof(Graph));
    
    for(int i = 0; i < E; ++i){
        int u, v;
        cin >> u >> v;
        Graph[u][v] = Graph[v][u] = 1;
    }
    dfs(V);
    cout << "\n";
    bfs(V);
}

