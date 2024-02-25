#include <stdio.h>

typedef int sayi; //Bunu da görmedik duymadık demeyin işte

int main(){

    sayi dizi[5] = {5 , 4, 3 ,2 ,1};
    int dizi2[2] = {1, 2}; // Tabiki int ölmedi kullanabilirsin :)
    int *p = dizi;

    for (int i = 0; i < 4; i++)
        printf("Dizinin %d. elemaninin yani %d deerinin adresi: %u\n" ,i, *(p+i), &(*(p+i)));
    for (int i = 0; i < 2; i++)
        printf("2.Dizinin %d. elemaninin yani %d deerinin adresi: %u\n" ,i , dizi2[i], &dizi2[i]);
    
    // *p+i olsa ne olur? -->
    
    return 0;
}



// --> Kendin bul sebebini