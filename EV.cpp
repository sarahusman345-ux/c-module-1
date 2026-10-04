#include<iostream>

int main(){
    //Vehicle specs  as constants
    const double BATTERY_CAPACITY_KWH = 75.0;
    const double ENERGY_EFFICIENCY_KM_PER_KWH = 6.2;

    //Telemetry state variables
    double batterypercentage = 80.0; // 80% battery remaining
    long odometerkm = 14250;
    char driverMode = 'S'; // 'S' for Standard, 'E' for Eco
     // Metric computations
     double remainingKwh = BATTERY_CAPACITY_KWH * (batterypercentage / 100.0);
     double estimatedRangeKm = remainingKwh * ENERGY_EFFICIENCY_KM_PER_KWH;
     // Dashboard output
     std::cout <<"====EV DASHBOARD TELEMETRY ====" << std::endl;
     std::cout <<"Driver Mode: " << driverMode << std::endl;
     std::cout <<"odometer: " << odometerkm << " km" << std::endl;
     std::cout <<"Battery  Status: " << batterypercentage << "% ("
    << remainingKwh << " kWh remaining)" << std::endl;
     std::cout <<"Estimated Range: " << estimatedRangeKm << " km" << std::endl;

     return 0;

}