#ifndef BEER_H
#define BEER_H

#include <iostream>
#include <cstring>
#include "Beer.cpp"

class Beer
{
private:
    char *brand;
    int size;

    void copy(const Beer &other);
    void erase();

public:
    Beer();
    Beer(const char *, int);
    Beer(const Beer &other);
    Beer &operator=(const Beer &other);
    ~Beer();

    const char *getBrand() const;
    int getSize() const;

    void setBrand(const char *brand);
    void setSize(int size);

    void add(Beer &, int);
    bool check(const char *) const;

    void print() const;
};
#endif
