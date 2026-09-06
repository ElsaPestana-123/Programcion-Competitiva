/*
#include "adivina.h"

void solve(){
    int izq = 1;
    int der= 1000000000;
    
    while(izq <= der){
       int mid = izq + (der - izq) / 2;
       int valor = guess(mid);
       
       if(valor == 3){
           return;
       } 
       
       if(valor == 1){
           izq = mid +1;
       }
       
       if(valor == 2){
           der = mid -1;
       }
        
    }
    
}
*/