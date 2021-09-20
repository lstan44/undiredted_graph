#pragma once
#include <vector>
#include <map>

class UGraph
{	
private:
	std::map<int, std::vector<int>> adjList;
	bool constainsVertex(int v);


public:
	void addVertex(int v);

	void addEdge(int source, int dest);

};

