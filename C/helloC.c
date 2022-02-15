#include <stdio.h>
#include <stdbool.h>
#define My_Constant 10

// 출력하는 main 함수
/* 잘 작동
합니다잉 */
int global_var = 30;

int main(void)
{
    int random_variable = 10;
    char random_character = 'Q';
    float random_float = 2.1E2;
    double random_double_float = 2.1E2;
    bool flag= true;

    printf("%d Hellofffffffffffffffffffffffaaffffffff C!\n", My_Constant, global_var);
    return 0;
}