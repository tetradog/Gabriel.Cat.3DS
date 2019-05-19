#include <string>
#include "Enum.h"

#ifndef FILEMODE_H
#define FILEMODE_H



class FileMode:public Enum
{
    public:

        virtual ~FileMode();

         static FileMode RB=new FileMode("rb");
    protected:
       
    private:
		FileMode(string name) :Enum(name) {}
};

#endif // FILEMODE_H
