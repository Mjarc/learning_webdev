#include <iostream>
#include <cmath>

double calc_hypothenus(double num1, double num2){
    return sqrt(pow(num1,2)+pow(num2,2));
}

int main(){
    double num1;
    double num2;

    std::cin >> num1;
    std::cin >> num2;

    std::cout <<"The hypothenus of these 2 numbers is: " <<calc_hypothenus(num1,num2)  <<"\n";
    return 0;
}

