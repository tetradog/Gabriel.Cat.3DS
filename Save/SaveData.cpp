#include "SaveData.h"
/*Include all saveData Type*/
#include "NDS.h"
#include "3DS/N3DS.h"
#include "VirtualMachine/SNES.h"
#include "VirtualMachine/NES.h"
#include "VirtualMachine/GBA.h"
#include "VirtualMachine/GBC.h"
#include "VirtualMachine/GB.h"

User::~User(){

	delete this->IdUser;
	delete this->IdSaveData;
	delete this->IdParent;
	delete this->Data;
}



u8 GetIdUser(){
	return this->IdUser;
}
void ChangeUser(User user){
	this->IdUser=user.GetId();
}
SaveData Clone(User userOut=null){
	SaveData save=SaveData::GetSaveData(this->GetSaveDataType());

save.IdSaveData=this->IdSaveData;
save.IdParent=this->IdParent;
//read save data
save.ReadData(this->GetStream());

if(userOut==null)
	save.IdUser=this->IdUser;
else save.ChangeUser(userOut);

return save;
	
}
Stream ToFileStream(){
	//id datatype;
	//ids
	//data
	return new MemoryStream({ByteArray::U8ToArray(this->GetSaveDataType),ByteArray::U8ToArray(this->IdUser),ByteArray::U16ToArray(this->IdSaveData),ByteArray::U16ToArray(this->IdParent),this->Data});

}




static SaveData SaveData::Load(Stream file,bool closeStream=true){

SaveData save=GetSaveData(file.ReadU8());
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

static SaveData GetSaveData(u8 saveType){
SaveData save;
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
return save;
}

