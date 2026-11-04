#include "stdio.h"
#include "stdbool.h"
#include "raylib.h"

const float GRAVITY_FORCE = 9.81; // m/s^2

typedef struct {
    float mass; // kg
    float velocity; // m/s
    float acceleration; // m/s^2
    Vector2 pos;
} Object2D;

struct SimulationState {
    Object2D objects[10000];
    unsigned int obj_ct;
};

int main() {
    // initialization
    const int screen_w = 800;
    const int screen_h = 600;

    InitWindow(screen_w, screen_h, "Phys-Sim");
    SetTargetFPS(60);

    while(!WindowShouldClose()) {
        BeginDrawing();
        
        // rendering code here

        ClearBackground(RAYWHITE);
        
        EndDrawing();
    }
    // cleanup on exit 
    CloseWindow();
    return 0;
};
