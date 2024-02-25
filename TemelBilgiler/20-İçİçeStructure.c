#include <stdio.h>
#include <string.h>

struct notlar
{
    int vize;
    int final;
};


struct OgrenciB
{
    char isim[15];
    int okul_numarasi;
    struct notlar not;
    
};


int main()
{
    struct OgrenciB orenci1;
    orenci1.okul_numarasi = 477;
    
    // integar da sorun yok ama string bir ifade eklerken char arrayine direk olarak string bir değer ekleyemediğimizden dolayı <string.h> kütüphanesinden strcpy fonksiyonunu kullancağız                      
    strcpy(orenci1.isim ,"Mehdi Burak");

    // İçerdeki struct erişiyoruz
    orenci1.not.vize = 85;
    orenci1.not.final = 92;

    // Kolaydı bence aynı mantık
    printf("1.Ogrenci: %s \nOkul Numarasi: %d\nVize Notu: %d \nFinal Notu: %d", orenci1.isim,orenci1.okul_numarasi,orenci1.not.vize,orenci1.not.final);
    
    return 0;
}