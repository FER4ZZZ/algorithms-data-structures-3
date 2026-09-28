#include "io_module.h"
#include "geometry.h"

int main() {
    double a, b;
    readCatheti(a, b);
    printHypotenuse(hypotenuse(a, b));
    return 0;
}