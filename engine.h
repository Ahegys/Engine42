#ifndef	ENGINE_H
# define ENGINE_H
#include <mlx.h>
typedef struct
{
	void *mlx;
	void *win;
}Get;

void	screen(int h, int w, char *title);
void	rect(Get *instance, int x, int y, int h, int w, int color);
#endif
