#ifndef TECHPARK_ALGO_GRAPH_ALGORITHMS_H
#define TECHPARK_ALGO_GRAPH_ALGORITHMS_H

#include <vector>
#include <functional>
#include <queue>
#include <deque>

#include "generalGraph.h"

void BFS(const IGraph &graph, int vertex, std::vector<bool> &visited, const std::function<void(int)> &func);

void mainBFS(const IGraph &graph, const std::function<void(int)> &func);

void DFS(const IGraph &graph, int vertex, std::vector<bool> &visited, const std::function<void(int)> &func);

void mainDFS(const IGraph &graph, const std::function<void(int)> &func);

void topologicalSortInternal(const IGraph &graph, int vertex, std::vector<bool> &visited, std::deque<int> &sorted);

std::deque<int> topologicalSort(const IGraph &graph);

#endif //TECHPARK_ALGO_GRAPH_ALGORITHMS_H
