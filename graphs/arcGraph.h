//
// Created by Николай Степанов on 23.05.2022.
//

#ifndef TECHNOPAKR_ALGO_ARCGRAPH_H
#define TECHNOPAKR_ALGO_ARCGRAPH_H

#include "generalGraph.h"

class ArcGraph : public IGraph {
public:
    explicit ArcGraph(int size);

    explicit ArcGraph(const IGraph &graph);

    ~ArcGraph() override = default;

    void AddEdge(int from, int to) override;

    int VerticesCount() const override;

    std::vector<int> GetNextVertices(int vertex) const override;

    std::vector<int> GetPrevVertices(int vertex) const override;

private:
    int max_vertex;
    std::vector<std::pair<int, int>> pairs;
};


#endif //TECHNOPAKR_ALGO_ARCGRAPH_H
