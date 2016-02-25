#include<string>
#include<queue>
using namespace std;


//Scan类
class Scan{
    public:
        Scan(){};  //默认构造函数
        ~Scan(){};  //默认析构函数
        bool ToStringQueue(string input);  //读取输入的四则运算表达式
        queue<string> ScanQueue;
    private:
};

//Print类
class Print{
    public:
        Print(){};  //默认构造函数
        ~Print(){}; //默认析构函数
        void PrintScanStr(queue<string> ScanQueue);  //遍历队列并打印
    private:
};
