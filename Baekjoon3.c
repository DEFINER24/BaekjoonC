#include <stdio.h>
#include <string.h>

int main(){
    char Input[101];
    int M = 1;

    scanf("%s", Input);
    
    int N = strlen(Input)/2, K = strlen(Input) - 1;

    for(int i=0; i<N; i++){
        if(Input[i] != Input[K-i]){
            M = 0;
        }
    }
    printf("%d", M);
    return 0;
}