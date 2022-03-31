#include "Beer.h"

void Beer::erase()
{
    delete[] this->brand;
}

void Beer::copy(const Beer &other)
{
    setBrand(other.brand);
    setSize(other.size);
}

Beer::Beer()
{
    setBrand("");
    setSize(0);
}

Beer::Beer(const char *brand, int size)
{
    setBrand(brand);
    setSize(size);
}

Beer &Beer::operator=(const Beer &other)
{

    if (this != &other)
    {
        this->erase();
        this->copy(other);
    }
    return *this;
}

Beer::~Beer()
{
    erase();
}

const char *Beer::getBrand() const
{
    return brand;
}

int Beer::getSize() const
{
    return size;
}

void Beer::setBrand(const char *brand)
{
    delete[] this->brand;
    this->brand = new char[strlen(brand) + 1];
    strcpy(this->brand, brand);
}

void Beer::setSize(int size)
{
    this->size = size;
}

void Beer::add(Beer &other, int addSize)
{
    if (other.getSize() < addSize)
    {
        std::cout << "Not enogh liquid!\n";
    }
    else
    {
        this->setSize(this->size + addSize);
        other.setSize(other.size - addSize);
        strcat(this->brand, "&");
        strcat(this->brand, other.getBrand());
    }
}

bool Beer::check(const char *brand) const
{
    char *check;
    check = strstr(this->brand, brand);
    if (check == brand)
        return true;
    return false;
}

void Beer::print() const
{
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Size: " << size << std::endl;
}
