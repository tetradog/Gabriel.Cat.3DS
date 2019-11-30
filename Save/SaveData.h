#include "User.h"

class SaveData{

private:

u8 IdUser;

u16 IdSaveData;
u16 IdParent;//saveData anterior para poder recuperar partidas y hacer árboles
SaveData(){}


protected:

u8* Data;//saveData raw



virtual void ReadData(Stream data){}
virtual Stream GetStream(){}

public:
	SaveData(User user,Stream saveData){}
	SaveData(Stream file){}//u8 ids, byte[] dataSave
	~SaveData(){}
	u8 GetIdUser(){}
	void ChangeUser(User user){}
	SaveData Clone(User userOut=null){}//clone then if(userOut!=null) ChangeUser
	Stream ToFileStream(){} //serialitze all ID then GetStream() 

	virtual u8 GetSaveDataType();//define to easy Load File
	static SaveData Load(Stream file){}//lee los ids y  el id tipo con un switch cargo la adecuada
}