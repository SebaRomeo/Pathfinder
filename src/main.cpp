#include <iostream>
#include "Node.h"
#include "Grid.h"
#include "Renderer.h"

int main()
{
	std::cout << "Pathfinder" << std::endl;
	std::cout << std::endl;

	pf::render::Renderer r;
	pf::Grid g(20, 20);
	r.DrawGrid(g);

	std::cin.get();
}