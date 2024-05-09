#include <raylib.h>
#include "game.h"

int main()
{
    // Creates dark blue color object to use for background
    Color darkBlue = {44, 44, 127, 255};

    // Creates a game window of size 300px width, 600px height, and name of Tetris
    InitWindow(300, 600, "Tetris");

    // Makes gamespeed 60FPS on any system it runs on
    SetTargetFPS(60);

    Game game = Game();
    
    // GAME LOOP
    while (WindowShouldClose() == false)
    {
        game.HandleInput();
        BeginDrawing();
        ClearBackground(darkBlue);
        game.Draw();
        EndDrawing();
        
    }

    // Closes the game window
    CloseWindow();
    
}