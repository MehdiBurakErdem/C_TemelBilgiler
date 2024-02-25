#include <stdio.h>

int main(){
    //Iki boyutlu bir matris yapmak istedim
    int matris[3][3];

    //Matris alma
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {          
            scanf("%d" , &matris[i][j]);
        }
    }
    
    // Matrisi yazma
    printf("\nHemen Yaziyorum okey \n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n" , matris[i][j]);
        }
    }
    return 0;
}