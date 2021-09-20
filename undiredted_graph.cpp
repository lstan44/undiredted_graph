// undiredted_graph.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "UGraph.h"

int main()
{
    UGraph graph;

    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);
    graph.addEdge(3, 1);
    graph.addEdge(4, 0);

}