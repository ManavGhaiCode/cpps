#ifndef _INPUT_H_
#define _INPUT_H_

#include "../../PCH/std.h"

std::string input(std::string prompt) {
    std::string return_value;

    std::cout << prompt;
    std::cin >> return_value;
    std::cout << std::endl;

    return return_value;
}

std::vector<std::string> input(std::vector<std::string> prompts) {
    std::vector<std::string> return_value;

    for (int i = 0; i < prompts.size(); i++) {
        std::cout << prompts.at(i);
        std::cin >> return_value.at(i);
        std::cout << std::endl;
    }

    return return_value;
}

#endif