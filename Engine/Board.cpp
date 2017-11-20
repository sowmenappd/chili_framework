#include "Board.h"
#include <random>
Board::Board(Graphics& gfx)
	:
	gfx(gfx)
{
}

void Board::DrawCell(Location & loc, Color c)
{
	assert(loc.x >= 0);
	assert(loc.y >= 0);
	assert(loc.x < gfx.ScreenWidth);
	assert(loc.y < gfx.ScreenHeight);
	gfx.DrawRectDim(loc.x * dimension, loc.y * dimension, dimension, dimension, c);
}

int Board::GetGridHeight()
{
	return height;
}

int Board::GetGridWidth()
{
	return width;
}
