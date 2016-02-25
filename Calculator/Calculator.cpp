#include<string>
#include<queue>
#include<iostream>
#include<stdlib.h>
#include"Calculator.h"
using namespace std;

//读取字符串，如果是数字则保存在一个临时字符串中，知道遇到运算符，则把临时字符串入队，
//将字符串重新设置为运算符，然后直接入队即可。
bool Scan::ToStringQueue(string input){
    string str="";//字符串初始化
    int num=0; //用于计算数字的个数（不包含小数点）
    bool isDigit=false;

    for(size_t i=0;i!=input.size();++i){
        if(isdigit(input[i])||input[i]=='.'){
            isDigit=true;   //是数字设置为true
            str=str+input[i];
            if(input[i]!='.')  num++;
            if(num==11) {
                return false;
            }
            if(i==input.size()-1)   ScanQueue.push(str);   //最后的直接入队
        }
        else{
            if(isDigit){     //数字入队列
                   ScanQueue.push(str);
                   isDigit=false;
            }
            str=input[i];    //运算符保存
            ScanQueue.push(str);  //运算符入队
            str.clear();  //字符串清空
        }
    }
    return true;   //返回队列
}

void Print::PrintScanStr(queue<string> ScanQueue){
    while(!ScanQueue.empty()){   //遍历输出队列，队列同时清空
        cout<<ScanQueue.front()<<endl;
        ScanQueue.pop();
    }
}

