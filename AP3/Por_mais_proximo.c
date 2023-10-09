#include<stdio.h>
#include<math.h>

int potencia(int ponto, int expoente){
    
    int pot = 1;
    
    for(int i = 1; i <= expoente; i++){
        
        pot = ponto * ponto;
    }
    
    return pot;
}


int main(){
    
    int pontoX1, pontoY1;
    scanf("%d %d", &pontoX1, &pontoY1);
    
    int pontoX2, pontoY2;
    scanf("%d %d", &pontoX2, &pontoY2);
    
    int pontoX = pontoX2 - pontoX1;
    int pontoY = pontoY2 - pontoY1;
    
    int distancia = sqrt(potencia(pontoX, 2) + potencia(pontoY,2));
    
    
    
    
}