#include <stdio.h>
#include <stdlib.h> // rand ve srand için standart library
#include <time.h> // time fonksiyonu için

int main(){
    int sayiadet;
    int randomsayi;
    int         i;
    unsigned int    baslangic_zamani ; // eksisiz :) unsigned

    printf("Kac tane rastgele sayi istersiniz? : ");
    scanf("%d" , &sayiadet);
    

    // Null, yani hiçbir parametre almaksızın time fonksiyonu uunix siteminin saniye cinsinden long veri tipi olarak verir ancak biz genel olarak typdef ile 
    // time_t olarak tutarız ancak bu küçük bir örnek olduğundan gerek duyulmadı
    baslangic_zamani  = time(NULL);

    srand(baslangic_zamani);
    for (i = 1; i <= sayiadet; i++)
    {
        randomsayi = rand();
        printf("%d. sayi: %d \n" ,i, randomsayi);
    }
    return (0);
}    
/* 
Sadece rand desek hep farklı değerleri üretiyor ancak hep aynı değerler üzerinde üretiyor, eğer srand(z) z sayısı yazarsak
bu sefer birincisinden farklı aynı değerler üretiyo yani aslında olay bir başlangıç değeri herhangi başlangıç değeri vermezsek
otomatik olarak sistem bir değer veriyor bu değer herhangi bir unsigned deger ve değişmediği için hep aynı kombinasyon içinde değer üretiyor
bu yüzden srand içi hep değişken olmalı ki her zaman farklı çıksın bu yüzden zaman değerini atadık
!!! Hiç srand olmazsa veya sabit bir srand olsa farklı birkaç değer üretir ama tekrar üret dersen yine aynı farklı değerleri verir (Bunları dene gör)
(Yazdıklarım karışık gelebilir ancak kendin bu dediklerimi  denersen anlarsın)
*/