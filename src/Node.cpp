#include "Node.h"

namespace pf
{
	Node::Node(int x, int y, bool walkable) : X(x), Y(y), Walkable(walkable) {}

	int Node::GetFCost() const
	{
		return GCost + HCost;
	}

	int Node::CompareTo(const Node &other) const
	{
		int compare = 0;

		if (GetFCost() <= other.GetFCost())
			compare = -1;
		else if (GetFCost() >= other.GetFCost())
			compare = 1;

		return compare;
	}
}