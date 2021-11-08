#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
#include <iostream>
using std::vector;
using std::cout;

class Graph{
    public:
        Graph(int v,int e):numberOfVertices{v},numberOfEdges{e}{
            for(int i=0;i<v;i++){
                visited.push_back(false);
            }
            adjMat = new int*[v];
            for(int row=0;row<v;row++){
                adjMat[row] = new int[v];
                for(int col=0;col<v;col++){
                    adjMat[row][col] = 0;
                }
            }
        }    
       
        void addEdge(int start,int end,int weight){
            adjMat[start][end] = weight;
            adjMat[end][start] = weight;
        }

        void DFS(int at){
            if(visited[at]) return;
            cout << at << " ";
            visited[at] = true;
            for(int i=0;i<numberOfVertices;i++){
                //Check for neighbor nodes which are not visited
                if(adjMat[at][i] != 0 && !visited[i]){
                    DFS(i);
                }
            }
        }

    private:
        int numberOfVertices;
        int numberOfEdges;
        int** adjMat;
        vector<bool> visited;
        
};
#endif
