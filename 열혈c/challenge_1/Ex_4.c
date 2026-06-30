// Ex_4.c
// 3500 => 500*x + 700*y + 400*z 
// 1900 => 500*x + 700*y + 400*z 
#include <stdio.h>

int main()
{
    int x,y,z;
    int tot = 3500;
    
    for (x = 0; x <= tot/500; x++){
        for (y = 0; y <= tot/700; y++){
            for (z = 0; z <=  tot/400; z++){
                if((500*x + 700*y + 400*z == tot)&&(x*y*z != 0)){
                    printf("크림빵 %d개, 새우깡 %d개, 콜 라  %d개\n", x, y, z);
                }
            }
        }
    }
    
    return 0;
}
