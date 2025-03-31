#include <iostream>
#include "DemoLib.h"

int main(int, char **)
{
    int a = 5;
    int b = 10;
    int result = add(a, b);
    std::cout << "The sum of " << a << " and " << b << " is: " << result << std::endl;
    return 0;
}
