#ifndef FUNCTION_H 
#define FUNCTION_H 

/*函数声明(接口)*/
/*
结构体定义->.h->需要被多个.c文件使用时，必须公开定义
枚举类型->.h->同结构体，需要共享
函数定义(实现)->.c->实现细节应隐藏，防止重复定义
函数声明(原型)->.h->其他文件调用该函数时需要知道原型
全局变量定义->.c->用extern在.h中声明，避免重复定义

*/

int addi(int, int); // 两数之和 
void swap(int*, int*); // 变量值互换 
void getBasicDataMemory(); // 查询基本数据类型的系统内存占用 


#endif 