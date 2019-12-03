#include "Stream.h"

class ByteArray
{

	private:
		const u8*  data8;
		const u16* data16;
		int length;
	public:
	
	 

	ByteArray(u8* data,int length){}
	ByteArray(u16* data,int length){}
	~ByteArray(){}

	int getLength() const;
	

	static ByteArray U8ToArray(u8 data){}
	static ByteArray U16ToArray(int data){}


}