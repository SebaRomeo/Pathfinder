#pragma once
#include <vector>
#include "Node.h"

namespace pf {
	class Grid
	{
	public:
		int DimX;
		int DimY;
		std::vector<std::vector<Node>> Nodes;

	public:
		Grid(int dimX, int dimY);
	};
}
