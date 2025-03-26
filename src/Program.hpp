#pragma once

#include "raylib-cpp/raylib-cpp.hpp"

class Program {
    public:
    Program();

    void Update();
    void Draw();
    void CheckInput();
    void Unload();
    
    private:
    raylib::Texture wabbit;
};