#include "Stream.h"

long position;
long length;

Stream::Stream()
{

}

Stream::~Stream()
{
    //dtor
}


bool EndOfStream()
{
    return position+1==length;
}

u8* Read(long leght)
{
    u8* subBuffer;
    if(!EndOfStream())
    {
        subBuffer=Read(this.position,lenght);
        this.position+=lenght;
        if(this.position-1>=this.lenght)
            this.position=this.lenght-1;
    }else{
    //empty buffer
    }
    return subBuffer;
}
u8 ReadU8(){
	return *Read(1);
}
u16 ReadU16(){
	return *((u16*)Read(2));//no se si se puede
}

u8* ReadToEnd()
{
    return Read(lenght-posicion);
}
u8* FullRead(){
return Read(0,lenght);
}
void SetPosition(long position)
{
    if(position<0)
        position=0;
    else if(position>lenght)
        position=lenght-1;

    this.position=position;
}
long GetPosition()
{
 return this.position;
}

bool CanFullRead()
{
   return CanRead(length);
}
bool CanRead(long length)
{
    u8* buffer=malloc(length);
    bool canRead=buffer;
    delete buffer;
    return canRead;
}
