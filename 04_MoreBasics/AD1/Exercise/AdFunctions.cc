#include <cmath>
#include <cstdint>
#include <iostream>

#include "AdConstants.hpp"
#include "AdFunctions.hpp"

float kph_to_mps(const float kph)
{
    return kph * 1000 / 60 / 60;
}

void init_ego_vehicle(VehicleType &ego_vehicle)
{
    ego_vehicle.Id = EGO_VEHICLE_ID;
    ego_vehicle.Speed_mps = kph_to_mps(135.0F) ;
    ego_vehicle.Lane = LaneAssociationType::Center;
    ego_vehicle.Distance_m = 0.0F;
}

void init_vehicle(VehicleType &vehicle,
                  const std::int32_t id,
                  const float speed_kph,
                  const float distance_m,
                  const LaneAssociationType lane)
{
    vehicle.Id = id;
    vehicle.Speed_mps = kph_to_mps(speed_kph);
    vehicle.Distance_m = distance_m;
    vehicle.Lane = lane;
}

void init_vehicles(NeighborVehiclesType &vehicles)
{
    init_vehicle(vehicles.ll_vehicles[0], 0, 50.0F, 40.0F, LaneAssociationType::Left);
    init_vehicle(vehicles.ll_vehicles[1], 1, 100.0F, 70.0F, LaneAssociationType::Left);
    init_vehicle(vehicles.cen_vehicles[0], 2, 80.0F, 30.0F, LaneAssociationType::Center);
    init_vehicle(vehicles.cen_vehicles[1], 3, 150.0F, 80.0F, LaneAssociationType::Center);
    init_vehicle(vehicles.rl_vehicles[0], 4, 27.0F, 75.0F, LaneAssociationType::Right);
    init_vehicle(vehicles.rl_vehicles[1], 5, 70.0F, 35.0F, LaneAssociationType::Right);
}

void print_vehicle(const VehicleType &vehicle)
{
    std::cout << "\nID: " << vehicle.Id << "\n";
    std::cout << "Speed: " << vehicle.Speed_mps << "\n";
    std::cout << "Distance: " << vehicle.Distance_m << "\n";
    std::cout << "Lane: " << (int)vehicle.Lane << "\n";
}

void print_neighbor_vehicles(const NeighborVehiclesType &vehicles)
{
    std::cout << "new version:\n";
    int size = sizeof (vehicles);
//    for (int i = 0; i < size; ++i)
//    {
//        print_vehicle*((VehicleType) vehicles + size);
//    }
    std::cout << "old version\n";
    print_vehicle(vehicles.ll_vehicles[0]);
    print_vehicle(vehicles.ll_vehicles[1]);
    print_vehicle(vehicles.cen_vehicles[0]);
    print_vehicle(vehicles.cen_vehicles[1]);
    print_vehicle(vehicles.rl_vehicles[0]);
    print_vehicle(vehicles.rl_vehicles[1]);
}
