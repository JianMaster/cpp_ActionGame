#include "raylib.h"

int main()
{
    InitWindow(800, 450, "ActionGame");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("raylib works!", 300, 200, 30, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}