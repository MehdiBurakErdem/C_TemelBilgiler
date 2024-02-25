#include <stdio.h>
#include <string.h>

int main(){

    // a(append) ile birşeyler ekleyeceğiz eğer w yaparsak içinde ki siliyordu ve yeni bir tane açıp devam ediyodu
    FILE *pdosya = fopen("C:\\Users\\mehdi\\OneDrive\\Desktop\\C\\VeriTabani\\CileOlusturuldu.text", "a");

    char ekle[256];
    int kolaylik;

    if (pdosya == NULL)
    {
        printf("Dosya olusturulamadi!!!");
    }
    else{
        printf("Dosyaya ne yazmak istiyorsunuz: ");
        fgets(ekle,256,stdin);
        // scanf("%s" , ekle); alabilirdik fakart boslukları saymıyor biliyorsun. Bu yüzden 
        
        printf("C dili 100 uzerinden kolayligi nedir: ");
        scanf("%d", &kolaylik);
        
        fputs(ekle,pdosya);
        fputs("I do love C programming\n",pdosya);
        
        //fputs olurda emsali olmaz mı :)
        fprintf(pdosya,"Because that laungage is easy 100\\%d", kolaylik);

        printf("Dosyaya yazi aktarildi");
    }

    fclose(pdosya);
    return 0;
}