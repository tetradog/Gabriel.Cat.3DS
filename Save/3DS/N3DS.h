#include "SaveData.h"
#include "NDS.h"

class N3DS:public SaveData{
	public:
	const u8 TYPE=NDS::TYPE+1;
}