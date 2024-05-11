#include <stdio.h>

int main(){
    char pNum[16]; //입력받을 전화번호(알파벳 형식)
    int i = 0, time = 0; //반복자, 걸리는 시간 정의
    scanf("%s", pNum); //전화번호(알파벳) 입력받기
    while(pNum[i] != 0){
        if((int)pNum[i]<'P'){
            time += ((int)pNum[i]-65)/3+3; //A~O까지 3초씩 걸림
        }
        else if((int)pNum[i]<'T'){
            time += 8; //P~S까지 8초 걸림
        }
        else if((int)pNum[i]<'W'){
            time += 9; //T~V까지 9초 걸림
        }
        else{
            time += 10; //W~Z까지 10초 걸림
        }
        i++; //다음 알파벳으로 넘어가기
    }
    printf("%d", time); //결과 출력
    return 0;
}