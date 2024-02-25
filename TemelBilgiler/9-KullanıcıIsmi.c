#include <stdio.h>
#include <string.h> //gets ve strlen

int main(){
    char isim[80]; 
    printf("Isminizi giriniz: ");
    
    gets(isim);  // scanf boşlukları saymaz ve bosluga adar okur ikinci scanf ikinci bosluktan sonraki yazıyı sonraki boşluğa kadar falan ama gets \n görene kadar okur.     
    // C11 standardı ile birlikte tamamen kaldırılmıştır (gets)              
    // fgets daha güvenli neden? Gets alır da alır isim[80] bakmaz 100 girse alır ama nereye alacak işte overflow bu yüzden fgets daha güvenli 
    printf("Yazdiiniz stringin uzunluu: %d\n", strlen(isim));
    printf("Isminiz:  %s" , isim);
    return 0;
}