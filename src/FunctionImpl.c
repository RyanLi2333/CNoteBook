#include <stdio.h>
#include "Function.h" // 头文件相当于直接接入.h的内容.c->.i 
#include <stdlib.h>
#include <math.h>
#define MAX_LEN 20 
#define TRUE 1 
#define FALSE 0

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

// 打印99乘法表 
void prtMultiplyTable() {
    register int i = 1, j = 1; // 行数、列数
    for (; i <= 9; i++) {
        for (j = 1; j <= i; j++) {
            printf("%dx%d=%d ", i, j, i * j);
        }
        printf("\n"); // 每行打印结束换行 
    }
}

int reverse(int x) {
    // 如果x为0直接返回，不用犹豫
    if (x == 0) {
        return 0;
    }

    // 转换成正数处理
    short int isNegative = FALSE; // 默认是正数
    if (x < 0) {
        isNegative = !isNegative; // 是负数
        x = (-x);                 // 变正数
    }

    // 存储每一位数
    char data[MAX_LEN];

    // 循环求取位数和位长
    register short int length = 0; // 位长
    register int tmp_x = x; // 临时变量   
    for (register unsigned long long i = 100000000; i != 0; i /= 10) {
        if (tmp_x / i != 0 || length > 0) {
            length++; // 数位长加一 
            data[length - 1] = tmp_x / i; // 取得最大位的数 
            tmp_x %= i; // 剩余位数
        }
    }

    // 整数反转 
    short int flag = TRUE; // 标志什么时候第一次遇到非0位，TRUE表示处
    long long int ans = 0; // 答案
    for (register short int mi = length - 1; mi >= 0; mi--) {
        if ((data[mi] == 0) && flag) {
            continue;
        } 
        else if (flag) { 
            flag = FALSE; // 标志为真
        }
        // 计算结果
        if (data[mi] == 0) {
            continue;
        } 
        else {
            ans += (int)pow(10, mi) * data[mi];
        }

    }
    
    // 负号恢复
    if (isNegative) {
        ans = (-ans);
    }
    
    return ans;
}