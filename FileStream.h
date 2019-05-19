#ifndef FILESTREAM_H
#define FILESTREAM_H
#include <string>
#include "stdio.h"
#include "FileMode.h"
#include "Stream.h"
class FileStream: public Stream
{
    public:
        FileStream(string path,FileMode openMode);
        FileStream(string path):FileStream(path,FileMode::RB){}
        virtual ~FileStream();
        void Close();
        u8* Read(long inicio,long length);
    protected:

    private:
		string path;
		FileMode openMode;
		FILE* file;
		bool isOpened;
		long lenght;

        void Open();
};

#endif // FILESTREAM_H
