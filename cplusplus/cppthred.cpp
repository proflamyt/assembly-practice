#include<iostream>
#include<thread>
#include<map>
#include<string>
#include<chrono>

using namespace std::chrono_literals;


void RefreshForecast(std::map<std::string, int> forecastmap)
{
    while (true) {
        for (auto& item: forecastmap) {
        item.second++;
        std::cout << item.first << "-" << item.second << std::endl;
        }
        std::this_thread::sleep_for(2000ms);
    }
   
}

int main()
{
    std::map<std::string, int> forecastTable = {
        {"Ekiti", 23},
        {"Ogun", 27},
        {"Lagos", 30},
        {"Osun", 97},

    };

    std::thread bgWorker(RefreshForecast, forecastTable);
}