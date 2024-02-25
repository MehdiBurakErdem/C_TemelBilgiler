#include <stdio.h>

// Struct da bir veri tipi dersek çok da yanılmamış oluruz dizi gibi düşünebiriz eeeee neden structure var o zaman diziyle işimizi görelim
// Herşeyin bir sebebi vardır dostum: Dizilerde aynı tip veri tiplerini yazabilirsin ama structure birkaç veri tiplerini birlikte tutabilir char int bak asa
// Son olarak tanımda farklılık var structure insanlar 1.insan şeklinde yapıyoruz neden insanlar diye birşey tanımlıyruz çünkü bu bir structure bunun gibi birkaç tane olsa nasıl erişeceğiz

struct Student{
    char isim[15];
    char soyisim[15];
    int okul_numarasi;
    int ortalamasi;

} Orenci2;
// Yapıyı oluşturuduk nesneyi yukarıda da oluşturabiliriz aşağıda da ama Orenci2'nin içini doldurmadan oluşmaz sadece kullanacam dersin

int main(){
    // İki türlü de oluşturuyoruz nesneleri
    struct Student Orenci1 = {"Mehdi Burak", "Erdem", 477, 65};

    // Sanki yukarıda ki tanım daha güzeldi :) 
    Orenci2 = (struct Student){"Ebrar", "Demir", 685, 72};

    //Yazdırma vakti nesneismi.
    printf("1.Ogrenci: %s %s \nOkul Numarasi: %d \nOrtalamasi: %d", Orenci1.isim,Orenci1.soyisim,Orenci1.okul_numarasi,Orenci1.ortalamasi);
    printf("\n***************************\n");
    printf("2. Ogrenci: %s %s \nOkul Numarasi: %d \nOrtalamasi: %d ", Orenci2.isim,Orenci2.soyisim,Orenci2.okul_numarasi,Orenci2.ortalamasi);

    return 0;
}