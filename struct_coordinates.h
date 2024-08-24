#include <iostream>

struct two_coordianes{
    double x1;
    double y1;
    double x2;
    double y2;

    void read_coordinates(){
        std::cin >> x1 >> y1 >> x2 >> y2;
    }

    bool is_equal(two_coordianes c){
        if (x1 != c.x1)
            return false;
        if (x2 !=c.x2)
            return false;
        if (y1 !=c.y1)
            return false;
        if (y2 !=c.y2)
            return false;
        
        return true;
    }
};

struct one_coordinates
{
    double x;
    double y;

    void read_coordinates(){
        std::cin >> x >> y;
    }
};
