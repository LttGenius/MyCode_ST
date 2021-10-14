#ifndef _library_h_
#define _library_h_
#include <iostream>
#include <string>
#include <cstring>
#include <ctype.h>
#include <vector>
#include <algorithm>
using namespace std;

//创建卡洛图稀疏矩阵单元格结构体
struct matrix{
    bool carlo;
    matrix* right;
    matrix* under;
};

#endif