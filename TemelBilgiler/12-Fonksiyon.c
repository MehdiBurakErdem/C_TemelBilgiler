#include <stdio.h>

// Başta ki void anlamı bu fonksiyon çalıştığında globale herhangi bir değer döndürmeyecek anlamına gelir
void kare_alani(int a){
    printf("Kenar uzunluu %d olan karenin alani= %d" , a, a*a);
} 
int main(){
    int kenar;
    printf("Alanini hesaplamak isetdiiniz karenin kenar uzunluunu giriniz: ");
    scanf("%d" , &kenar);
    kare_alani(kenar);  

    return 0;
}


/*  prototip nedir?


int main(){
    int kenar;
    printf("Alanini hesaplamak isetdiiniz karenin kenar uzunluunu giriniz: ");
    scanf("%d" , &kenar);
    kare_alani(kenar);  

    return 0;
}

void kare_alani(int a){
    printf("Kenar uzunluu %d olan karenin alani= %d" , a, a*a);
} 
 
Böyle olursa hata verir çünkü kare_alani fonksiyonu altta bu yüzden prototip uygulayıp "  void kare_alani(a)  " Bu ifadeyi en başta yazarsan da olur 
*/