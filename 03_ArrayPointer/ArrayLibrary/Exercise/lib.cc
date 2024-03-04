#include <cstddef>
#include <cstdint>
#include <iostream>

#include "lib.h"

void remove_duplicates(std::int32_t *array, std::size_t &length)
{
    size_t test = length;
    for (int i = 0; i < length; ++i)
    {
        int32_t current_char = *(array+i);
        for (int j = i+1; j < length; ++j)
        {
            int32_t next_char = *(array+j);
            if(current_char == next_char)
            {
                for (int k = j; k < length-1; ++k)
                {
                    *(array+k) = *(array+k+1);
                }
                *(array+length) = next_char;
                length--;
                debug_array(array, length);
            }
        }
    }
}

void debug_array(int32_t *copy, size_t length)
{
    for (int i = 0; i < length; ++i)
    {
        std::cout << *(copy + i);
    }
    std::cout << "\n";
}

void rotate_left(std::int32_t *array, std::size_t length)
{
    for (int i = 1; i < length; ++i)
    {
        int32_t temp = *(array+i-1);
        *(array+i-1) = *(array+i);
        *(array+i) = temp;
    }
}

void rotate_right(std::int32_t *array, std::size_t length)
{
    for (int i = length - 1; i > 0; --i)
    {
        int32_t temp = *(array+i);
        *(array+i) = *(array+i-1);
        *(array+i-1) = temp;
    }
}
