#include "MemoryStream.h"

MemoryStream::MemoryStream(ByteArray[] buffers){
	
	this->length=0;
	for(u16 i=0;i<buffers.Length;i++)
		this->length+=buffers[i].Length;

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
	if(inicio>=this->length)
		throw new OutOfRangeException();

	u8* buffer=malloc(length);
	u16 pos=0;
	//posiciono
	this->posBuffers=0;
	this->posBuffer=0;

	while(inicio>0){
		inicio-=this->buffers[this->posBuffers].Length;
		if(inicio>0)
		this->posBuffers++;
		else this->posBuffer=-inicio;
	}

	while(pos<length&&this->posBuffers<this->buffers.length-1){
	
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