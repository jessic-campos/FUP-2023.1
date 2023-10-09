#include<stdio.h>

int contador(){
    
    char palavra;
    int i;
    
    for(i = 0; i != '\n'; i++){
        
        scanf("%c", &palavra);
        
    }
    
    return i;
}

int main(){
    
    int i = contador();
    
    printf("%d", i);
    
}