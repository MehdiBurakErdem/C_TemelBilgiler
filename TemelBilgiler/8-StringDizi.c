#include <stdio.h>
#include <string.h> //strcpy_s

int main(){
    char arr[16];  // veya direk burada da = "Hello World" yapabiliriz ama !!! dikkat arr[5] yaparsan olmaz çünkü 5 baytten fazla "Hello World" kaç bayt?
    // '\0' Saydın mı

    //arr = "Hello World"   yanlıs alttaki gibi yapabilirsin veya direk üstte tanımla

    strcpy_s(arr , sizeof(arr), "Hello World");
    //Nasıl oluyorda Hello World hepsini yazıyor? bilgisayar bunu sitring olarak mı depoluyor?
    printf("%s" , arr);
    return 0;
}