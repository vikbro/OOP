#include <iostream>

enum Sex
{
    dummy = 0,
    male,
    female
};

struct Doctor
{
    char surname[32];
    int yearsexperience;
    char hospitalName[32];
    Sex sex;

    Sex getSex(int input)
    {
        switch (input)
        {
        case 1:
            return male;
        case 2:
            return female;
        default:
            return dummy;
        }
    }

    void createDoctor()
    {
        int userInput;
        std::cout << "Surname: ";
        std::cin.getline(surname, 32);
        std::cout << "Years experience: ";
        std::cin >> yearsexperience;
        std::cin.ignore();
        std::cout << "Hospital name: ";
        std::cin.getline(hospitalName, 32);
        // std::cout << "Sex: (1 - male , 2 - female) ";
        // std::cin >> userInput;
        // sex = getSex(userInput);
        // std::cin.ignore();
    }

    void changeSurname()
    {
        std::cout << "New surname: " << std::endl;
        std::cin.getline(surname, 32);
    }

    void changeHospital()
    {
        std::cout << "New hospital name: " << std::endl;
        std::cin.getline(hospitalName, 32);
    }

    void printInfo()
    {
        std::cout << "Surname: ";
        std::cout << surname << std::endl;
        std::cout << "Years experience: ";
        std::cout << yearsexperience << std::endl;
        std::cout << "Hospital name: ";
        std::cout << hospitalName << std::endl;
        // std::cout << "Sex: (1 - male , 2 - female) ";
        // std::cout << (Sex)sex << std::endl;
    }
};

// void sortDoctors(const Doctor& doctor[])
// {
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = i + 1; j < 2; j++)
//         {
//             if (doctor[i].yearsexperience < doctor[j].yearsexperience)
//             {
//                 std::swap(doctor[i], doctor[j]);
//             }
//         }
//     }
// }

int main()
{
    Doctor doctor[2];

    for (int i = 0; i < 2; i++)
    {
        doctor[i].createDoctor();
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 2; j++)
        {
            if (doctor[i].yearsexperience < doctor[j].yearsexperience)
            {
                std::swap(doctor[i], doctor[j]);
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        doctor[i].printInfo();
    }

    return 0;
}