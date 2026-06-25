
/*
Ex.1) 161p참조

#include <stdio.h>  //방법1 : 변수 num 값을 적절히 초기화 하여 첫 번째 반복조건의 검사결과가 참이 되게 함

int main(void){
    int total = 0, num = 1;
    
    while(num != 0){
        printf("정수 입력(0 to quit): ");
        scanf("%d",&num);
        total += num;
    }
    printf("합계 : %d\n",total);
    
    return 0;
}
-------------------------------------------------------------------
#include <stdio.h>  //방법2 : 반복문 전에 값을 한번 받음

int main(void){
    int total = 0, num = 0;
    printf("정수 입력(0 to quit): ");
    scanf("%d",&num);
    total += num;
    
    while(num != 0){
        printf("정수 입력(0 to quit): ");
        scanf("%d",&num);
        total += num;
    }
    printf("합계 : %d\n",total);
    
    return 0;
}

Ex.2) 0~100까지의 짝수의 합(do~while 활용)
#include <stdio.h>

int main(void){
    int sum_result = 0, val = 2;
    
    do
    {
        sum_result += val;
        val += 2;
    }while(val<=100);
    
    printf("0~100까지의 짝수의 합 : %d",sum_result);
    
    return 0;
}

Ex.3) 2단부터 9단까지를 do~while 중첩 활용
#include <stdio.h>

int main(void){
    int cur = 2;
    int is = 1;
    
    do{
        is = 1;
        do{
            printf("%d x %d = %d\n",cur,is,cur*is);
            is++;
        }while(is<=9);
        cur++;
        printf("-------------\n");
    }while(cur <= 9);
    
    return 0;
}
*/
