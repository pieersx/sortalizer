# Sortalizer

Sortalizer is a project that combines a sorting by selection algorithm with graphical visualizations using the Raylib API.

## Display
https://github.com/pieersx/sortalizer/assets/134113497/43a1293f-76f7-4b45-b5b0-b60975182dd0

## Building
Make sure you have raylib installed. I recommend reading their website [raylib](https://www.raylib.com/) to install it on your operating system.

### GNU/Linux
This guide is for all GNU/Linux distributions, note that **APT** is used as a package manager for Debian users.

#### Install required tools

You need a GCC compiler (or an alternative C99 compiler) and git (to clone the repository).
```console
sudo apt install build-essential git 
```

Optionally, you can use clang for compilation.
```console
sudo apt install clang 
```

#### Install required libraries

Need to install some required libraries; Mesa for OpenGL accelerated graphics and X11 for windowing systems.

##### Debian y Ubuntu
```console
sudo apt install libasound2-dev libx11-dev libxrandr-dev libxi-dev libgl1-mesa-dev libglu1-mesa-dev libxcursor-dev libxinerama-dev
```

##### Fedora
```console
sudo dnf install alsa-lib-devel mesa-libGL-devel libX11-devel libXrandr-devel libXi-devel libXcursor-devel libXinerama-devel libatomic
```

##### Arch Linux
```console
sudo pacman -S alsa-lib mesa libx11 libxrandr libxi libxcursor libxinerama
```

If this is not one of your distributions, use your appropriate package manager.

## Build from Source

### Linux
Follow these steps for building in GNU/Linux distributions
* ```bash
    git clone https://github.com/pieersx/sortalizer.git
    ```
* ```bash
    cd sortalizaer
    ```
* ```bash
    ./build.sh && ./sortalizer
    ```
    
### Windows (in development)

> @pieersx :+1: