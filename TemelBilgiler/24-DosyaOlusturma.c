#include <stdio.h>

int main(){
    // Bu sekilde dosyaya fopen "w" ile yeni dosya yoksa yazar ,"r" verileri okumak için eğer yoksa NULL olur.
    // Bu yazdığımız "w" ve "r" Modlardır(Amacını belirtir) mesela "a" varolan dosyayı değiştirmeden içine birşey yazıyo ama w ile yaparsan komple içini siler ve yeni şeyler yazar 
    // Yani varolan bir dosyanın içine birşey eklecesen "a" ile yaz ki eski şeyler silinmesin.
    // Bunlara ek olarak plusları var mesela r+ okumak ve yazmak için olduğunuz belirtirsin w+ da aynı, a+ okumak ve eklemek amacını belirtir. (Plussuz daha güzel hayat)
    FILE *Pfile = fopen("CileOlusturuldu.text", "w");

    if (Pfile == NULL)
    {
        printf("Dosya olusturalamadi!");
    }
    else{
        printf("Dosya olusturuludu H.O. (ama nereye:)");
    }

    // Dosyayı kapat ki yer kaplamasın ram da 
    fclose(Pfile);
    return 0;
}