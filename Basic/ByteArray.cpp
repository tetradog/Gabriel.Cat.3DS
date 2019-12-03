#include "ByteArray.h"

ByteArray::ByteArray(u8* data,u16 length){
	this->Data=data;
	this->Length=length;
}
ByteArray::~ByteArray(){
	delete this->Data;
	delete this->Length;
}

static ByteArray U8ToArray(u8 data){
	return new ByteArray({data},1);//no se si se hace así
}
static ByteArray U16ToArray(u16 data){
	return new ByteArray(data,2);//mirar de convertir a u8*
}