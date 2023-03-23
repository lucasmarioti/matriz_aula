
#include <stdio.h>

int main()
{
       
        int matrix [4][4]; 
        int i, j, cont;
        float somapar, somaimpar;
        float media;
        somaimpar = 0; 
        somapar = 0;
        cont = 0;
        
        printf("\ndigite valor para os elementos da matrix\n");
        
        for(i= 0; i < 4; i++){
        for(j= 0; j < 4; j++){
            printf("elemento[%d][%d]:=", i, j);
            scanf("%d", &matrix[i][j]);
             }
        }
        
        for(i= 0; i < 4; i++){
        for(j= 0; j < 4; j++){
            if(j % 2 == 0){
                somapar = somapar + matrix[i][j];
                cont = cont +1;
            }
            else{
                somaimpar = somaimpar + matrix[i][j];
            }
        }
        }
        
        media = somaimpar/cont;
        
        printf("\n soma das colunas impares é %f", somaimpar);
        printf("\n soma das colunas pares é %f", somapar);
        printf("\n a media aritimetica é %f", media);
        
        
       
        
        
                
            
           
            
        
                
        
       
           
           
           
           
        

    return 0;
}
