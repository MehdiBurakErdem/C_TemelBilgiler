#include <stdio.h>

int main()
{
    // Verilen sayıların integar olarak istiyoruz, sen birde bunları float olarak iste ve yazdır bakalım.
    int sayi1;
    int sayi2;
    int toplam;

    // scan da & kullanmayı unutma !! Scanf aldığı değeri nereye atacağını bilemez
    printf("Toplamak istediiniz 2 sayiyi art arda giriniz!\nSayi1: ");
    scanf("%d" , &sayi1);
    printf("Sayi2: ");
    scanf("%d" , &sayi2);
    toplam = sayi1 + sayi2 ;
    printf("Sayilarin toplami: %d " , toplam);
    return 0;
}