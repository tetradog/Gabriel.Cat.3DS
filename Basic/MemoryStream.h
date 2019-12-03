#include "Stream.h"
#include "ByteArray.h"

class MemoryStream: public Stream
{
	private:
	ByteArray[] buffers;
	int posBuffers;
	long posBuffer;

	public:

	MemoryStream(ByteArray buffer):MemoryStream({buffer}){}
	MemoryStream(ByteArray[] buffers){}
	~MemoryStream(){}
	

}