#include <stdio.h>
#include <math.h>

double bhaskra(double val1, double val2, double val3){
    
    double delta, raiz1, raiz2;
    int qtd;
    
    if (val1 != 0) delta  = (val2 * val2) - 4 * val1 * val3;
    
    if (delta < 0){
        qtd = 0;
        
        printf("%d", qtd);
    }
    
    else if (delta == 0)
    {
        qtd = 1;
        printf("%d", qtd);
        
    }
        
    else 
    {
        qtd = 2;
        printf("%d", qtd);
       
    }
    
    return qtd;
    
}


int main(){

    
    double val1, val2, val3;
    
    scanf("%lf %lf %lf", &val1, &val2, &val3);
    
    bhaskra(val1, val2, val3);
    
 return 0;
 
 
}