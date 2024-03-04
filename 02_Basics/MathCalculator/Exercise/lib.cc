#include <cstdint>
#include <iostream>
#include <cmath>
#include "lib.h"

double calculate_pi(const std::uint32_t num_iterations)
{
    double result = 0;
    for (int i = 0; i < num_iterations; ++i)
    {
        result += (1.0 / (4.0F * i + 1.0F)) - (1.0F / (4.0F * i + 3.0F));
    }
    return result * 4;
}

void print_dec_to_bin(std::uint8_t value)
{

}
