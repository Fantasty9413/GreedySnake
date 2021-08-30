# include "OperatingSystem.hpp"
# include <conio.h>

Key OS_move()
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
                return Key::UP;
                break;

            case 80:
                return Key::DOWN;
                break;

            case 75:
                return Key::LEFT;
                break;

            case 77:
                return Key::RIGHT;
                break;        
            
            default:
                break;
            }
            break;
        
        default:
            return Key::NULL;
            break;
        }
    }
}