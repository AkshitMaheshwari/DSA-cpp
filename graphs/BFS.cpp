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

    void printadj(){
        for(auto i : adjList){
            cout<<i.first<<"->";
            cout<<"{";
            for(auto j: i.second){
                cout<<j<<", ";
            }
            cout<<"}";
        }
    }

    void bfs(int src){
        queue<int> q;
        unordered_map<int, bool> visited;
        // initial state
        q.push(src);
        visited[src] = true;
        while(!q.empty()){
            int frontNode = q.front();
            q.pop();
            cout<<frontNode<<", ";
            for(auto nbr: adjList[frontNode]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }

    }
};

int main(){
    Graph g;
    g.addEdge(0, 1, 0);
    g.addEdge(0, 4, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(2, 3, 0);
    g.printadj();
    g.bfs(0);
    return 0;   
}