#include "Program.hpp"

Program::Program(){
    //modify or replace this code with whatever you want :)

    // Load a texture from the resources directory
    wabbit = LoadTexture("wabbit_alpha.png");
}

void Program::Update(){
    //modify or replace this code with whatever you want :)
}

void Program::Draw(){
    //modify or replace this code with whatever you want :)

    // Setup the back buffer for drawing (clear color and depth buffers)
	ClearBackground(BLACK);

    raylib::DrawText("Hello Raylib", 200,200,20,WHITE);

    // draw our texture to the screen
	wabbit.Draw(400, 200, WHITE);
}

void Program::CheckInput(){
    //modify or replace this code with whatever you want :)
}

void Program::Unload(){
    //modify or replace this code with whatever you want :)

    //Small Tip: Raylib seems to tend to unload certain things when the program is being closed (program variable goes out of scope due to
    // the window closing), so force unloading may or may not lead to exceptions since it'll already have 
    // unloaded what your trying to unload, therefore it might be more ideal to unload specifically when you need to remove certain assets
    // while the program is running
    wabbit.Unload();
}