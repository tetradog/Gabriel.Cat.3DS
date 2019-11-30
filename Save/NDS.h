#include "SaveData.h"
#include "VirtualMachine/GBA.h"

class NDS:public SaveData{
	public:
	const u8 TYPE=GBA::TYPE+1;
}