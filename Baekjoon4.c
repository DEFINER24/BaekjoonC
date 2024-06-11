#include <stdio.h>
#include <string.h>

int main(){
    char input[1000001];
    scanf("%s", input);
    
    int temp[26] = {0,}, length = strlen(input), max, maxindex = 0, same = 0;
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < length; j++){
            if((input[j] == 'a' + i) || (input[j] == 'A' + i)){
                temp[i]++;
            }
        }
    }
    max = temp[0];
    for(int i=1; i<26; i++){
        if(max<temp[i]){
            maxindex = i;
            max = temp[i];
            same = 0;
        }
        else if(max == temp[i]){
            same = 1;
        }
    }

    if(same == 1) printf("?");
    else printf("%c", maxindex + 'A');

    return 0;
}
