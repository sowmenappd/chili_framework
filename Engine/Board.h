#pragma once

#include "Graphics.h"
#include "Location.h"
class Board 
{
public:
	Board(Graphics& gfx);
	void DrawCell(Location& loc, Color c);
	int GetGridHeight();
	int GetGridWidth();
private:
	static constexpr int dimension = 20;
	static constexpr int height = 10;
	static constexpr int width = 10;
	Graphics& gfx;
};