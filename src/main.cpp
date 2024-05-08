#include <raylib.h>
#include "grid.h"

int main()
{
    // Creates dark blue color object to use for background
    Color darkBlue = {44, 44, 127, 255};

    // Creates a game window of size 300px width, 600px height, and name of Tetris
    InitWindow(300, 600, "Tetris");

    // Makes gamespeed 60FPS on any system it runs on
    SetTargetFPS(60);

    // Creates a Grid object named grid and uses print function to print 2D array in terminal
    Grid grid = Grid();
    grid.grid[0][0] = 1;
    grid.grid[3][5] = 4;
    grid.grid[17][8] = 7;
    grid.Print();
    

    // GAME LOOP
    while (WindowShouldClose() == false)
    {
        BeginDrawing();

        ClearBackground(darkBlue);

        grid.Draw();

        EndDrawing();
        
    }

    // Closes the game window
    CloseWindow();
    
}