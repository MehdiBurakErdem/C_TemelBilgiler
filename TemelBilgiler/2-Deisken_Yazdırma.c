#include <stdio.h>

int main()
{
    int A;
    int B;
    printf("A= ");
    //ampersant (&) ile A nın adresine değeri almasını sağlıyoruz.
    scanf("%d", &A);

    printf("B= ");
    scanf("%d", &B);

    //Önce B sonra A yaz
    // %d ile bir değişken olduğunu söylüyoruz d(decimal) dir. Bunlara da göz atabilirsiniz %.... i, f, ,c ,s ,lu, p, 
    printf("A= %d\nB= %d", B ,A);
    return 0;
}