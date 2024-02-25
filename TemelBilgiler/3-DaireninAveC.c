#include <stdio.h>

int main()
{
    //yarıcap ondalıklı bir sayı olabilir bunu int tutamaaz
    float r;
    printf("Lutfen Dairenin yaricapini giriniz: ");
    scanf("%f" , &r);

    //float olduğu için %f dedik, .3 veya .2 virgülden sonra kaç basaamk istiyorsun.

    printf("Dairenin alani: %.3f\nDairenin cevresi: %.2f" , 3.14*r*r , 2*3.14*r );
    return 0;
    // veya double veya float diye iki değişken oluşturup değerleri içine atabilirdik. Ancak ben sonrasında bunu kullanmayacağım için ram işgal etmiyorum.
}