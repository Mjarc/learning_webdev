#include "TP03.h"

Vehicle::Vehicle(const std::string &name, int year) : name(name), year(year) {}

Car::Car(const std::string &name, int year, const std::string &model) : Vehicle(name, year), model(model) {}

void Car::display() const {
    std::cout << "Car Name: " << name << ", Year: " << year << ", Model: " << model << std::endl;
}

Ship::Ship(const std::string &name, int year, int tonnage) : Vehicle(name, year), tonnage(tonnage) {}

void Ship::display() const {
    std::cout << "Ship Name: " << name << ", Year: " << year << ", Tonnage: " << tonnage << " tons" << std::endl;
}

Plane::Plane(const std::string &name, int year, const std::string &manufacturer) : Vehicle(name, year), manufacturer(manufacturer) {}

void Plane::display() const {
    std::cout << "Plane Name: " << name << ", Year: " << year << ", Manufacturer: " << manufacturer << std::endl;
}
