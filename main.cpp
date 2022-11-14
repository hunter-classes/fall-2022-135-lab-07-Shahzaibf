/*
Author: Shahzaib Fareed
Course: CSCI-135
Instructor: Zamansky
Assignment: Lab 7
    Code takes in input from bad-code.cpp or any other file.
    It then outputs it as formatted code.
*/

#include <iostream>
#include <string.h>
#include "funcs.h"
#include <fstream>

int main(){
    std::cout << removeLeadingSpaces("       int x = 1;  ") << "\n";
    std::cout << countChar("John Cena", 'n') << "\n\n";
    std::string input;
    std::string line;
    int openbrack;
    int closebrack;
    while(getline(std::cin, input)){
        line = removeLeadingSpaces(input);
        closebrack += countChar(line, '}');
        for(int i = 0;i < openbrack - closebrack;i++){
            std::cout << "\t";
        }
        openbrack += countChar(line, '{');
        std::cout << line << "\n";
    }
    std::cout << "\n";
}