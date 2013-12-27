#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*尝试得到变量的地址，然后再用变量的地址将
      变量输出，但是语句中不能显示地使用指针*/
    int first = 100;
    int add = &first;
    char second = 'a';
    char addsec = &second;
    printf("%d\n",add);/* 这种方法在字符串中可以使用，
                        但是在整型数据中不可用*/
    printf("%d\n",&second);
    printf("%c\n",addsec);//表明在字符中也是不可以的
    return 0;
}
