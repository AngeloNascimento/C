#include <stdio.h>
int main(){
//MATRIZES
    int mat[3][3] = {{1, 2, 3},
                     {4, 5, 6},        
                     {7, 8, 9}};
    int i, j;//i = linha, j = coluna   
    for (i = 0; i < 3; i++){//linha
        for ( j = 0; j < 3; j++){//coluna
            printf("%d ", mat[i][j]);
        }
        printf("\n");        
    }

}