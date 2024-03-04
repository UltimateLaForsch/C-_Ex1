#include <cstdint>
#include <cmath>
#include "lib.h"

std::uint32_t modulo(const std::uint32_t number_a, const std::uint32_t number_b)
{
    uint32_t divIntegerResult = number_a / number_b;
    uint32_t divRest = number_a - (number_b * divIntegerResult);
    return divRest;
}


std::uint32_t sum_of_digits(std::uint32_t number)
{
    int noDig = 1;
    while (number / 10 > 0)
    {
        noDig++;
        number /= 10;
    }
    return noDig;
}

std::uint32_t cross_sum(std::uint32_t number)
{
    int crossSum = 0;
    int noDig = sum_of_digits(number);
    for (std::uint32_t i = noDig; i > 0; i--)
    {
        int divResult = number / (std::uint32_t)pow(10, i-1);
        crossSum += divResult;
        number -= divResult * (std::uint32_t)pow(10, i-1);
    }
    return crossSum;
}
