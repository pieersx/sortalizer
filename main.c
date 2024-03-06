#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include <raylib.h>

#include "sort.h"

#define COLOR_BACKGROUND GetColor(0x181818FF)
#define TRAIN_COUNT      sizeof(vector)/ sizeof(vector[0])

const int screenWidth = 100;
const int screenHeight = 720;

int main ()
{
	size_t screen = 80;
	Image logo = LoadImage("./resources/logo/sort.png");
	InitWindow(screen*16.25, screen*9, "Sortalizer");
	SetTargetFPS(10);  
	srand(time(0));
	int vector[screenWidth];
	int n = 0;

	for (size_t i = 0; i < TRAIN_COUNT; ++i) {       
		while (shuffle(n, vector)) {
			n = 1 + rand () % screenWidth;
		}
		vector[i] = n;
	}
	int cur = 0;
	int index = 0;
	int min_val = screenWidth + 1;
	
	while (!WindowShouldClose()) {
		ClearBackground (COLOR_BACKGROUND);
		SetWindowIcon(logo);
		BeginDrawing();
		{
			if (cur < screenWidth) {
				for (size_t i = cur; i < TRAIN_COUNT; ++i) {
					if (vector[i] < min_val) {
						index = i;
						min_val = vector[i];
					}
				}
				vector[index] = vector[cur];
				vector[cur] = min_val;
				cur++;
				min_val = screenHeight + 1;

			}
		
			for (size_t i = 0; i < TRAIN_COUNT; ++i) {
				float hue = (float)i/TRAIN_COUNT*14.5;
				float saturation = 0.75f;
				float value = 1.0f;
				Color color = ColorFromHSV(hue*360, saturation, value);	        
				DrawRectangle(i*13, screenHeight - (vector[i]+3)*7, 12,(vector[i]+3)*7, color);
			}
		}
		EndDrawing();
	}
	CloseWindow();
	UnloadImage(logo);
	return 0;
}