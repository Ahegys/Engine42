#ifndef	ENGINE_H
# define ENGINE_H
#include <mlx.h>
#include <math.h>
typedef struct
{
	void *mlx;
	void *win;
	int w_height;
	int w_width;
}Get;

void	screen(int h, int w, char *title);
void	rect(Get *instance, int x, int y, int h, int w, int color);
void	circle(Get *instance, int x, int y, int radius);
#endif
