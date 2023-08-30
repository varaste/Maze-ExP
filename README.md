# Maze Game
This is a simple maze game implemented in C++.

## How to Play
+ The maze is a 10x10 grid generated randomly each time.
+ Your starting position is the top left corner.
+ The goal is to reach the bottom right corner.
+ You can move up, down, left or right using the keys 'u', 'd', 'l', 'r'.
+ Illegal moves into walls will be ignored.
+ The route you take will be marked on the maze.
Code Overview
+ The maze is stored as a 2D array (int a[10][10]).
+ Walls are marked as 1 and open paths are 0 initially.
+ The player's current position is marked as 2.
+ Old visited positions are marked as 0 once the player moves.
+ rand() is used to randomly generate the maze each time.
## How to Run
1. Compile and run the code:
2. Use the u, d, l, r keys to move and try to reach the bottom right corner.
