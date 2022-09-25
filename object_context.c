#include "engine.h"
#include <math.h>
void	rect(Get *instance, int x, int y, int h, int w, int color)
{
	int i_h;
	int i_w;

	i_h = 0;
	i_w = 0;

	while (i_h <= h)
	{
		// move horizontal lines
		mlx_pixel_put(instance->mlx,instance->win, x - i_h, y, color);
		mlx_pixel_put(instance->mlx,instance->win, x - i_h, y - h, color);
		i_h++;
	}
	while (i_w <= w)
	{
		// move vertical lines
		mlx_pixel_put(instance->mlx,instance->win, x - w, y - i_w, color);
		mlx_pixel_put(instance->mlx,instance->win, x, y - i_w, color);
		i_w++;
	}

}

void	circle(Get *instance, int x, int y, int radius, int color)
{
	double pi;
	double x1;
	double angle;
	double y1;
	double i;

	pi = 3.14159265359;
	i = 0;
	while (i < 360)
	{
		i += 0.1;
		angle = i;
		x1 = radius * cos((float)angle * pi / 180);
		y1 = radius * sin((float)angle * pi / 180);
		mlx_pixel_put(instance->mlx,instance->win, x + x1, y + y1, color);
	}
	

}
