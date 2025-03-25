#pragma once

#include "raylib-cpp/raylib-cpp.hpp"

class Program {
    public:
    Program();
    ~Program();

    void Update();
    void Draw();
    void CheckInput();
    void Unload();
    
    private:
    raylib::Texture wabbit;
};