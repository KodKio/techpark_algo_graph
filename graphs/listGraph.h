#ifndef TECHNOPAKR_ALGO_LISTGRAPH_H
#define TECHNOPAKR_ALGO_LISTGRAPH_H

#include "generalGraph.h"

struct ListGraph :  public IGraph {
public:
    explicit ListGraph(int size);

    explicit ListGraph(const IGraph &graph);

    ~ListGraph() override = default;;

    void AddEdge(int from, int to) override;

    int VerticesCount() const override;

    std::vector<int> GetNextVertices(int vertex) const override;

    std::vector<int> GetPrevVertices(int vertex) const override;

private:
    std::vector<std::vector<int>> adjacencyLists;
};


#endif //TECHNOPAKR_ALGO_LISTGRAPH_H
