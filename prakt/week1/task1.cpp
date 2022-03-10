#include <iostream>

struct Destination
{
    char cityName[32];
    int kilometers;

    void print()
    {
        std::cout << "City name: " << cityName;
        std::cout << " City distance: " << kilometers << std::endl;
    }
};

int main()
{
    // Destination cityA;
    // std::cin.getline(cityA.cityName, 32);
    // std::cin >> cityA.kilometers;
    // std::cin.ignore();

    // Destination cityB;
    // std::cin.getline(cityB.cityName, 32);
    // std::cin >> cityB.kilometers;

    // std::cout << "CITY A: " << cityA.cityName << " Distance " << cityA.kilometers << std::endl;
    // std::cout << "CITY B: " << cityB.cityName << " Distance: " << cityB.kilometers;

    Destination cityC[3];

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Enter city name: ";
        std::cin.getline(cityC[i].cityName, 32);

        std::cout << "Enter distance: ";
        std::cin >> cityC[i].kilometers;

        std::cin.ignore();
    }

    for (int i = 0; i < 3; i++)
    {
        cityC[i].print();
    }
    return 0;
}