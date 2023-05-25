#ifndef _PRINT_H_
#define _PRINT_H_

#include "../../PCH/iostr.h"
#include <functional>

template<typename T> void print(T obj) {
    std::cout << obj << std::endl;
}

template<typename T> void print(T obj, std::function<std::string(T)> func) {
    std::cout << func(obj) << std::endl;
}

template<typename T> void print(T obj[], int len) {
    std::cout << "[ ";

    for (int i = 0; i < len; i++) {
        if (i == len - 1) {
            std::cout << obj[i];
        } else {
            std::cout << obj[i] << ", ";
        }
    }

    std::cout << " ]" << std::endl;
}

template<typename T> void print(T obj[], int len, std::function<std::string(T)> func) {
    std::cout << "[ ";

    for (int i = 0; i < len; i++) {
        if (i == len - 1) {
            std::cout << func(obj[i]);
        } else {
            std::cout << func(obj[i]) << ", ";
        }
    }

    std::cout << " ]" << std::endl;
}

template<typename T> void print(std::vector<T> obj) {
    int i = 0;

    std::cout << "[ ";

    for (T node : obj) {
        if (i == obj.size - 1) {
            std::cout << node;
        } else {
            std::cout << node << ", ";
        }
    }

    std::cout << " ]" << std::endl;
}

template<typename T> void print(std::vector<T> obj, std::function<std::string(T)> func) {
    int i = 0;

    std::cout << "[ ";

    for (T node : obj) {
        if (i == obj.size - 1) {
            std::cout << func(node);
        } else {
            std::cout << func(node) << ", ";
        }
    }

    std::cout << " ]" << std::endl;
}

#endif