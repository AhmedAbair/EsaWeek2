#ifndef ROBOT_H
#define ROBOT_H

#include "positie.h"

class Robot {
private:
    positie* p;
public:
    Robot(positie* positie);
    void run();
    void show();
};

#endif
