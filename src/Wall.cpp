# include "Wall.hpp"

Wall::Wall()
{
    int x_ulcp = 1;     // x coordinate of up left corner point
    int y_ulcp = 1;     

    int x_lrcp = 30;    // x coordinate of lower right corner point
    int y_lrcp = 30;

    for(int i= x_ulcp; i< x_lrcp; i++)      // fill wide side
    {
        Position _wall;

        _wall.x = i;
        _wall.y = y_ulcp;
        wall.push_front(_wall);


        _wall.x = i;
        _wall.y = y_lrcp;
        wall.push_front(_wall);
    }

    for (int i = y_ulcp + 1; i < y_ulcp - 1; i++)       // fill length side
    {
        Position _wall;
        
        _wall.x = x_ulcp;
        _wall.y = i;
        wall.push_front(_wall);


        _wall.x = x_lrcp;
        _wall.y = i;
        wall.push_front(_wall);
    }    
}