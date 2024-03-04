#pragma once

#include <cstdint>

#include "AdConstants.hpp"

enum class LaneAssociationType
        {
                 Unknown,
                 Left,
                 Center,
                 Right
        };

struct VehicleType
{
     int Id;
     LaneAssociationType Lane;
     float Speed_mps;
     float Distance_m;
};

struct NeighborVehiclesType
{
    VehicleType ll_vehicles[2];
    VehicleType cen_vehicles[2];
    VehicleType rl_vehicles[2];
};