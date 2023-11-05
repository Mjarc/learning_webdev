#ifndef MATRICE_H
#define MATRICE_H

#include <vector>
#include <iostream>

class matrice {
public:

    matrice(int n);

    matrice operator+(const matrice& other) const;
    matrice operator-(const matrice& other) const;
    matrice operator*(const matrice& other) const;

    void input();
    void print() const;

private:
    std::vector<std::vector<double>> data;
};

#endif
