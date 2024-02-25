#include <stdio.h>

struct Student{
    char isim[15];
    int numarasi;
    int ortalamasi;

};

//ÖNCE AŞAGI BAK
void YAZZ(struct Student *t){

    printf("*-*Pointer ile ulastim deger_3 Fonksiyondan = %d\n+++++++++\n" ,  t->ortalamasi);

    printf("Adres1.: %p\n", &t->isim);
    printf("Adres2.: %p\n", &t->numarasi);
    printf("Adres3.: %p", &t->ortalamasi);
}


int main(){

    struct Student Orenci ;

    printf("Ogrenci Bilgilerini isim numara ve ortalami seklinde giriniz: \n");
    printf("Lutfen Ogrencinin bilgilerini giriniz: ");

    scanf("%s %d %d", Orenci.isim, &Orenci.numarasi, &Orenci.ortalamasi);
    printf("Ogrencinin bilgileri = %s %d %d\n", Orenci.isim, Orenci.numarasi, Orenci.ortalamasi);

    //nasıl bir int a = 10 adresini bir pointera atamak istedğimizde int *p oluşturuyorsak, bir structure adresini atarkende struct *p oluşturmalıyız.
    struct Student *tut = &Orenci;

    // structda ki elemanlara "." veya "->" ile erişebilirsin. Neden *tut.isim yok çünkü tut bir adres tutuyor bu adresin.isim diye birşeyi yok .isim structda var
    printf("Pointer ile ulastim deger_1 = %s\n" ,  tut->isim);
    printf("Pointer ile ulastim deger_2 = %d\n" ,  tut->numarasi);
    // 3. elemanı fonksiyondan aldım adresi yollayarak 

    YAZZ(&Orenci);
    return (0);
}