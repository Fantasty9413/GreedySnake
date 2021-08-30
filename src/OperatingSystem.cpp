# include "OperatingSystem.hpp"
# include <conio.h>

Key OS_Key()
{
    char ch;
    if(kbhit())
    {
        ch = getch();
        switch (ch)
        {
        case -32:
            ch = getch();
            switch (ch)
            {
            case 72:
                return Key::key_UP;
                break;

            case 80:
                return Key::key_DOWN;
                break;

            case 75:
                return Key::key_LEFT;
                break;

            case 77:
                return Key::key_RIGHT;
                break;        
            
            default:
                break;
            }
            break;
        
        default:
            return Key::key_None;
            break;
        }
    }
    else
    {
        return Key::key_None; 
    }

    return Key::key_None;  
}