#ifndef FILESTREAM_H
#define FILESTREAM_H
#include <string>
#include "stdio.h"

#include "FileMode.h"
#include "Stream.h"

using namespace std;

class FileStream: public Stream
{
    public:
        FileStream(string path,FileMode openMode);
        FileStream(string path):FileStream(path,FileMode::RB){}
        virtual ~FileStream();
        void Close();
        ByteArray Read(long inicio,long length);
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
