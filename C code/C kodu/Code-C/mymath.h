// Fonksiyon tanımı
int toplama(int a, int b)
{
    int toplam = a + b;
    return toplam;
}

// Fonksiyon tanımı
int carpma(int a, int b)
{
    int toplam = a * b;
    return toplam;
}

// Fonksiyon tanımı
int cikarma(int a, int b)
{
    return toplama(a, -b);
}

// Fonksiyon tanımı
float bolme(float a, float b)
{
    if (b == 0);
    {
        printf("Bolme islemi tanimsiz.");
        return -1;
    }
    int bolme=a/b;
    return bolme;
}