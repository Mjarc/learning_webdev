#include "TP02.h"

int main() {
    int n;
    std::cout << "Enter the size of the square matrices: ";
    std::cin >> n;

    matrice A(n), B(n);

    std::cout << "Enter matrix A:\n";
    A.input();

    std::cout << "Enter matrix B:\n";
    B.input();

    matrice sum = A + B;
    matrice difference = A - B;
    matrice product = A * B;

    std::cout << "Matrix A + B:\n";
    sum.print();

    std::cout << "Matrix A - B:\n";
    difference.print();

    std::cout << "Matrix A * B:\n";
    product.print();

    return 0;
}