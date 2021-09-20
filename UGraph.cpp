#include "UGraph.h"

void UGraph::addVertex(int v) {
	if (UGraph::constainsVertex(v)) return;

	else UGraph::adjList[v] = std::vector<int>{};
}


void UGraph::addEdge(int source, int dest) {
	if (UGraph::constainsVertex(source)) {
		UGraph::adjList[source].push_back(dest);
	}
	else {
		UGraph::adjList[source] = std::vector<int>{ dest };
	}

	if (UGraph::constainsVertex(dest)) {
		UGraph::adjList[dest].push_back(source);
	}
	else {
		UGraph::adjList[dest] = std::vector<int>{ source };
	}
}

bool UGraph::constainsVertex(int v) {
	return UGraph::adjList.find(v) != UGraph::adjList.end();
}
