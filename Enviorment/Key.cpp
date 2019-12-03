#include "Key.h"

Key::Key()
{
    //ctor
     this.keys=hidKeysDown();

     this.IsStart=this.keys & KEY_START;
     this.IsSelect=this.keys & KEY_SELECT;

     this.IsHome=this.keys & KEY_H;

     this.IsA=this.keys & KEY_A;
     this.IsB=this.keys & KEY_B;
     this.IsX=this.keys & KEY_X;
     this.IsY=this.keys & KEY_Y;

     this.IsUp=this.keys & KEY_UP;
     this.IsDown=this.keys & KEY_DOWN;
     this.IsLeft=this.keys & KEY_LEFT;
     this.IsRight=this.keys & KEY_RIGHT;

     this.IsL=this.keys & KEY_L;
     this.IsR=this.keys & KEY_R;
        //new compatibility
     this.IsZL=this.keys & KEY_ZL;
     this.IsZR=this.keys & KEY_ZR;

     this.IsDPadLeft=this.keys & KEY_DLEFT;
     this.IsDPadRight=this.keys & KEY_DRIGHT;
     this.IsDPadUp=this.keys & KEY_DUP;
     this.IsDPadDown=this.keys & KEY_DDOWN;
        //new compatibility
     this.IsCPadLeft=this.keys & KEY_CPAD_LEFT;
     this.IsCPadRight=this.keys & KEY_CPAD_RIGHT;
     this.IsCPadUp=this.keys & KEY_CPAD_UP;
     this.IsCPadDown=this.keys & KEY_CPAD_DOWN;

     this.IsStickLeft=this.keys & KEY_CSTICK_LEFT;
     this.IsStickRight=this.keys & KEY_CSTICK_RIGHT;
     this.IsStickUp=this.keys & KEY_CSTICK_UP;
     this.IsStickDown=this.keys & KEY_CSTICK_DOWN;

     this.IsTouch=this.keys&KEY_TOUCH;
}

Key::~Key()
{
    //dtor
}

Key Now()
{
    return new Key();
}
