#include "TP02.h"

matrice::matrice(int n) {
    data = std::vector<std::vector<double>>(n, std::vector<double>(n, 0.0));
}

matrice matrice::operator+(const matrice& other) const {
    if (data.size() != other.data.size())
        throw std::invalid_argument("Matrix dimensions do not match for addition.");

    matrice result(data.size());
    for (int i = 0; i < data.size(); i++) {
        for (int j = 0; j < data[i].size(); j++) {
            result.data[i][j] = data[i][j] + other.data[i][j];
        }
    }
    return result;
}

matrice matrice::operator-(const matrice& other) const {
    if (data.size() != other.data.size())
        throw std::invalid_argument("Matrix dimensions do not match for subtraction.");

    matrice result(data.size());
    for (int i = 0; i < data.size(); i++) {
        for (int j = 0; j < data[i].size(); j++) {
            result.data[i][j] = data[i][j] - other.data[i][j];
        }
    }
    return result;
}

matrice matrice::operator*(const matrice& other) const {
    if (data.size() != other.data.size())
        throw std::invalid_argument("Matrix dimensions do not match for multiplication.");

    int n = data.size();
    matrice result(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                result.data[i][j] += data[i][k] * other.data[k][j];
            }
        }
    }

    return result;
}

void matrice::input() {
    for (int i = 0; i < data.size(); i++) {
        for (int j = 0; j < data[i].size(); j++) {
            std::cout << "Enter element [" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> data[i][j];
        }
    }
}

void matrice::print() const {
    for (int i = 0; i < data.size(); i++) {
        for (int j = 0; j < data[i].size(); j++) {
            std::cout << data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}