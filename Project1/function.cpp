#include <library.h>
#include "sonfunction.cpp"

string BaseFunction(const vector<char> All,string X)//转化为基础函数
{
    string Y=X;
    transform(Y.begin(),Y.end(),Y.begin(),::tolower);//全部转化为小写
    SortStr(Y);//分段排序
    
}

void carlo(string Y)//转化为卡罗图数据
{
    for(int i=0;Y[i]!='\0';i++)
    {
        
    }
}