#include "SaveData.h"
#include "VirtualMachine/GBC.h"

class GBA:public SaveData{
	public:
	const u8 TYPE=GBC::TYPE+1;
}