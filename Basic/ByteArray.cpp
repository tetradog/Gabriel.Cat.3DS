#include "ByteArray.h"

ByteArray::ByteArray(byte* data,int length){
	this->data8=data;
	this->Length=length;
}
ByteArray::ByteArray(ushort* data,int length){
	this->data16=data;
	this->Length=length;
}
ByteArray::~ByteArray(){
	delete this->data8;
	delete this->data16;

}

int ByteArray::getLength() const{
		return this->length;
	}
static ByteArray U8ToArray(u8 data){
	return  ByteArray({data},1);//no se si se hace as�
}
static ByteArray U16ToArray(u16 data){
	return  ByteArray(data,2);//mirar de convertir a u8*
}