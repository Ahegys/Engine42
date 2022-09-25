#include "engine.h"

void	screen(int h, int w, char *title)
{
	Get win;
	Get *ptr;

	ptr = &win;
	ptr->mlx = mlx_init();
	ptr->w_height = h;
	ptr->w_width =  w;
	ptr->win = mlx_new_window(ptr->mlx, ptr->w_height, ptr->w_width, title);
	mlx_loop_hook(ptr->mlx, &render, ptr);

	mlx_loop(ptr->mlx);
}

