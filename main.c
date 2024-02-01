#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include <raylib.h>

#define train_count sizeof(vector)/ sizeof(vector[0])

const int screenWidth = 700;
const int screenHeight = 700;

bool shuffle (int n, int vector[]){
    for (int i = 0; i < screenWidth; ++i) {
        if (n == vector[i]) {
            return true;
        }
    }
    return false;
}

int main ()
{
    InitWindow(screenWidth, screenHeight, "sortalizer");
    SetTargetFPS(60);

    srand(time(0));
    int vector[screenWidth], n;

    for (size_t i = 0; i < train_count; ++i) {
        while (shuffle(n, vector)) {
            n = 1 + rand () % 700;
        }
        vector[i] = n;
    }

    double curTime = GetTime();
    int cur = 0;
    int index = 0;
    int min_val = screenHeight + 1;

    while (!WindowShouldClose()) {
        ClearBackground (BLACK);

        BeginDrawing();
        {
            if (GetTime() > curTime) {
                if (cur < screenWidth) {
                    for (size_t i = cur + 1; i < train_count; ++i) {
                        if (vector[i] < min_val) {
                            index = i;
                            min_val = vector[i];
                        }
                    }
                    vector[index] = vector[cur];
                    vector[cur] = min_val;
                    cur++;
                    min_val = screenHeight;

                }
                for (size_t i = 0; i < train_count; ++i) {
                    DrawRectangle(i, 0, 1, vector[i], GREEN);
                }

            }
        }
        EndDrawing();

    }

    CloseWindow();

    return 0;
}