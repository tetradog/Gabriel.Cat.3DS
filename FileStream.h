#ifndef FILESTREAM_H
#define FILESTREAM_H
#include <string.h>
#include <stdio.h>
#include <FileMode.h>

class FileStream: public Stream
{
    public:
        FileStream(string path,FileMode openMode);
        FileStream(string path):FileStream(path,FileMode.RB){}
        virtual ~FileStream();
        void Close();
        u8* Read(long inicio,long length);
    protected:

    private:
        void Open();
};

#endif // FILESTREAM_H
