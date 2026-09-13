#include "raylib.h"

int main(void) {
    /**
     * variables
     */
    constexpr int windowWidth = 1200;
    constexpr int windowHeight = 800;

    float speed_x = 500.0f;
    float speed_y = 500.0f;
    const float circleRadius = 32.0f;

    Vector2 circle = {200, (float)windowWidth / 2}; // creating a 2d vector, so that later we can draw a circle

    InitWindow(windowWidth, windowHeight, "hello raylib");

    SetTargetFPS(GetFPS()); // setting the fps "unlimited"

    while (!WindowShouldClose()) {
        circle.x += GetFrameTime() * speed_x;
        circle.y -= GetFrameTime() * speed_y;

        if (circle.x > windowWidth || circle.x < 0) {
            speed_x = -speed_x;
        }

        if (circle.y < 0.0f || circle.y > windowHeight || circle.y < 0) {
           speed_y = -speed_y;
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawCircleV(circle, circleRadius, RED);
        DrawText(TextFormat("X: %f", circle.x), windowHeight + 120, 30, 16, GRAY);
        DrawText(TextFormat("Y: %f", circle.y), windowHeight + 120, 50, 16, GRAY);
        DrawText(TextFormat("FPS: %i", GetFPS()), windowHeight + 120, 75, 16, GRAY);

        EndDrawing();
    }

    return 0;
}