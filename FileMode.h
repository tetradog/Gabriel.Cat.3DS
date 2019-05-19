#ifndef FILEMODE_H
#define FILEMODE_H
#import <Enum.h>
#import <string.h>

class FileMode:public Enum
{
    public:

        virtual ~FileMode();

        static FileMode RB=new FileMode("rb");
    protected:
        FileMode(string name):Enum(name){}
    private:
};

#endif // FILEMODE_H
