#include <stdio.h>

void yerDeistir(int *a,int *b){
    int gecici = *a;
    *a = *b;
    *b = gecici;
}

int main(){

    int sayi1,sayi2;

    printf("1.Sayiyi giriniz: ");
    scanf("%d" , &sayi1);

    printf("2.Sayiyi giriniz: ");
    scanf("%d" , &sayi2);

    printf("Sayi 1 = %d\nSayi 2 = %d\n", sayi1 , sayi2);
    printf("Fonksiyondan sonra");
    yerDeistir(&sayi1,&sayi2);
    printf("Sayi 1 = %d\nSayi 2 = %d", sayi1 , sayi2);

    return 0;
}

// ? Soru : Fonksiyon da neden bir pointer ile sayi1 ve sayi2 aldık normal int olarak alsak ne farkeder ? 
// Önemlidir, güzeldir anlaşılması aynı zamanda pointerın daha iyi anlaşılmasını sağlar.