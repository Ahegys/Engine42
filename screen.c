#include "engine.h"

void	screen(int h, int w, char *title)
{
	Get win;
	Get *ptr;
	
	ptr = &win;
	ptr->mlx = mlx_init();

	ptr->win = mlx_new_window(ptr->mlx, h, w, title);
	rect(&win, h / 2, w / 2, 50, 50, 155233144);
	mlx_loop(ptr->mlx);
}

