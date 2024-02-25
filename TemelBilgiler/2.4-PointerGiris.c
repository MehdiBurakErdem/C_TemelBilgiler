#include <stdio.h>

int main(){
    int a = 5;  // Bu ram üzerinde bir yere yazıldı 
    int *p;  // İleri düzey : Genel de böyle pointere ayrı olarak tanımlarsan heryere erişebilir bunu önlemek için *p = NULL diyebiliriz. Daha sağlıklı olur   
    p = &a; // Pointer a'nın adresini alır bu şekilde

    printf("%p  \n" , p);   //%p veya %u ile pointerlarin değerini yazdırabilirsin (Yani bir adres)

    //* ise içinde tuttuğu adresteki elemana götürüyo seni 
    printf("%d" ,*p );

    return 0;
}
/* Pointerlar  Anlamayan kalmasın !!! 

Eğer int p dersen; p; içinde bir integar tutar;
Eğer char p dersen; p; içinde bir char tutar;

Ancak sen böyle bir değerler değilde bir adres tutmak istiyorsan * ile tanımlayacaksın peki ne yıldız int *p veya char *p
olur mu olur, ne farkediyordan önce ne farketmiyor :) İkiside bir adres tutar neyin adresi 
int *p; öyle bir adres var ki içinde integar var
char *p; öyle bir adres var ki içinde char var

Pointerlar yani p veya o veya z yani * ile tanımlanmış bir veri türü olan pointer içinde bir adres tutar 
ve p o z yazarsak değerini yani adresi yazar *p *o *z dersek tuttuğu adreste ki değeri yazar
*/