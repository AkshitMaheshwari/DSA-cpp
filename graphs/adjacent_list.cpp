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
};

int main(){
    Graph g;
    g.addEdge(0, 1, 0);
    g.addEdge(0, 4, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(2, 3, 0);
    g.printadj();
    return 0;   
}