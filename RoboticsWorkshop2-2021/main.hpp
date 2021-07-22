#pragma once

#include <cstdlib>

#include <iostream>
#include <string>

#ifndef MAIN_H
#define MAIN_H 

#define TIMES_10(n) (n) * 10

int promptInt(std::string promptText);

class Rectangle {
private:
    float width, height;
    


public:

    Rectangle(float width, float height); // Rectangle rect = Rectangle(50.0f, 20.0f);
    ~Rectangle();

    float getArea(); // rect.getArea() -> width * height;

    float getWidth();
    float getHeight();
};


enum class RobotMode {
    eOn,
    eOff
};




#endif
