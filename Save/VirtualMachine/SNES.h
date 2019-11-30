#include "SaveData.h"
#include "VirtualMachine/NES.h"

class SNES:public SaveData{
	public:
	const u8 TYPE=NES::TYPE+1;
}//N64,GC,WII,WIIU,Switch,etc...