#include<stdio.h>

int main(){
    
    int tamColunasA, tamLinhasA;
    scanf("%d %d", &tamLinhasA, &tamColunasA);
    
    int matrizA[tamLinhasA][tamColunasA];
    
    for(int i = 0; i < tamLinhasA; i++){
        for(int j = 0; j < tamColunasA; j++){
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    int tamColunasB, tamLinhasB;
    scanf("%d %d", &tamLinhasB, &tamColunasB);
    
    int matrizB[tamLinhasB][tamColunasB];
    
    for(int i = 0; i < tamLinhasB; i++){
        for(int j = 0; j < tamColunasB; j++){
            scanf("%d", &matrizB[i][j]);
        }
    }
    
    
    int matrizC[tamLinhasA][tamColunasB];
    
    
    if(tamColunasA != tamLinhasB){
        
        printf("N\n");
    }
    
    else{
        
         for(int i = 0; i < tamLinhasA; i++){
            for(int j = 0; j < tamColunasB; j++){
                
                 matrizC[i][j] = 0;
                
                for(int k = 0; k < tamColunasA; k++){
                    
                    matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
                }
                
                printf("%d", matrizC[i][j]);
                if(j < tamColunasB - 1){
                    printf(" ");
                }
                
            }
            printf("\n");
            
        }
    } 
    
   
        
        


return 0;
    
}