// Ex.2) 정수 2개 입력받아 구구단 출력 (단, 3,5를 받든 5,3을 받든 동일하게 출력돼야함)


#include <stdio.h>
void func_1(int fir_num, int end_num){
    int a;
    
    if(fir_num > end_num){  
        a = end_num;
        end_num = fir_num;
        fir_num = a;
    }
    
    for (; fir_num < end_num +1 ; fir_num ++){
        for (int i = 1 ; i < 10; i++){
            printf("%d x %d = %d\n",fir_num, i , fir_num * i);
        }
    }
}

int main(void){
    int a,b;
    
    printf("몇단부터 몇단까지 출력?");
    scanf("%d %d",&a,&b);
    func_1(a,b);
    
    return 0;
}

