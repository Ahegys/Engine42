#include "engine.h"

void	gravity(Get *instance,int x, int y, int vx, int vy, int rad, int held, double grav)
{
	if (!held)
	{
		vy += grav;
		y += vy;
		x += vx;
	}
	else
	{
		vy = 0;
		vx = 0;
	}

	if (y + rad > instance->w_height)
	{
		y = instance->w_height - rad;
		vx *= -grav;
	}
}
