#include <stdio.h>
#include <string.h>

int main(){

    //Dosya yolu ekliyirim C:\Users\90552\Desktop... bir tane \ sonraki elemanı es geç diye anlar excape unutma bu yuzden bi dene daha
    FILE *pdosya = fopen("C:\\Users\\mehdi\\OneDrive\\Desktop\\C\\VeriTabani\\CileOlusturuldu.text", "w");
    
    //İçine yazdıracağımız yazıyı oluşturuyoruz
    char yazi[25] = ("MEHDI BURAK ERDEM ");
    int boyut = strlen(yazi);

    if (pdosya == NULL)
    {
        printf("Dosya olusturulamadi!!!");
    }
    //fputc veya putc ile dosyanın içine yazı yazdırıyoruz bir char ve dosyanın yerini girerek fputs direk string olarak ekler diğer sayfada
    else{
        for (int i = 0; i < boyut; i++) //veya hiç boyut bulmayıp yazi[i] var olduğu sürece de diyebilirdik değil mi
        {
            fputc(yazi[i],pdosya);
            printf("%c" , yazi[i]);
        }
        fputc('\n',pdosya);
        printf("Dosyaya yazi aktarildi");
    }


    fclose(pdosya);
    return 0;
}