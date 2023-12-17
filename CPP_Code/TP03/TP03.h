#ifndef TP03_H
#define TP03_H
#include <iostream>

class Vehicle {
protected:
    std::string name;
    int year;

public:
    Vehicle(const std::string &name, int year);
    virtual void display() const = 0;
    virtual ~Vehicle() {} 
};

class Car : public Vehicle {
private:
    std::string model;

public:
    Car(const std::string &name, int year, const std::string &model);
    void display() const override;
};

class Ship : public Vehicle {
private:
    int tonnage;

public:
    Ship(const std::string &name, int year, int tonnage);
    void display() const override;
};

class Plane : public Vehicle {
private:
    std::string manufacturer;

public:
    Plane(const std::string &name, int year, const std::string &manufacturer);
    void display() const override;
};

#endif // TP03_H



