#include "setGraph.h"

SetGraph::SetGraph(int size) : adjacencyLists(size) {};

SetGraph::SetGraph(const IGraph &graph) : adjacencyLists(graph.VerticesCount()) {
    for (int i = 0; i < graph.VerticesCount(); i++)
        for (auto& j : graph.GetNextVertices(i))
            adjacencyLists[i].insert(j);
}

void SetGraph::AddEdge(int from, int to) {
    assert(0 <= from && from < adjacencyLists.size());
    assert(0 <= to && to < adjacencyLists.size());
    adjacencyLists[from].insert(to);
}

int SetGraph::VerticesCount() const {
    return (int)adjacencyLists.size();
}

std::vector<int> SetGraph::GetNextVertices(int vertex) const {
    assert(0 <= vertex && vertex < adjacencyLists.size());
    std::vector<int> res;
    for (auto& i : adjacencyLists[vertex])
        res.push_back(i);
    return res;
}

std::vector<int> SetGraph::GetPrevVertices(int vertex) const {
    assert(0 <= vertex && vertex < adjacencyLists.size());
    std::vector<int> res;

    for (int from = 0; from < adjacencyLists.size(); from++) {
        for (int to: adjacencyLists[from]) {
            if (to == vertex)
                res.push_back(from);
        }
    }
    return res;
}

