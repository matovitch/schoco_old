#include <iostream>
#include <cstdlib>

#include "schoco/graph.hpp"
#include "schoco/utils.hpp"

int main()
{
    schoco::TGraph<char> graph;

    auto&& nodeA = graph.makeNode('a');
    auto&& nodeB = graph.makeNode('b');
    auto&& nodeC = graph.makeNode('c');
    auto&& nodeD = graph.makeNode('d');

    graph.attach(nodeA,
                 nodeB);

    graph.attach(nodeB,
                 nodeC);

    graph.attach(nodeB,
                 nodeD);

    graph.attach(nodeB,
                 nodeA);

    while (!graph.empty())
    {
        std::cout << graph.top().value << std::endl;
        graph.pop();
    }

    if (graph.isCyclic())
    {
        std::cout << "Warning! We ended on the cycle:" << std::endl;

        for (const auto& node : graph.makeCycle())
        {
            std::cout << node->value << std::endl;
        }
    }

    schoco::cleanUp();

    return EXIT_SUCCESS;
}
