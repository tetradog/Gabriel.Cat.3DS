#include "FileStream.h"



FileStream::FileStream(string path,FileMode openMode)
{
    FILE *file;
    //ctor
    this->isOpened=false;

    this->path=path;
    this->openMode=openMode;

	this->Open();
    // seek to end of file
    fseek(file,0,SEEK_END);

    // file pointer tells us the size
    this->lenght = ftell(file);

    // seek back to start
    fseek(file,0,SEEK_SET);

	this->Close();

}

FileStream::~FileStream()
{
    //dtor
    Close();
    delete this->path;
    delete this->openMode;
}
void FileStream::Open()
{
    if(!this->isOpened)
    {
        this->file=fopen(this->path,(string)this->openMode);
        this->isOpened=true;
    }

}
void FileStream::Close()
{
     if(this->isOpened)
    {
        fclose(this->file);
        this->isOpened=false;
     }
}
u8* FileStream::Read(long inicio,long length)
{

    u8* buffer=malloc(length);
    this->Open();
    fread(buffer,inicio,length,this->file);

    return buffer;

}
