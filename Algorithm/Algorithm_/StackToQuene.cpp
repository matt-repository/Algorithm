#include "StackToQuene.h"

void StackToQuene::Test()
{

	//push1(1);
	//push1(2);
	//push1(3);
	//auto ret1 = pop1();
	//push1(4);
	//auto ret2 = pop1();
	//push1(5);
	auto ret3 = pop2();
	push2(1);
	push2(2);
	push2(3);
	auto ret1 = pop2();
	push2(4);
	auto ret2 = pop2();
	push2(5);

}


/// <summary>
/// ����һ�����ӣ� �������ݵ��Ǹ�ջ����ӣ����ӣ���ȡ֮ǰ�������ݵ�ջͳһ�õ�û���ݵ�ջ��Ȼ���ó�һ����Ȼ���ٰѴ�ʱ�����ݵ�ջ�Ż�ԭ�����ݵ�ջ�С�ʱ�临�Ӷȣ� ��ջ:O(1)����ջ:O(2n) �ռ临�ӶȾ�Ϊ��O(n)
/// </summary>
/// <param name="node"></param>

void StackToQuene::push1(int node)
{
	if (stack1.size() != 0)
		stack1.push(node);
	else 
		stack2.push(node);
}
int StackToQuene::pop1()
{
	if (!stack1.empty())
	{
		while (!stack1.empty())
		{
			stack2.push(stack1.top());
			stack1.pop();
		}
		int ret = stack2.top();
		stack2.pop();
		while (!stack2.empty())
		{
			stack1.push(stack2.top());
			stack2.pop();
		}
		return ret;
	}
	else if(!stack2.empty())
	{
		while (!stack2.empty())
		{
			stack1.push(stack2.top());
			stack2.pop();
		}
		int ret = stack1.top();
		stack1.pop();
		while (!stack1.empty())
		{
			stack2.push(stack1.top());
			stack1.pop();
		}
		return ret;
	}
	else
	{
		return 0;
	}
}


/// <summary>
/// �����������ӣ� ����stack1 �У����ӣ����ж�stack2��������û���������ݣ�ֱ��stack��ջ���������ݣ��ٰ�stack1�е�����ȫ������stack2�У�ʱ�临�Ӷ� �� O(1) �ռ临�Ӷ� ��Ϊ O(n)
/// </summary>
/// <param name="node"></param>
void StackToQuene::push2(int node)
{
	stack1.push(node);
}
int StackToQuene::pop2()
{
	if (stack2.empty())
	{
		while (!stack1.empty())
		{
			int temp = stack1.top();
			stack1.pop();
			stack2.push(temp);
		}
	}
	if (stack2.empty()) //�ٷ�û�п�����һ�㡣����Ҫ���ǵ�
		return 0;
	int ret = stack2.top();
	stack2.pop();
	return ret;
		
}
