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

static Key Key::Now()
{
    return  Key();
}

 static bool Key::IsStartClicked(){
     return hidKeysDown()&KEY_START;
 }
        static bool Key::IsSelectClicked(){
             return hidKeysDown()&KEY_SELECT;
        }

        static bool Key::IsHomeClicked(){
             return hidKeysDown()&KEY_H;
        }

        static bool Key::IsAClicked(){
             return hidKeysDown()&KEY_A;
        }
        static bool Key::IsBClicked(){
             return hidKeysDown()&KEY_B;
        }
        static bool Key::IsXClicked(){
             return hidKeysDown()&KEY_X;
        }
        static bool Key::IsYClicked(){
             return hidKeysDown()&KEY_Y;
        }

        static bool Key::IsUpClicked(){
             return hidKeysDown()&KEY_UP;
        }
        static bool Key::IsDownClicked(){
             return hidKeysDown()&KEY_DOWN;
        }
        static bool Key::IsLeftClicked(){
             return hidKeysDown()&KEY_LEFT;
        }
        static bool Key::IsRightClicked(){
             return hidKeysDown()&KEY_RIGHT;
        }

        static bool Key::IsLClicked(){
             return hidKeysDown()&KEY_L;
        }
        static bool Key::IsRClicked(){
             return hidKeysDown()&KEY_R;
        }
        //new compatibility
        static bool Key::IsZLClicked(){
             return hidKeysDown()&KEY_ZL;
        }
        static bool Key::IsZRClicked(){
             return hidKeysDown()&KEY_ZR;
        }

        static bool Key::IsDPadLeftClicked(){
             return hidKeysDown()&KEY_DLEFT;
        }
        static bool Key::IsDPadRightClicked(){
             return hidKeysDown()&KEY_DRIGHT;
        }
        static bool Key::IsDPadUpClicked(){
             return hidKeysDown()&KEY_DUP;
        }
        static bool Key::IsDPadDownClicked(){
             return hidKeysDown()&KEY_DDOWN;
        }
        //new compatibility
        static bool Key::IsCPadLeftClicked(){
             return hidKeysDown()&KEY_CPAD_LEFT;
        }
        static bool Key::IsCPadRightClicked(){
             return hidKeysDown()&KEY_CPAD_RIGHT;
        }
        static bool Key::IsCPadUpClicked(){
             return hidKeysDown()&KEY_CPAD_UP;
        }
        static bool Key::IsCPadDownClicked(){
             return hidKeysDown()&KEY_CPAD_DOWN;
        }

        static bool Key::IsStickLeftClicked(){
             return hidKeysDown()&KEY_CSTICK_LEFT;
        }
        static bool Key::IsStickRightClicked(){
             return hidKeysDown()&KEY_CSTICK_RIGHT;
        }
        static bool Key::IsStickUpClicked(){
             return hidKeysDown()&KEY_CSTICK_UP;
        }
        static bool Key::IsStickDownClicked(){
             return hidKeysDown()&KEY_CSTICK_DOWN;
        }

        static bool Key::IsTouchClicked(){
             return hidKeysDown()&KEY_TOUCH;
        }