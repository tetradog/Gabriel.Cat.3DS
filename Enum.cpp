#include "Enum.h"

static int generadorId=0;



Enum::Enum(string name)
{
    //ctor
    this.name=name;
    id=generadorId++;
}

Enum::~Enum()
{
    //dtor
    delete this.name;
}

string ToString()
{
    return name;
}
