#include "lib.h"

bool is_numeric(const char character)
{
    return (character >= 48 && character <= 57);
}

bool is_alpha(const char character)
{
    return is_upper_case(character) || is_lower_case(character);
}

bool is_alpha_numeric(const char character)
{
    return is_numeric(character) || is_alpha(character);
}

bool is_upper_case(const char character)
{
    return (character >= 65 && character <= 90);
}

bool is_lower_case(const char character)
{
    return (character >= 97 && character <= 122);
}

char to_upper_case(const char character)
{
    char output = character;
    if (is_lower_case(character))
         output -= 32;
    return output;
}

char to_lower_case(const char character)
{
    char output = character;
    if (is_upper_case(character))
        output += 32;
    return output;
}
