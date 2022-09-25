> Status : Developing

## Engine42
#### Arch users
```sudo pacman -Syyu libxext libxrandr libx11 libbsd libssl```
#### Debian-based distros
```sudo apt-get install libxext-dev libxrandr-dev libx11-dev libbsd-dev libssl-dev```
```
git clone https://github.com/42Paris/minilibx

make
mv minilibx/man/man1 /usr/local/man/
mv minilibx/libmlx.a  /usr/local/lib/
mv minilibx/mlx.h /usr/local/include/
```
