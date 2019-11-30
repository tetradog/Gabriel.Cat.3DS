#include "String.h"
#include "string.h"
 #include "Number.h"

class User{
private:
const u8 IDUNIQUE=0;
const u8 THEMEID=IDUNIQUE+1;
const u8 NAME=THEMEID+1;
const u8 EMAIL=NAME+1;
const u8 AUTHO=EMAIL+1; 

u8 IdUnique;

public:
User(){}
~User(){}

User(string saveLine):User(String::Split(saveLine)){}

User(string[] saveLines):User(Number::ParseU8(saveLines[THEMEID]),Number::ParseU8(saveLines[THEMEID]),saveLines[NAME],saveLines[EMAIL],saveLines[AUTHO])){}
User(u8 themeId,string name,string email,string autho){}




u8 ThemeID;
string Name;
string Email;
string Autho;


u8 GetIdUnique(){}
string ToSaveLine(){}



}