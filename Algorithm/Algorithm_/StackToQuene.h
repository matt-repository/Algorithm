#include<stack>;
using namespace std;
/// <summary>
/// ������ջ��ʵ��һ�����У��ֱ�����ڶ���β����������(push)���ڶ���ͷ��ɾ������(pop)�Ĺ��ܡ� �����е�Ԫ��Ϊint���͡���֤�����Ϸ�������֤pop����ʱ����������Ԫ�ء�

//  ʾ��:
//  ����:
//  ["PSH1", "PSH2", "POP", "POP"]
//  ���� :
//  1, 2
//  ���� :
//  "PSH1" : ����1�������β��
//  "PSH2" : ����2�������β��
//  "POP��:����ɾ��һ��Ԫ�أ��Ƚ��ȳ�=>����1
//  "POP��:����ɾ��һ��Ԫ�أ��Ƚ��ȳ�=>����2
/// </summary>
class StackToQuene
{
        public:
            void Test();

            void push1(int node);
            int pop1();

            void push2(int node);
            int pop2();

        private:
            stack<int> stack1;
            stack<int> stack2;

            

};

