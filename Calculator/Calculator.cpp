#include<string>
#include<queue>
#include<iostream>
#include<stdlib.h>
#include"Calculator.h"
using namespace std;

//��ȡ�ַ���������������򱣴���һ����ʱ�ַ����У�֪������������������ʱ�ַ�����ӣ�
//���ַ�����������Ϊ�������Ȼ��ֱ����Ӽ��ɡ�
bool Scan::ToStringQueue(string input){
    string str="";//�ַ�����ʼ��
    int num=0; //���ڼ������ֵĸ�����������С���㣩
    bool isDigit=false;

    for(size_t i=0;i!=input.size();++i){
        if(isdigit(input[i])||input[i]=='.'){
            isDigit=true;   //����������Ϊtrue
            str=str+input[i];
            if(input[i]!='.')  num++;
            if(num==11) {
                return false;
            }
            if(i==input.size()-1)   ScanQueue.push(str);   //����ֱ�����
        }
        else{
            if(isDigit){     //���������
                   ScanQueue.push(str);
                   isDigit=false;
            }
            str=input[i];    //���������
            ScanQueue.push(str);  //��������
            str.clear();  //�ַ������
        }
    }
    return true;   //���ض���
}

void Print::PrintScanStr(queue<string> ScanQueue){
    while(!ScanQueue.empty()){   //����������У�����ͬʱ���
        cout<<ScanQueue.front()<<endl;
        ScanQueue.pop();
    }
}

