#include "engine.h"

void	screen(int h, int w, char *title)
{
	Get win;
	Get *ptr;

	int x = 150;
	int y = 50;
	int vx = floor(rand() % 20)+1;
	int vy = 0;
	int rad = 50;
	int held = 1;

	ptr = &win;
	ptr->mlx = mlx_init();
	win.w_height = h;
	win.w_width =  w;
	ptr->win = mlx_new_window(ptr->mlx, win.w_height, win.w_width, title);
	circle(&win, x, y, rad, 255);
	gravity(&win,x,y,vx,vy,rad,held, 0.9);
	mlx_loop(ptr->mlx);
}

