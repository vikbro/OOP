#include <iostream>

enum Flavours
{
    dummy = 0,
    Chocolate,
    Vanilla,
    Strawberry,
    Cream
};

struct IceCream
{
    int weight;
    Flavours flavour;
    double price;

    Flavours getIceCreamFlavour(int input)
    {
        switch (input)
        {
        case 1:
            return Chocolate;
        case 2:
            return Vanilla;
        case 3:
            return Strawberry;
        case 4:
            return Cream;
        default:
            return dummy;
        }
    }

    void createIceCream()
    {
        int userInput;
        std::cout << "Enter Flavour(1-chocolate 2-vanilla 3-strawberry 4-cream): " << std::endl;
        std::cin >> userInput;
        flavour = getIceCreamFlavour(userInput);
        std::cout << "Enter price: ";
        std::cin >> price;
        std::cout << "Enter weight: " << std::endl;
        std::cin >> weight;
    }

    void print()
    {
        std::cout << " Flavour: " << (Flavours)flavour << std::endl;
        std::cout << " Price: " << price << std::endl;
        std::cout << " Weight: " << weight << std::endl;
    }
};

struct IceCreamFactory
{
    IceCream iceCreams[2];

    void getCheapest()
    {
        IceCream cheapest = iceCreams[0];
        for (int i = 1; i < 3; i++)
        {
            if (iceCreams[i].price < cheapest.price)
            {
                cheapest = iceCreams[i];
            }
        }
        cheapest.print();
    }
};

int main()
{
    IceCreamFactory factory;

    for (int i = 0; i < 2; i++)
    {
        factory.iceCreams[i].createIceCream();
    }

    factory.getCheapest();
    return 0;
}