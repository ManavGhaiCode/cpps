#include "./print.h"

int main() {
    int obj[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::string str_obj[] = { "h", "he", "hel", "hell", "hello", "hello w", "hello wo", "hello wor", "hello worl", "hello world" };

    print(obj, 10);
    print(str_obj, 10);

    return 0;
}