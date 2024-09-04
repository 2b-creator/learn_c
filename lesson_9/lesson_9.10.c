#include <stdio.h>

void say_hello(char *name);
void call_function(void (*func)(char *), char *name);

// 一个普通的函数
void say_hello(char *name)
{
    printf("Hello! ");
    printf("%s\n", name);
}

// 接受函数指针作为参数的函数
void call_function(void (*func)(char *), char *name)
{
    func(name);
}

int main()
{
    // 将函数say_hello的地址传递给call_function
    call_function(say_hello, "John");
    return 0;
}