#include "library.h"

char LtoU_UtoL(const char Y)//大小写转化
{
    return Y-32>=65?Y-32:Y+32;
}

vector<char> BaseFunction_AllVariable (string Y) //搜集函数所有的变量
{
    int len=Y.length();
    vector<char> decord;
    //遍历整个函数
    for(int i=0;i<len;i++)
    {
        switch(bool(isalpha(Y[i])))//判断是否为逻辑变量
        {
            case true://真为字母判断是否是已经遍历过的字母
                 if(find(decord.begin(),decord.end(),Y[i])!=decord.end()) break;
                 else {
                       decord.push_back(Y[i]);
                       decord.push_back(LtoU_UtoL(Y[i]));
                        break;
                      }
            case false: 
                 break;
        }
    }
    sort(decord.begin(),decord.end());
    transform(decord.begin(),decord.end(),decord.begin(),::tolower);
    return decord;
}

void SortStr(string &Y)//对函数各个段进行排序（参数为引用）
{
    int i=0;
    int START,END;
    START=i;
    while(Y[i])
    {
        if(Y[i]=='+')
        {
            END=i;
            sort(&Y[START],&Y[END]);
            START=i+1;
        }
        i++;
    }
    END=i;
    sort(&Y[START],&Y[END]);
}