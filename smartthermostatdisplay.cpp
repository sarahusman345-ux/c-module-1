#include<iostream>
#include<string>

int main(){
    //Clear identifiers using camelcase
    int deviceId = 1042;
    std::string roomLocation = "Living Room";
    double currentTemperature = 21.5;
    double targetTemperature = 23.0;
    bool isTargetReached = false;// 0 represents false in console output

    //Display telemetry screen
    std::cout << "[SYSTEM BOOT] Thermostat ID:" << deviceId << std::endl;
    std::cout << "Location: " << roomLocation << std::endl;
    std:: cout <<" Current Temperature: " << currentTemperature << "°C" << std::endl;
    std::cout <<" Target Temperature: " << targetTemperature << "°C" << std::endl;
    std::cout <<" Target Reached: " << (isTargetReached ? "Yes" : "No") << std::endl;

    return 0;
}