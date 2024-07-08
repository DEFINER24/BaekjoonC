#include <stdio.h>
#include <string.h>

int main(){
    int wordCount, wordLength, wordCheck = 1, groupWordCheck = 1, groupWordCount = 0;
    char word[101];

    scanf("%d", &wordCount);

    for(int i=0; i<wordCount; i++){
        groupWordCheck = 1;

        scanf("%s", word);
        wordLength = strlen(word);

        for(int j=0; j<wordLength-1; j++){
            wordCheck = 1;
            for(int k=j+1; k<wordLength; k++){

                if(word[j] == word[k]){
                    if(wordCheck == 0){
                        groupWordCheck = 0;
                        break;
                    }
                }
                else{
                    wordCheck = 0;
                }

            }

            if(groupWordCheck == 0){
                break;
            }
        }
        if(groupWordCheck == 1){
            groupWordCount++;
        }

    }
    printf("%d", groupWordCount);

    return 0;
}