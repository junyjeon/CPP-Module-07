#include "iter.hpp"

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    std::string stringArray[] = {"one", "two", "three", "four", "five"};

    std::cout << "intArray: ";
    iter(intArray, 5, print<int>);
    std::cout << "\nstringArray: ";
    iter(stringArray, 5, print<std::string>);
    std::cout << std::endl;
    return 0;
}