#include "engine.h"

int	main(void)
{
	Get screenS;
	int height;
	int width;

	height = 500;
	width = 500;
	screenS.w_height = height;
	screenS.w_width = width;
	screen(screenS.w_height,screenS.w_width, "Game");
}
