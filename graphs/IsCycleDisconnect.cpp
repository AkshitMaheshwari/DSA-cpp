#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    bool isCylceBFS(unordered_map<int,vector<int>>& adjList, int src, unordered_map<int, bool>& visited, unordered_map<int, int>& parent, queue<int>& q){
        q.push(src);
        visited[src] = true;
        parent[src] = -1;

        while(!q.empty()){
            int currNode = q.front();
            q.pop();
            for(auto nbr: adjList[currNode]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr] = true;
                    parent[nbr] = currNode;
                }
                else if(visited[nbr] == true && nbr!=parent[currNode]){
                    return true;
                }

            }
        }
        return false;

    
    }

    bool isCycle(int v, vector<vector<int>> &edges){
        unordered_map<int, vector<int>> adjList;
        for(auto i: edges){
            int u = i[0];
            int v = i[1];

            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        queue<int> q;
        unordered_map<int, bool> visited;
        unordered_map<int, int> parent;
        
        for(int src=0;src<edges.size();src++){
            if(!visited[src]){
                bool ans = isCylceBFS(adjList,src,visited,parent,q);
                if(ans == true){
                    return true;
                }
            }
        }
        return false;

    }
};