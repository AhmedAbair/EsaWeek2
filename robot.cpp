#include <iostream>
#include "robot.h"

Robot::Robot(positie* positie) : p(positie) {}

void Robot::run() {
    p->move(1, 1);
}

void Robot::show() {
    std::cout << "Positie: (" << p->x() << ", " << p->y() << ")" << std::endl;
}
