#include "MemoryStream.h"

MemoryStream::MemoryStream(ByteArray[] buffers){
	this->buffers=buffers;
	this->posBuffers=0;
	this->posBuffer=0;
}
MemoryStream::~MemoryStream(){
		delete this->posBuffer;
		delete this->posBuffers;
		for(int i=0;i<buffers.length;i++)
			delete this->buffers[i];

}

u8* MemoryStream::Read(long inicio,long length){
	u8* buffer=malloc(length);
	u16 pos=0;

	while(pos<length&&this->posBuffers<this->buffers.length){
	
	buffer[pos]=this->buffers[this->posBuffers].Data[this->posBuffer];

	this->posBuffer++;
	if(this->posBuffer==this->buffers[this->posBuffers].Length)
		{
			this->posBuffer=0;
			this->posBuffers++;
		}


	pos++;
	}


	return buffer;
}