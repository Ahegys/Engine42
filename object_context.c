#include "engine.h"

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
