//
// Created by Николай Степанов on 23.05.2022.
//

#include "arcGraph.h"

ArcGraph::ArcGraph(int size) : max_vertex(size) {}

ArcGraph::ArcGraph(const IGraph &graph)
    : max_vertex(graph.VerticesCount()) {
        for (int i = 0; i < max_vertex; i++) {
            std::vector<int> next = graph.GetNextVertices(i);
            for (int &j: next)
                pairs.emplace_back(i, j);
        }
}

void ArcGraph::AddEdge(int from, int to) {
    assert(0 <= from && from < max_vertex);
    assert(0 <= to && to < max_vertex);
    pairs.emplace_back(from, to);
}

int ArcGraph::VerticesCount() const {
    return max_vertex;
}

std::vector<int> ArcGraph::GetNextVertices(int vertex) const {
    assert(0 <= vertex && vertex < max_vertex);
    std::vector<int> res;
    for (auto& i : pairs) {
        if (i.first == vertex)
            res.push_back(i.second);
    }
    return res;
}

std::vector<int> ArcGraph::GetPrevVertices(int vertex) const {
    assert(0 <= vertex && vertex < max_vertex);
    std::vector<int> res;
    for (auto& i : pairs) {
        if (i.second == vertex)
            res.push_back(i.first);
    }
    return res;
}
