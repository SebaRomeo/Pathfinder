#pragma once

#include "HeapItem.h"

namespace pf
{
	class Node : public IHeapItem<Node>
	{
	public:
		int X;
		int Y;
		char Icon = '.';
		bool Walkable = false;
		Node *Parent = nullptr;

		int GCost = 0;
		int HCost = 0;

	public:
		Node(int x, int y, bool walkable);
		inline int GetFCost() const;
		inline int CompareTo(const Node &other) const override;
	};
}