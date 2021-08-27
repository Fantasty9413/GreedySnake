# include "Wall.hpp"

Wall::Wall()
{
    int x_ulcp = 1;     // x coordinate of up left corner point
    int y_ulcp = 1;     

    int x_lrcp = 30;    // x coordinate of lower right corner point
    int y_lrcp = 30;

    for(int i= x_ulcp; i < x_lrcp; i++)      // fill wide side
    {
        Position _wall_up;
        _wall_up.x = i;
        _wall_up.y = y_ulcp;
        position.push_front(_wall_up);

        Position _wall_down;
        _wall_down.x = i;
        _wall_down.y = y_lrcp;
        position.push_back(_wall_down);
    }

    for (int i = y_ulcp; i < y_lrcp; i++)       // fill length side
    {
        Position _wall_left;   
        _wall_left.x = x_ulcp;
        _wall_left.y = i;
        position.push_front(_wall_left);

        Position _wall_right; 
        _wall_right.x = x_lrcp;
        _wall_right.y = i;
        position.push_back(_wall_right);
    }    
}