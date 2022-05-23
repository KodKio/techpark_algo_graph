//
// Created by Николай Степанов on 23.05.2022.
//

#include "matrixGraph.h"

MatrixGraph::MatrixGraph(int size)
            : adjacencyMatrix(size, std::vector<int>(size)) {};

MatrixGraph::MatrixGraph(const IGraph &graph)
            : adjacencyMatrix(graph.VerticesCount(), std::vector<int>(graph.VerticesCount())) {
    for (int i = 0; i < graph.VerticesCount(); i++) {
        std::vector<int> next = graph.GetNextVertices(i);
        for (int& j : next)
            adjacencyMatrix[i][j] = 1;
    }
}

void MatrixGraph::AddEdge(int from, int to) {
    assert(0 <= from && from < adjacencyMatrix.size());
    assert(0 <= to && to < adjacencyMatrix.size());
    adjacencyMatrix[from][to] = 1;
}

int MatrixGraph::VerticesCount() const {
    return (int)adjacencyMatrix.size();
}

std::vector<int> MatrixGraph::GetNextVertices(int vertex) const {
    assert(0 <= vertex && vertex < adjacencyMatrix.size());
    std::vector<int> res;
    for (int i = 0; i < adjacencyMatrix.size(); i++)
        if (adjacencyMatrix[vertex][i])
            res.push_back(i);
    return res;
}

std::vector<int> MatrixGraph::GetPrevVertices(int vertex) const {
    assert(0 <= vertex && vertex < adjacencyMatrix.size());
    std::vector<int> res;
    for (int i = 0; i < adjacencyMatrix.size(); i++)
        if (adjacencyMatrix[i][vertex])
            res.push_back(i);
    return res;
}

