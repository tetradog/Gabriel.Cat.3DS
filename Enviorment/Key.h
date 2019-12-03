#ifndef KEY_H
#define KEY_H
#include <stdio.h>//creo que  este contiene la funcion hidKeysDown();

class Key
{
    public:

        virtual ~Key();

        const bool IsStart;
        const bool IsSelect;

        const bool IsHome;

        const bool IsA;
        const bool IsB;
        const bool IsX;
        const bool IsY;

        const bool IsUp;
        const bool IsDown;
        const bool IsLeft;
        const bool IsRight;

        const bool IsL;
        const bool IsR;
        //new compatibility
        const bool IsZL;
        const bool IsZR;

        const bool IsDPadLeft;
        const bool IsDPadRight;
        const bool IsDPadUp;
        const bool IsDPadDown;
        //new compatibility
        const bool IsCPadLeft;
        const bool IsCPadRight;
        const bool IsCPadUp;
        const bool IsCPadDown;

        const bool IsStickLeft;
        const bool IsStickRight;
        const bool IsStickUp;
        const bool IsStickDown;

        const bool IsTouch;

        static Key Now();

        static bool IsStartClicked();
        static bool IsSelectClicked();

        static bool IsHomeClicked();

        static bool IsAClicked();
        static bool IsBClicked();
        static bool IsXClicked();
        static bool IsYClicked();

        static bool IsUpClicked();
        static bool IsDownClicked();
        static bool IsLeftClicked();
        static bool IsRightClicked();

        static bool IsLClicked();
        static bool IsRClicked();
        //new compatibility
        static bool IsZLClicked();
        static bool IsZRClicked();

        static bool IsDPadLeftClicked();
        static bool IsDPadRightClicked();
        static bool IsDPadUpClicked();
        static bool IsDPadDownClicked();
        //new compatibility
        static bool IsCPadLeftClicked();
        static bool IsCPadRightClicked();
        static bool IsCPadUpClicked();
        static bool IsCPadDownClicked();

        static bool IsStickLeftClicked();
        static bool IsStickRightClicked();
        static bool IsStickUpClicked();
        static bool IsStickDownClicked();

        static bool IsTouchClicked();

    protected:

    private:
        u32 keys;
        Key();
};

#endif // KEY_H
