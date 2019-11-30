#include "SaveData.h"
#include "3DS/N3DS.h"

class NES:public SaveData{
	public:
	const u8 TYPE=N3DS::TYPE+1;
}