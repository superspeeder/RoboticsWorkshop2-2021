#include <cstdlib>

#include <iostream>
#include <string>


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


int main() {

    printf("Hello World\n"); // print text
    int age = promptInt("How old are you? "); // read input using our helper function
    printf("You are %d years old\n", age); // print formatted output

    int grade = promptInt("What grade are you in? "); // read input using helper
    printf("You are in grade %d\n", grade); // print formatted output


    return EXIT_SUCCESS; // return the success exit code
}


