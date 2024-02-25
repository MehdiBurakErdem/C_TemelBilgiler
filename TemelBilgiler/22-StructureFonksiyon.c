#include <stdio.h>

struct Student
{
    char isim[15];
    int numarasi;
    int ortalamasi;

};

// Döndüreceğimiz değer bir structure
struct Student DegerAL()
{
    struct Student yeni;

    printf("Ogrenci Bilgilerini isim numara ve ortalami şeklinde giriniz: \n");
    printf("Lutfen Ogrencinin bilgilerini giriniz: ");
    scanf("%s %d %d", yeni.isim, &yeni.numarasi, &yeni.ortalamasi);

    return yeni;
}

// nasıl void blabla(int a) yazıyorsak burada da int yerine bir struct alıyor fonksiyonumuz 
void yazdir(struct Student a)
{
    printf("Ogrencinin bilgileri = %s %d %d\n", a.isim, a.numarasi, a.ortalamasi);
}

int main()
{

    struct Student Orenci = DegerAL();

    yazdir(Orenci);

    return 0;
}