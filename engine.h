#ifndef	ENGINE_H
# define ENGINE_H
#include <mlx.h>
#include <math.h>
#include <stdlib.h>
typedef struct
{
	void *mlx;
	void *win;
	int w_height;
	int w_width;
}Get;

void	gravity(Get *instance,int x, int y, int vx, int vy, int rad, int held,double grav);
void	screen(int h, int w, char *title);
void	rect(Get *instance, int x, int y, int h, int w, int color);
void	circle(Get *instance, int x, int y, int radius, int color);
#endif
