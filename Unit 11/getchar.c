#include <stdio.h>

int main()
{
    int c1 = getchar();    // 문자 하나를 입력받음 
                           // ASCII 코드 256개와 EOF(-1)를 처리할 수 있도록 int형 변수에 저장

    printf("%c\n", c1);

    return 0;
}
