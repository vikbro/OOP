#include "Beer.h"

int main()
{
    // Beer beer1("Heiniken", 500);

    Beer beer1;
    beer1.setBrand("Becks");
    beer1.setSize(500);

    Beer beer2;
    beer2.setBrand("Heineken");
    beer2.setSize(500);

    beer1.add(beer2, 250);
    beer1.print();

    return 0;
}