#include <stdio.h>

int main(){
    
    int A, B, C, digit = 8, number[13], output[10] = {0, };
    long int i = 100000000, D; //10^8

    scanf("%d %d %d", &A, &B, &C);
    D = A*B*C;
    while((D / i) == 0){
        i /= 10;
        digit --;
    }
    for(int j=0; j<digit+1; j++){
        
        number[j] = D / (i);
        D = D - (number[j]*(i));
        i /= 10;

    }
    for(int i=0; i<10; i++){
        for(int j=0; j<digit+1; j++){
            if(number[j]==i){
                output[i] ++;
            }
        }
    }
    for(int i=0; i<10; i++){
        printf("%d\n", output[i]);
    }

    return 0;
}