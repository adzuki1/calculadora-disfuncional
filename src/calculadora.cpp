#include "calculadora.h"
#include <iostream>

// implementando as funções
float Calculator::add(float a, float b){
        return a + b;
}


float Calculator::sub(float a, float b){
        return a - b;
}


float Calculator::mul(float a, float b){
        return a * b;
}


float Calculator::idiv(float a, float b){
        // tratando erro se divisor (b) for 0
        if(b == 0) {
                std::cerr << "Error: undefined!" << std::endl;
                return 0;
        }

        return a / b;
}
