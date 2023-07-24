#include "Grid.h"
#include "Node.h"
#include <iostream>

namespace pf
{
    Grid::Grid(int dimX, int dimY) : DimX(dimX), DimY(dimY)
    {
        Nodes.resize(DimX);
        for (int i = 0; i < DimX; i++)
        {
            Nodes[i].resize(DimY, Node(i, 0, true));
            for (int f = 0; f < DimY; f++)
            {
                Nodes[i][f].Y = f;

                if (i == 0 || i == DimX - 1 || f == 0 || f == DimY - 1)
                    Nodes[i][f].Icon = '#';
            }
        }
    }
}
