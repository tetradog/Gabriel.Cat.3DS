#include "Stream.h"
#include "ByteArray.h"

class MemoryStream: public Stream
{
	private:
	ByteArray[] buffers;
	u8 posBuffers;
	u16 posBuffer;

	public:

	MemoryStream(ByteArray buffer):MemoryStream({buffer}){}
	MemoryStream(ByteArray[] buffers){}
	~MemoryStream(){}
	

}