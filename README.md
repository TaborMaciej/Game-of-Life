# Game-of-Life
This code realises the objective of Game of Life by John Conway.

"The universe of the Game of Life is an infinite, two-dimensional orthogonal grid of square cells, each of which is in one of two possible states, live or dead (or populated and unpopulated, respectively). Every cell interacts with its eight neighbours, which are the cells that are horizontally, vertically, or diagonally adjacent. At each step in time, the following transitions occur:

1. Any live cell with fewer than two live neighbours dies, as if by underpopulation.
2. Any live cell with two or three live neighbours lives on to the next generation.
3. Any live cell with more than three live neighbours dies, as if by overpopulation.
4. Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction." ~ Wikipedia : https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life

It can create a random cell composition or import one from a file.
To import a grid you'll need to have a .txt file. This file has to be 40 lines long and each line has to consist of 100 characters. Dead cells must be marked by "." and alive cells must be marked by "#".
You can create an empty preset file by choosing an adequate option during the program runtime.
