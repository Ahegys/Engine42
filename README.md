> Status : Developing

## Engine42
#### Arch users
```sudo pacman -Syyu libxext libxrandr libx11 libbsd libssl```
#### Debian-based distros
```sudo apt-get install libxext-dev libxrandr-dev libx11-dev libbsd-dev libssl-dev```
```
git clone https://github.com/42Paris/minilibx-linux minilibx
cd minilibx
make
sudo mv man/man1 /usr/local/man/
sudo mv libmlx.a  /usr/local/lib/
sudo mv mlx.h /usr/local/include/
cd ..
rm -rf minilibx
```
