#include <Windows.h> 
#include <stdio.h>
#define NEW_LINE '\n' //将NEW_LINE定义为字符\n 宏定义单元只能在本.c作用域内生效
// extern int addi(int, int); // extern关键字使用外部.c文件的函数或变量(声明)(尽量不要extern函数，函数调用靠include)
// extern void getBasicDataMemory(); // 声明基本数据类型内存占用函数
#include "Function.h" // 相比起extern，使用函数更推荐直接include头文件
#include "LinkList.h" // 使用单链表头文件

/*主函数入口*/

int main() {
    // // 查看基本数据类型的内存占用
    // getBasicDataMemory();

    // // 打印99乘法表 
    // prtMultiplyTable();
    
    int x = 0;
    printf("请输入一个数：");
    scanf("%d", &x); 

    printf("%d\n\n", reverse(x));

    // 程序结束 
    system("pause");
    return 0; 
}
