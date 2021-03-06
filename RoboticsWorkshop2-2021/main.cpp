#include "main.hpp"


/*

Generic function header

return-type function-name(argument1-type argument1-name,..) {
    implementation

    return value;
}


*/

int promptInt(std::string promptText) { // Function header (1 string as input, 1 int as output)
    int value; // creates a variable for user input
    std::cout << promptText; // print the prompt text to standard output (terminal)
    std::cin >> value; // reads the user input into the value variable
    return value; // return the value from the function
}

Rectangle::Rectangle(float width, float h) : height{ h } {
    this->width = width;
}

Rectangle::~Rectangle() {
    printf("Goodbye rectangle!\n");
}

float Rectangle::getArea() {
    return width * height;
}

float Rectangle::getWidth() {
    return width;
}

float Rectangle::getHeight() {
    return height;
}


int main() {

//    printf("Hello World\n"); // print text
//    int age = promptInt("How old are you? "); // read input using our helper function
//    printf("You are %d years old\n", age); // print formatted output
//
//    int grade = promptInt("What grade are you in? "); // read input using helper
//    printf("You are in grade %d\n", grade); // print formatted output'

    printf("TIMES_10(10) = %d\n", TIMES_10(10));
    printf("TIMES_10(10 - 4) = %d\n", TIMES_10(10 - 4));
    printf("TIMES_10((10 - 4)) = %d\n", TIMES_10((10 - 4)));

    Rectangle rect = Rectangle(50.f, 32.f);
    printf("%f x %f\n", rect.getWidth(), rect.getHeight());
    printf("area: %f\n", rect.getArea());

    RobotMode mode = RobotMode::eOn;

    switch (mode) {
    case RobotMode::eOn:
        printf("Robot is ON\n");
        break;
    case RobotMode::eOff:
        printf("Robot is OFF\n");
        break;
    }

    return EXIT_SUCCESS; // return the success exit code
}


