#include <iostream>
#include "Renderer.h"

namespace pf::render
{
	void Renderer::DrawGrid(const Grid &grid)
	{
		size_t rows = grid.Nodes.size();
		size_t cols = (grid.Nodes.size() > 0) ? grid.Nodes[0].size() : 0;

		for (size_t i = 0; i < rows; i++)
		{
			for (size_t f = 0; f < cols; f++)
			{
				std::cout << grid.Nodes[i][f].Icon << ' ';
			}
			std::cout << std::endl;
		}
	}
}
