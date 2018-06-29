//
//  main.cpp
//  text621
//
//  Created by 米正龙 on 2018/6/21.
//  Copyright © 2018年 米正龙. All rights reserved.
//
/*#include <iostream>
using namespace std;
int main
(
int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
 }
 #include<stdio.h>
int main()
{
 printf("Hello word\n");
    return 0;
}*/
#include <stdio.h>
int main()
{
    int v[100];//开一个足够大的数组。
    int i = 0, j;
    FILE *fp;//文件指针
    fp = fopen("student.csv", "r");//以文本方式打开文件。
    if(fp == NULL) //打开文件出错。
        return -1;
    while(fscanf(fp, "%d", &v[i]) != EOF) //读取数据到数组，直到文件结尾(返回EOF)
        i++;
    fclose(fp);//关闭文件
    for(j = 0; j < i; j ++)//循环输出数组元素。
    {
        printf("%d ", v[j]);
    }
    return 0;
}
