#include "string.h"

#include "Enum.h"

#ifndef FILEMODE_H
#define FILEMODE_H



class FileMode:public Enum
{
	private:
		FileMode(string name) :Enum(name) {}
    public:

        virtual ~FileMode();
		//todas las opciones validas
        static const FileMode RB=new FileMode("rb");
    protected:


};

#endif // FILEMODE_H
