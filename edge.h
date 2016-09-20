#pragma once

struct Edge 
{
	int v;
	int w;
	Edge(int _v = -1, int _w = -1)
		: v(_v), w(_w)
	{}
};
