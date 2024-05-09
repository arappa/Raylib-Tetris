#include <raylib.h>
#include "game.h"
#include "colors.h"

double lastUpdateTime = 0;

bool EventTriggered(double interval){
    double currentTime = GetTime();
    if(currentTime - lastUpdateTime >= interval){
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}

int main()
{
    // Creates a game window of size 500px width, 620px height, and name of Tetris
    InitWindow(500, 620, "Tetris");

    // Makes gamespeed 60FPS on any system it runs on
    SetTargetFPS(60);

    Font font = LoadFontEx("Font/BebasNeue-Regular.ttf", 64, 0, 0);

    Game game = Game();
    
    // GAME LOOP
    while (WindowShouldClose() == false)
    {
        game.HandleInput();
        if(EventTriggered(0.2)){
            game.MoveBlockDown();
        }

        BeginDrawing();
        ClearBackground(darkBlue);
        DrawTextEx(font, "Score", {365, 15}, 38, 2, WHITE);
        DrawTextEx(font, "Next", {370, 175}, 38, 2, WHITE);
        if(game.gameOver){
            DrawTextEx(font, "GAME OVER", {340, 450}, 38, 2, WHITE);
        }
        DrawRectangleRounded({320, 55, 170, 60}, 0.3, 6, lightBlue);
        DrawRectangleRounded({320, 215, 170, 180}, 0.3, 6, lightBlue);
        game.Draw();
        EndDrawing();
        
    }

    // Closes the game window
    CloseWindow();
    
}