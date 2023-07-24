#pragma once

namespace pf
{
	class Node
	{
	public:
		int X;
		int Y;
		char Icon;
		bool Walkable = false;
		Node *Parent = nullptr;

		int GCost = 0;
		int HCost = 0;

	private:
		int _heapIndex = 0;

	public:
		Node(int x, int y, char icon);
		inline int GetFCost();
	};
}