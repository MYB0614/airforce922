// x,y 좌표를 입력 받아서 직사각형 넓이를 구하기
#include <stdio.h>

    int main(void){ 
        int left_h_x,left_h_y,right_b_x, right_b_y;
        int result;
        
        printf("좌 상단 x y 좌표입력 : ");
        scanf("%d %d",&left_h_x,&left_h_y);
        printf("우 하단 x y 좌표입력 : ");
        scanf("%d %d",&right_b_x,&right_b_y);
        result = (right_b_x-left_h_x)*(right_b_y-left_h_y);
        printf("두 점이 이루는 직사각형의 넓이는 %d입니다.",result);
        return 0;
        
        
    }
