#include <stdio.h>
#include <string.h>

int main(){
    char cAlppabet[101];
    scanf("%s", cAlppabet);

    int length = strlen(cAlppabet), wordCount = length;

    for(int i=0; i<length; i++){
        if(cAlppabet[i] == '=' || cAlppabet[i] == '-'){
            wordCount--;
        }
        else if(cAlppabet[i] == 'n' || cAlppabet[i] == 'l'){
            if(cAlppabet[i+1] == 'j'){
                wordCount--;
            }
        }
        else if(cAlppabet[i] == 'd'){
            if(cAlppabet[i+1] == 'z' && cAlppabet[i+2] == '='){
                wordCount--;
            }
        }

    }    
    printf("%d", wordCount);
    
    return 0;
}

/*크로아티아 알파벳	변경
č	c=
ć	c-
dž	dz=
đ	d-
lj	lj
nj	nj
š	s=
ž	z=
*/
