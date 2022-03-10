#include <iostream>

struct Prisoner
{
    char name[32];
    int id;
    int yearsInPrison;

    void print() const
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "ID: " << id << std::endl;
        std::cout << "Years left: " << yearsInPrison << std::endl;
    }
    void createPrisoner()
    {
        std::cout << "Enter name" << std::endl;
        std::cin.getline(name, 32);
        std::cout << "Enter ID" << std::endl;
        std::cin >> id;
        std::cout << "Enter years left" << std::endl;
        std::cin >> yearsInPrison;
        std::cin.ignore();
    }
};

struct Prison
{
    char name[32];
    Prisoner prisoners[4];
    void sortPrisoners()
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (prisoners[i].yearsInPrison < prisoners[j].yearsInPrison)
                {
                    std::swap(prisoners[i], prisoners[j]);
                }
            }
        }
    }
};

void prisonPrintInfo(const Prison &prison)
{
    std::cout << prison.name << std::endl;
    for (int i = 0; i < 4; i++)
    {
        prison.prisoners[i].print();
    }
}

int main()
{
    Prison prison;
    for (int i = 0; i < 4; i++)
    {
        prison.prisoners[i].createPrisoner();
    }

    prison.sortPrisoners();

    for (int i = 0; i < 4; i++)
    {
        prison.prisoners[i].print();
    }
    return 0;
}