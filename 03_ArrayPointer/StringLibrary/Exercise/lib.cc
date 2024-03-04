#include <cstddef>

#include "lib.h"

/** START PREV FUNCS **/

bool is_upper_case(const char character)
{
    if ((character >= 'A') && (character <= 'Z'))
    {
        return true;
    }

    return false;
}

bool is_lower_case(const char character)
{
    if ((character >= 'a') && (character <= 'z'))
    {
        return true;
    }

    return false;
}

bool is_numeric(const char character)
{
    if ((character >= '0') && (character <= '9'))
    {
        return true;
    }

    return false;
}

bool is_alpha(const char character)
{
    if (is_upper_case(character) || is_lower_case(character))
    {
        return true;
    }

    return false;
}

bool is_alpha_numeric(const char character)
{
    return is_numeric(character) || is_alpha(character);
}

char to_upper_case(const char character)
{
    if (is_lower_case(character))
    {
        return character - 32;
    }

    return character;
}

char to_upper_case_(const char character)
{
    if (is_lower_case(character))
    {
        return character - 32;
    }

    return character;
}

char to_lower_case(const char character)
{
    if (is_upper_case(character))
    {
        return character + 32;
    }

    return character;
}

/** END PREV FUNCS **/

char *to_upper_case(char *text)
{
    if(text == nullptr)
        return nullptr;

    char* current_letter = text;
    while(*current_letter != '\0')
    {
        *current_letter = to_upper_case(*current_letter);
        current_letter++;
    }
    return text;
}

char *to_upper_case_v2(char *text)
{
    if(text == nullptr)
        return nullptr;

    size_t size = string_length(text);
    size_t check = sizeof('t');
    for (int i = 0; i < size; ++i)
    {
        char* adr = (char*) &text + i;
        *adr = to_upper_case(*adr);
    }

    return text;
}

char *to_lower_case(char *text)
{
    if(text == nullptr)
        return nullptr;

    char* current_letter = text;
    while(*current_letter != '\0')
    {
        *current_letter = to_lower_case(*current_letter);
        current_letter++;
    }
    return text;
}

std::size_t string_length(const char *text)
{
    if(text == nullptr)
        return 0;

    size_t count = 0;
    while(*text != '\0')
    {
        count++;
        text++;
    }
    return count;
}

bool string_equal(const char *string1, const char *string2)
{
    if (string1 == nullptr || string2 == nullptr)
    {
        return false;
    }

    while(*string1 != '\0')
    {
        if(*string1 != *string2)
            return false;
        string1++;
        string2++;
    }
    if(*string1 != '\0')
        return false;

    return true;
}
