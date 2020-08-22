# C++ Starter Template for CMake

> Can be used in Visual Studio Code

Features:

- [x] Building C++ files using CMake in Visual Studio Code
- [x] Supports Windows, Mac, and Linux
- [x] [Catch Test](https://github.com/catchorg/Catch2) for unit tests
- [x] Debugging with Visual Studio Code to provide breakpoints, watch, call stack, and pretty printing for STL containers such as `std::map` and `std::vector`

## A Video on how to use this repo:

<table><tr><td>

<a href="https://youtu.be/OXwsD37qHPY">
<img border="5" alt="C++ Starter Template for CMake & Visual Studio Code with Catch test library" src="https://raw.githubusercontent.com/ourarash/cmake-catch-vsc-template/master/play.png" width="400">
</a>
</td></tr></table>


You can use this template for most of your C++ projects with minimal changes.
![Demo picture bottom](https://raw.githubusercontent.com/ourarash/cmake-catch-vsc-template/master/screenshot.gif)


## Prerequisite

### Installing CMake

This repo uses `CMake` for building C++ files.
You can install CMake using this [link](https://cmake.org/download/).

### Installing Toolchain

CMake can detect and work with most toolchains. On Mac, you can install XCode. On Windows, you can use Visual Studio. On Linux, you can use gcc.

### Visual Studio Code Extensions
If you are using [Visual Studio Code](https://code.visualstudio.com/), you need to install these extensions:
- [CMake Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools)
- CMake
- cmake-format


## Cloning this repo

```bash
git clone https://github.com/ourarash/cmake-catch-vsc-template
```

## Configuring CMake
Once CMake and CMake extensions are installed, type the following in the command line:

`CMake: Configure`

This will create a subfolder called `build`. Once you do this, a new button on the left `Activity Bar` in Visual Studio Code will appear which allows you to run and debug the targets.
