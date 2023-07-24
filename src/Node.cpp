#include "Node.h"

namespace pf
{
	Node::Node(int x, int y, char icon) : X(x), Y(y), Icon(icon)
	{
	}

	int Node::GetFCost()
	{
		return GCost + HCost;
	}
}