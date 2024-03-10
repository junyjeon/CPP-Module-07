#include "Array.hpp"

int main()
{
    Array<int> intArray(5);
    std::cout << "intArray size: " << intArray.size() << std::endl;
    for (unsigned int i = 0; i < intArray.size(); i++)
    {
        intArray[i] = i * 10;
        std::cout << "intArray[" << i << "]: " << intArray[i] << std::endl;
    }

    // double
    Array<double> doubleArray(3);
    doubleArray[0] = 0.1;
    doubleArray[1] = 0.2;
    doubleArray[2] = 0.3;
    std::cout << "doubleArray size: " << doubleArray.size() << std::endl;
    for (unsigned int i = 0; i < doubleArray.size(); i++)
    {
        std::cout << "doubleArray[" << i << "]: " << doubleArray[i] << std::endl;
    }

    try
    {
        std::cout << "Trying to access out of bounds: " << intArray[10] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}