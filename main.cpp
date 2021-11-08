#include "Graph.h"

int main(){
    Graph graphA(12,14);

    graphA.addEdge(0, 1, 1);
    graphA.addEdge(0, 9, 1);
    graphA.addEdge(9, 8, 1);
    graphA.addEdge(1, 8, 1);
    graphA.addEdge(8, 7, 1);
    graphA.addEdge(7, 10, 1);
    graphA.addEdge(10, 11, 1);
    graphA.addEdge(11, 7, 1);
    graphA.addEdge(7, 6, 1);
    graphA.addEdge(7, 3, 1);
    graphA.addEdge(6, 5, 1);
    graphA.addEdge(5, 3, 1);
    graphA.addEdge(3, 2, 1);
    graphA.addEdge(3, 4, 1);

    graphA.DFS(0);

    return 0;
}
