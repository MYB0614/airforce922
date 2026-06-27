// ex.1) 입력 받은 정수 값의 부호를 바꿔서 출력하는 프로그램을 작성
#include <stdio.h>

int main(void){
    int num1;
    printf("부호를 바꿀 정수 입력 : \n");
    scanf("%d",&num1);
    num1 = ~num1;
    num1 += 1;
    printf("값 : %d",num1);
    return 0;
    
}
