#ifndef TECHNOPAKR_ALGO_MATRIXGRAPH_H
#define TECHNOPAKR_ALGO_MATRIXGRAPH_H

#include "generalGraph.h"

class MatrixGraph : public IGraph {
public:
    explicit MatrixGraph(int size);

    explicit MatrixGraph(const IGraph &graph);

    ~MatrixGraph() override = default;

    void AddEdge(int from, int to) override;

    int VerticesCount() const override;

    std::vector<int> GetNextVertices(int vertex) const override;

    std::vector<int> GetPrevVertices(int vertex) const override;

private:
    std::vector<std::vector<int>> adjacencyMatrix;
};


#endif //TECHNOPAKR_ALGO_MATRIXGRAPH_H
