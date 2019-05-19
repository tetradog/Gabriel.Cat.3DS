#include "FileStream.h"
#include <string.h>
#include <stdio.h>

string path;
string openMode;
FILE *file;
bool isOpened;

FileStream::FileStream(string path,string openMode)
{
    FILE *file;
    //ctor
    this.isOpened=false;

    this.path=path;
    this.openMode=openMode;

    Open();
    // seek to end of file
    fseek(file,0,SEEK_END);

    // file pointer tells us the size
    this.lenght = ftell(file);

    // seek back to start
    fseek(file,0,SEEK_SET);

    Close();

}

FileStream::~FileStream()
{
    //dtor
    Close();
    delete path;
    delete openMode;
}
void Open()
{
    if(!isOpened)
    {
        file=fopen(path,openMode);
        isOpened=true;
    }

}
void Close()
{
     if(isOpened)
    {
        fclose(file);
        isOpened=false;
     }
}
u8* Read(long inicio,long length)
{

    u8* buffer=malloc(length);
    Open();
    fread(buffer,inicio,length,file);

    return buffer;

}
