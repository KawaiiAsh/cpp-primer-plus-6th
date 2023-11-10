#include <iostream>

using namespace std;

struct polar {
    double distance;
    double angle;
};

struct rect {
    double x;
    double y;
};

polar reac_to_polar(rect xypos);
void show_polar(polar dapos);