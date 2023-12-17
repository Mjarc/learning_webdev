#include "TP03.h"

int main() {
    Car car("Toyota", 2022, "Corolla");
    Ship ship("Titanic", 1912, 88000);
    Plane plane("Boeing", 2015, "747");

    std::cout << "Details of Vehicles:" << std::endl;
    car.display();
    ship.display();
    plane.display();

    return 0;
}

