#include <stdio.h>
int main(){
    int sayi;
    printf("1 - 4 Arasinda sayi giriniz: ");
    scanf("%d" , &sayi);

    // her seferinde if if diyebiliriz ama bir if'e yakalandıktan sonra diğerlerine de girer ve sorgulama yapar, Boş sorgulama
    // ama else if ile birisine takılınca diğerlerine bakmaz
    if (sayi == 1)
    {
        printf("Girilen sayi 1'dir...");
    }
    else if (sayi == 2)
    {
        printf("Girilen sayi 2'dir...");
    }
    // if else den switch geçtim
    else{
        switch (sayi)
        {
        case 3:
            printf("Girilen sayi 3'dur...");
            break;
        
        case 4:
            printf("Girilen sayi 4'dur...");
            break;

        default:
            printf("1 ile 4 arasinda sayi girmediniz sanki!\n");
            main();
        }
    }
    return 0;
}