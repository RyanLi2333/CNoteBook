#include <stdio.h>
#include "Function.h" // 头文件相当于直接接入.h的内容.c->.i

/*函数的实现*/

// 两数之和
int addi(int x, int y) {
    return x + y; 
}

// 两数互换 
void swap(int* x, int* y) {
    int* tmp = x; 
    x = y; 
    y = tmp; 
}

// 基本数据类型内存查询 
void getBasicDataMemory() {
    // 浮点数，默认值0.0
    printf("浮点数内存占用\n");
    printf("longdouble: %d\n", sizeof(long double)); // 16
    printf("double: %d\n", sizeof(double)); // 8 
    printf("float: %d\n\n", sizeof(float)); // 4 

    // 整型，默认值0
    printf("整型数内存占用\n"); 
    printf("size_t: %d\n", sizeof(size_t)); // 64位8；32位4
    printf("long long: %d\n", sizeof(long long)); // 8
    printf("long int: %d\n", sizeof(long int)); // 4
    printf("int: %d\n", sizeof(int)); // 4 
    printf("short int: %d\n\n", sizeof(short int)); // 2,short只能修饰int，也可以省略int单独用short表示

    // 字符型，默认值'\0'
    printf("字符变量内存占用\n"); 
    printf("char: %d\n\n", sizeof(char)); // 1  

    // 指针类型，默认值NULL
    printf("指针变量内存占用\n");
    printf("void*: %d\n\n", sizeof(void*)); // 8 
}
