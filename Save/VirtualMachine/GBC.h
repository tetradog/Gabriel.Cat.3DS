#include "SaveData.h"
#include "VirtualMachine/GB.h"

class GBC:public SaveData{
	public:
	const u8 TYPE=GB::TYPE+1;
}