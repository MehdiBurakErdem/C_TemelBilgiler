#include <stdio.h>

int main(){
    int x;
    int i;

    x  = 1;  //0001
    // ikilik sisteme göre 1 basamak < yöne götürmek için x << 1 deriz. Bit işlemlerinde & ve | operötörleride var mesela (x|3) = (0001) | (0011)
    for (i = 0; i < 5; i++)
    {
        printf("i deeri %d iken sayi= %d\n" , i , x);
        x = x << 1;  // $x (0001) sola doğru bir bit kaydır
    }

    return 0;
}