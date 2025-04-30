#include "positie.h"

positie::positie(int x, int y) : X(x), Y(y) {}

void positie::move(int dx, int dy) {
    X += dx;
    Y += dy;
}

int positie::x() {
    return X;
}

int positie::y() {
    return Y;
}
