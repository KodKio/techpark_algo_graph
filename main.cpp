#include <iostream>

#include "algorithms.h"
#include "listGraph.h"
#include "matrixGraph.h"
#include "arcGraph.h"
#include "setGraph.h"

int main(int argc, const char * argv[]) {
    ListGraph listGraph(7);
    listGraph.AddEdge(0, 1);
    listGraph.AddEdge(0, 5);
    listGraph.AddEdge(1, 2);
    listGraph.AddEdge(1, 3);
    listGraph.AddEdge(1, 5);
    listGraph.AddEdge(1, 6);
    listGraph.AddEdge(3, 2);
    listGraph.AddEdge(3, 4);
    listGraph.AddEdge(3, 6);
    listGraph.AddEdge(5, 4);
    listGraph.AddEdge(5, 6);
    listGraph.AddEdge(6, 4);

    std::cout << "List graph 1:" << std::endl;
    std::cout << "Count of vertexes: " << listGraph.VerticesCount() << std::endl;
    std::cout << "BFS: " << std::endl;
    mainBFS(listGraph, [](int vertex){ std::cout << vertex << " "; });
    std::cout << std::endl;
    std::cout << "DFS: " << std::endl;
    mainDFS(listGraph, [](int vertex){ std::cout << vertex << " "; });
    std::cout << std::endl;

    std::cout << std::endl << "List graph 2:" << std::endl;

    ListGraph graph2(listGraph);
    std::cout << "Count of vertexes: " << graph2.VerticesCount() << std::endl;
    std::cout << "BFS: " << std::endl;
    mainBFS(graph2, [](int vertex){ std::cout << vertex << " "; });
    std::cout << std::endl;
    std::cout << "DFS: " << std::endl;
    mainDFS(graph2, [](int vertex){ std::cout << vertex << " "; });
    std::cout << std::endl;;

    std::cout << std::endl << "Matrix graph:" << std::endl;

    MatrixGraph matrixGraph(graph2);
    std::cout << "Count of vertexes: " << matrixGraph.VerticesCount() << std::endl;
    std::cout << "BFS: " << std::endl;
    mainBFS(matrixGraph, [](int vertex){ std::cout << vertex << " "; });
    std::cout << std::endl;
    std::cout << "DFS: " << std::endl;
    mainDFS(matrixGraph, [](int vertex){ std::cout << vertex << " "; });
    std::cout << std::endl;

    std::cout << std::endl << "Arc graph:" << std::endl;

    ArcGraph arcGraph(matrixGraph);
    std::cout << "Count of vertexes: " << arcGraph.VerticesCount() << std::endl;
    std::cout << "BFS: " << std::endl;
    mainBFS(arcGraph, [](int vertex){ std::cout << vertex << " "; });
    std::cout << std::endl;
    std::cout << "DFS: " << std::endl;
    mainDFS(arcGraph, [](int vertex){ std::cout << vertex << " "; });
    std::cout << std::endl;

    std::cout << std::endl << "Set graph:" << std::endl;

    SetGraph setGraph(arcGraph);
    std::cout << "Count of vertexes: " << setGraph.VerticesCount() << std::endl;
    std::cout << "BFS: " << std::endl;
    mainBFS(setGraph, [](int vertex){ std::cout << vertex << " "; });
    std::cout << std::endl;
    std::cout << "DFS: " << std::endl;
    mainDFS(setGraph, [](int vertex){ std::cout << vertex << " "; });
    std::cout << std::endl;

    return 0;
}