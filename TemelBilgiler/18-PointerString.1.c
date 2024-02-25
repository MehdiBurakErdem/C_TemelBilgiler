#include <stdio.h>
#include <string.h>

// Fonksiyon int ile çalıştırılmış yani globale int değer atacak
int Benimstrlen(char *A){
    int i =0;

    printf("Dizinin adresi %p \n", A);
    printf("Dizinin ilk adresinde ki karakter '%c' \n" , *A);

    while(*(A+i) != '\0') // Sadece while (A[i]) olur mu?
    {
        i++;
    }
    return i;
}

int main(){
    
    char yazi[] = {"tura"};

    printf("\nDizi: %s \n" , yazi);

    printf("Dizinin buyukluu: %d \n\n" , Benimstrlen(yazi));  // Fonksiyon çalıştığında bir değer gönderecek bu bir int %d yaz.
        
    return 0;
}

