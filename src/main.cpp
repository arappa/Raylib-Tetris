#include <raylib.h>
#include "grid.h"
#include "blocks.cpp"

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
    grid.Print();
    
    OBlock block = OBlock();

    // GAME LOOP
    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.Draw();
        block.Draw();
        EndDrawing();
        
    }

    // Closes the game window
    CloseWindow();
    
}