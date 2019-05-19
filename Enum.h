#ifndef ENUM_H
#define ENUM_H
#include <string.h>

class Enum
{
    public:
        Enum(string name);
        virtual ~Enum();
        string ToString();
        //para que funcione en el switch
        operator int() const { return id; }
        operator string() const{ return name; }
    protected:

    private:
        int id;
        string name;
};

#endif // ENUM_H
