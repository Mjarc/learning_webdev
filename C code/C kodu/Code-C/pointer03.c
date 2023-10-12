// ========================
// gcc pointer03.c -o pointer03.out
// ./pointer03.out
// ========================

#include <stdio.h>


// Pass by reference(adres) örneği
void topla(int *a, int *b) {
    // a işaretçisinin gösterdiği adresteki 
    // yeni değer
    // ....   a ve b'nin gösterdiği adreslerdeki 
    // ....   değerlerin toplamı olacak
    *a = (*a) + (*b);
}

// Pass by reference(adres) örneği
void ikile(int *a) {
    // verilen değer iki ile carpar
    // ...
    *a=(*a)*2;

}

int main() {
    int sayi1 = 5;
    int sayi2 = 10;

    printf("Sayi1: %d, Sayi2: %d\n", sayi1, sayi2);
    topla(&sayi1, &sayi2);
    printf("Sayi1: %d, Sayi2: %d\n", sayi1, sayi2);
    ikile(&sayi1);
    ikile(&sayi2);
    printf("Sayi1: %d, Sayi2: %d\n", sayi1, sayi2);

    return 0;
}