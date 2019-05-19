#ifndef FILESTREAM_H
#define FILESTREAM_H
#include <string.h>

class FileStream: public Stream
{
    public:
        FileStream(string path,string openMode);
        virtual ~FileStream();
        void Close();
        u8* Read(long inicio,long length);
    protected:

    private:
        void Open();
};

#endif // FILESTREAM_H
