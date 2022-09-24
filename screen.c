#include "engine.h"

void	screen(int h, int w, char *title)
{
	Get win;
	Get *ptr;

	ptr = &win;
	ptr->mlx = mlx_init();

	ptr->win = mlx_new_window(ptr->mlx, h, w, title);
	circle(&win, h / 2, w / 2, 25);
	mlx_loop(ptr->mlx);
}

