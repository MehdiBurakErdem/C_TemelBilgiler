#include <stdio.h>

int main(){
    int sayi;
    int toplam;
    int i;

    toplam = 0;
    i = 1;
    printf("Hangi sayiya kadar ki sayilarin toplamini istiyorsunuz: ");
    scanf("%d", &sayi);

    //Sonradan öğrenilen bişey yok
    while (sayi >= i)
    {
        toplam += i;
        i++;
    }
    printf("++ While ile = %d sayisina kadar ki tum sayilarin toplami %d'dir... \n" , sayi , toplam);

    toplam = 0;
    i=1;
    // ** while ile tek farkı önce yapılıyor sonra sorgulanıyor bence while daha güzel :| . Dikkat!! do while ";" bu var.
    do
    {
        toplam += i;
        i++;
    } while (sayi >= i);

    printf("Do-While ile = %d sayisina kadar ki tum sayilarin toplami %d'dir... \n" , sayi , toplam);

    //Sonradan öğrenilen bişey yok
    toplam = 0;
    // evet forda ki {bunlar nerede} eğer tek işlem var ise, sorgulama veya döngülerde kullanmasan da olur
    for (i = 1; i <= sayi; i++)
        toplam += i;

    printf("++++ For ile = %d sayisina kadar ki tum sayilarin toplami %d'dir... " , sayi , toplam);
    return 0;
}