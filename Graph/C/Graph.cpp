#include <iostream>
#include <vector>

class Graph
{
    int numVertices;
    std::vector<std::vector<int>> adjLists;

public:
    Graph(int vertices)
    {
        numVertices = vertices;
        adjLists.resize(vertices);
    }

    void addEdge(int src, int dest)
    {
        adjLists[src].push_back(dest);
        adjLists[dest].push_back(src);  3
    }

    void printGraph()
    {
        for(int i = 0; i < numVertices; i++)
        {
            std::cout << "Vertex " << i << ":";
            for(int neighbor : adjLists[i])
            {
                std::cout << " -> " << neighbor;
            }
            std::cout << std::endl;
        }
    }
};

int main()
{
    int n, e;
    std::cout << "Enter the number of vertices: ";
    std::cin >> n;

    Graph graph(n);

    std::cout << "Enter the number of edges: ";
    std::cin >> e;

    std::cout << "Enter each edge as a pair of vertices (src dest):\n";
    for(int i = 0; i < e; ++i)
    {
        int src, dest;
        std::cin >> src >> dest;
        graph.addEdge(src, dest);
    }

    graph.printGraph();

    return 0;
}
