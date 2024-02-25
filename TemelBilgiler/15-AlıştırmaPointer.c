#include <stdio.h>

int main(){

    int a = 5;
    int *p = &a;
    printf("A sayisi %d \n" , a);
    printf("Adresi ise %p \n", p);
    // p yerine başka ne yapabilirim a'nın adresini yazdırmak için
    printf("Pointer ile sayiya ulasma %d \n\n" , *p);

    *p = 5664;
    printf("Yeni deeri a nin %d \n" , a);
    printf("Konumu %p \n" , p);
    


    printf("---------------------------------------\n");
    int dizi[4] ={8 , 5, 1, 4};
    // Pointerımız bir int değer tutan bir dizinin ilk elemanının adresini tutuyor
    int *dp = dizi;

    printf("Dizinin adresi: %u  \n", dizi);   // Aslında ilk elemanının adresi
    printf("Diziyi tutan pointer deeri: %u \n", dp);

    // Dizinin tüm elemanlarını yazmak için döngü kullanmalısınız evet stringlerde  char yazi[] = {"tura"}; printf("Dizi: %s" , yazi); 
    // %s ile yazdırıyoruz ama bunda yok çünkü char dizilerinin son elemanına '/0' eklediği için bunun bir char olmadığını biliyor ve oraya kadar yazıyor
    // ama sayı dizilerinde böyle bir durum yok çünkü onlar bir char değil integar .   

    printf("Dizinin 1. elemani: %d \n", *dp);
    printf("Dizinin 2. elemani: %d \n", *(dp+1)); //Burada aslında adres değerine 1 değil 4 artırıyor bilginize neden herşeyi hazır bekleme yazılımcı araştır:) (u ile adrresleri yazdır bak)
    printf("Dizinin 3. elemani: %d \n", dizi[2]);
    printf("Dizinin 4. elemani: %d \n", dp[3]); // Hohhooo pointerı bir dizi gibi mi kullandın :)) dp[3] aslında *(dp + 3)
    return 0;
}