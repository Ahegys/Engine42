#include <mlx.h>

typedef struct
{
	void *mlx;
	void *win;
} Get;
void	rect(Get *instance, int x, int y, int h, int w)
{

	mlx_pixel_put(instance->mlx,instance->win, x, y, 255);
	mlx_pixel_put(instance->mlx,instance->win, x, y - h, 255);
		
	mlx_pixel_put(instance->mlx,instance->win, x - w, y - h, 255);
	mlx_pixel_put(instance->mlx,instance->win, x - w, y, 255);
}
void	screen(int h, int w, char *title)
{
	Get win;
	Get *ptr;
	
	ptr = &win;
	ptr->mlx = mlx_init();

	ptr->win = mlx_new_window(ptr->mlx, h, w, title);
	rect(&win, h / 2, w / 2, 100, 100);
	mlx_loop(ptr->mlx);
}

