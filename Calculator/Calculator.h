#include<string>
#include<queue>
using namespace std;


//Scan��
class Scan{
    public:
        Scan(){};  //Ĭ�Ϲ��캯��
        ~Scan(){};  //Ĭ����������
        bool ToStringQueue(string input);  //��ȡ���������������ʽ
        queue<string> ScanQueue;
    private:
};

//Print��
class Print{
    public:
        Print(){};  //Ĭ�Ϲ��캯��
        ~Print(){}; //Ĭ����������
        void PrintScanStr(queue<string> ScanQueue);  //�������в���ӡ
    private:
};
