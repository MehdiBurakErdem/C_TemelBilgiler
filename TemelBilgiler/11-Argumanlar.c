#include <stdio.h>

// İlerde göreceksiniz fonksyon tanımlarında fonksiyon isminden sonra bazen parantez içinde char int gibi veri tipleri bu veri tipleri ile oluştumak istediğimiz değişken ismi yer alır
// Bu bizim fonksiyon çalıştırıldığında girdi olarak alınıp sonrasında işleyeceğimiz verilerdir
// Main de bu şekilde girdi alabilir bu girdiği ne zaman alacak program calışırken, yani derlerken bir dosya oluşur (a.exe veya a.out) ve biz bu dosyayı çalıştırırız.
// Yani mainde ki girdi program çalışırken alınan değerlerdir, ancak fonksiyonlarda ki girdiler program çalıştıktan sonra alınan değerlerdir unutma.
int main(int argc, char *argv[]) // (argc) argüman count   (argv) argüman vector
{
    if (argc >= 1)
    {
        printf("Derlenmis dosya ismi: %s\n", argv[0]);
        // örnek oluşan dosya a.exe olsun çalıştırıken;
        // a.exe mehdi burak "e okul" girerseniz argc = 4 ve argc[[a(a.exe)_adresi],[m(mehdi)_adresi],[b(burak)_adresi],[e(e okul)_adresi]]
    }

    return 0;
}