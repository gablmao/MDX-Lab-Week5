#include <iostream>

using namespace std;

int main() {
    cout << "test" << endl;

    return 0;
}


/*
TODAY'S LECTURE: FUNCTIONS YAHOOOOOOOOOOOOOOOOOOOOOOOOOOOO



functions:
> a block of code that tends to be written with the purpose
of being reused in other programs
    > easier to debug code
    > instead of storing everything in one main function, split
    to separate functions, keep the main function clean
> it can take in data (parameters) and return data (optional -> method)
> example built-in functions include:
    > pow(), abs(), sqrt()



defining functions:
> give a "return type"
    > for example, function 'double area_of_square' 
    outputs a "double" data type value
> give parameter a data type and name(s)
> the body of the function is where it contains:
    > purposeful code
    > return statement
        > can be optional, as main function will get the end result
        and return that result at the end of the function (return 0) 

> declare functions before use
    > tip is to write initial functions on top of main, then
    when functions are used, write below main



---------------- CODE TASK IDK -----------------

int average(int num1, int num2) {

    int mean = (num1 + num2) / 2;
    return mean;

}


--------------END OF CODE TASK IDK---------------


!!!!!!! IMPORTANT !!!!!!!

> pass by VALUE = copy of variable's value is passed to wherever
it's called, and the original value cannot change

> pass by REFERENCE = the literal value of a variable is to wherever
it's called and used and variable is updated

!!!!!!! IMPORTANT !!!!!!!

> void functions do not return a value 
> functions cannot return arrays



main function:
> this function is very important, and must be defined in every program
    > purpose of this function is where anything to execute is
    stored into this function
    > fun fact, can also have parameters

> arg in main functions are in c-strings (char data type)
    > therefore, depending on the data type of parameters,
    convert c-strings to int or double etc...



recursion:
> means when the function calls itself in the function
> very memory dependent from what i remember
    > basically a very expensive for loop
> to avoid infinite recursion, have some sort of base case
    > essentially a condition that can break out of recursion


*/