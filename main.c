#include "engine.h"

int	main(void)
{
	Get screenS;
	int height;
	int width;

	height = 680;
	width = 486;
	screenS.w_height = height;
	screenS.w_width = width;
	screen(screenS.w_height,screenS.w_width, "Game");
}
