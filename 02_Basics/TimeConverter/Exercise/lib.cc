#include <cstdint>

#include "lib.h"

float convert_milliseconds_to_seconds(const float milliseconds)
{
    float seconds = milliseconds / 1000.0F;
    return seconds;
}

float convert_seconds_to_minutes(const float seconds)
{
    float minutes = seconds / 60.0F;
    return minutes;
}

float convert_minutes_to_hours(const float minutes)
{
    float hours = minutes / 60.0F;
    return hours;
}

float convert_milliseconds_to_minutes(const float milliseconds)
{
    float minutes = convert_seconds_to_minutes(convert_milliseconds_to_seconds(milliseconds));
    return minutes;
}

float convert_milliseconds_to_hours(const float milliseconds)
{
    float hours = convert_minutes_to_hours(convert_milliseconds_to_minutes(milliseconds));
    return hours;
}

float convert_seconds_to_hours(const float seconds)
{
    float hours = convert_minutes_to_hours(convert_seconds_to_minutes(seconds));
    return hours;
}
