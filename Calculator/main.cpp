#include<iostream>
#include<string>
#include<queue>
#include"Calculator.h"
using namespace std;
int main(void)
{
    Scan scan;
    Print print;
    string input;
    getline(cin,input);
    if(scan.ToStringQueue(input))
        print.PrintScanStr(scan.ScanQueue);
    else
        cout<<"The input is wrong,please input numbers less then 11"<<endl;
    return 0;
}
