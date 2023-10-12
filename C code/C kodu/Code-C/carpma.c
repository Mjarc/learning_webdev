// ========================
// gcc carpma.c -o carpma.out
// ./carpma.out
// ========================

#include <stdio.h>
#include "mymath.h"

int main()
{
    int sayi1 = 3;
    int sayi2 = 7;
    int sonuc;
    
    // Fonksiyon çağrısı
    sonuc = toplama(sayi1, sayi2);
    printf("%d ve %d'nin toplama sonucu: %d\n", sayi1, sayi2, sonuc);
 
    sonuc = carpma(sayi1, sayi2);
    printf("%d ve %d'nin carpma sonucu: %d\n", sayi1, sayi2, sonuc);  

    sonuc = cikarma(sayi1, sayi2);
    printf("%d'dan ve %d'yi cikarma sonucu: %d\n", sayi1, sayi2, sonuc); 

    sonuc = bolme(sayi1, sayi2);
    printf("%d'yi %d'ye bolmenin sonucu: %d\n", sayi1, sayi2, sonuc);

    return 0;
}





