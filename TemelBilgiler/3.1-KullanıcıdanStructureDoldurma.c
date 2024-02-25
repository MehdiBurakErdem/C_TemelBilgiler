#include <stdio.h>

struct Student
{
    char isim[15];
    int numarasi;
    int ortalamasi;
};

int main()
{

    struct Student Orenci[3]; //neden dizi çünkü bu dizinin elemanları bir structure olarak alıp ve toplamda 3 kişiyi dizime atacağım
    printf("-- Istenilen ogrencinin bilgilerini tek satirda isim(tek kelime) no ortalama seklinde giriniz -- \n");

    for (int i = 0; i < 3; i++) 
    {
        printf("%d. Ogrenci: ", i+1);
        scanf("%s %d %d", Orenci[i].isim, &Orenci[i].numarasi, &Orenci[i].ortalamasi); // '&' lara dikkat 
    }

    printf("-+++++-    -+++++-    -+++++-\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d.Ogrenci iCin bilgiler =  %s %d %d\n",i+1, Orenci[i].isim, Orenci[i].numarasi, Orenci[i].ortalamasi);
    }

    return 0;
}