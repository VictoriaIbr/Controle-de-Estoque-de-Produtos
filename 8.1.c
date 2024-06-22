#include <stdio.h>
#define tam_linha 3
#define tam_colun 4
int main()
{
    int m1[tam_linha][tam_colun], m2[tam_linha][tam_colun];
    int numLinha, numColuna;
    int i,j;
    
    FILE *arq;
    arq = fopen("banc.txt","r");
    
    fscanf(arq,"%d %d", &numLinha, &numColuna);
    
    for(i = 0; i < numLinha; i++){
        for(j = 0; j < numColuna; j++){
            fscanf(arq, "%d", &m1[i][j]);
        }
    }
    fclose(arq);
   printf("Cod  Qnt Prç Total\n------------------\n");
   for(i = 0; i < numLinha; i++){
        for(j = 0; j < numColuna; j++){
            int calc = m1[i][1]*m1[i][2];
            m1[i][numColuna - 1] = calc;
            printf("%d  ", m1[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}