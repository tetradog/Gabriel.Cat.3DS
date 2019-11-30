#include "SaveData.h"
/*Include all saveData Type*/
#include "NDS.h"
#include "3DS/N3DS.h"
#include "VirtualMachine/SNES.h"
#include "VirtualMachine/NES.h"
#include "VirtualMachine/GBA.h"
#include "VirtualMachine/GBC.h"
#include "VirtualMachine/GB.h"

static SaveData SaveData::Load(Stream file,bool closeStream=true){
SaveData save;
u8 saveDataType=file.ReadU8();
switch(saveDataType)
{
	case N3DS::TYPE:
		save=new N3DS();
	break;
	case NDS::TYPE:
		save=new NDS();
	break;
		case GBA::TYPE:
		save=new GBA();
	break;
		case GBC::TYPE:
		save=new GBC();
	break;
		case GB::TYPE:
		save=new GB();
	break;
		case NES::TYPE:
		save=new NES();
	break;
		case SNES::TYPE:
		save=new SNES();
	break;
}
//read ids
save.IdUser=file.ReadU8();
save.IdSaveData=file.ReadU16();
save.IdParent=file.ReadU16();
//read save data
save.ReadData(file);

if(closeStream)
	delete file;

return save;

}