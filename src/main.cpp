/*
Raylib example file.
This is an example main file for a simple raylib project.
Use this as a starting point or replace it with your code.

by Jeffery Myers is marked with CC0 1.0. To view a copy of this license, visit https://creativecommons.org/publicdomain/zero/1.0/

*/
#include "raylib-cpp/raylib-cpp.hpp"
#include "Program.hpp"

#include "resource_dir.h"	// utility header for SearchAndSetResourceDir

int main ()
{
	// Create the window and OpenGL context & tell the window to use vsync and work on high DPI displays (can be removed if necessary)
	raylib::Window window(1280, 800, "Hello Raylib", FLAG_VSYNC_HINT | FLAG_WINDOW_HIGHDPI);

	// Utility function from resource_dir.h to find the resources folder and set it as the current working directory so we can load from it
	// When using Load() functions in subdirectorys, it should be used as Load("images/xyz.png") since resources is now the current 
	SearchAndSetResourceDir("resources");

	//We create an object program
	Program program;
	
	// game loop
	while (!WindowShouldClose())		// run the loop untill the user presses ESCAPE or presses the Close button on the window
	{
		//We first check if the user has made any sort of input
		program.CheckInput();
		
		//We update the program logic
		program.Update();
		
		// drawing
		BeginDrawing();

		// We call draw on the main program
		program.Draw();

		// end the frame and get ready for the next one  (display frame, poll input, etc...)
		EndDrawing();
	}
	// destroy the window and cleanup the OpenGL context
	CloseWindow();
	return 0;
}
