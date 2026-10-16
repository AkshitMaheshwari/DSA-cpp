#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int, vector<int>> adjList;
    void addEdge(int u, int v, bool direction){

        if(direction == 1){
            adjList[u].push_back(v);
        }
        else{
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
    }
};