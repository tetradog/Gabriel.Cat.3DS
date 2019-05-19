#include <iostream>
#include "FileMode.h"
using namespace std;

void Main()
{
    FileMode rb=FileMode::RB;

    //FileStream fs=new FileStream("path file");
    switch(rb){
	case FileMode::RB: cout<<"funciona :D"; break;
    }
}
