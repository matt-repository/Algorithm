#include "NumberOf1.h"
using namespace std;
//��������1�ĸ���

 /// <summary>
 /// ����һ���������������32λ�����Ʊ�ʾ��1�ĸ��������и����ò����ʾ��
 /// </summary>
void NumberOf1::Test()
{
		int x = 0b01; //������
		int y = 074; //�˽���
		int s = 74; // ʮ����
		int z = 0x74;//ʮ������
		int ss = 0x01;
		cout << y << endl;
	 auto ret = NumberOf1_1(1);
	  ret = NumberOf1_1(10);
	  ret = NumberOf1_1(0);
	  ret = NumberOf1_1(-1);
	  ret = NumberOf1_1(-9);
}

/// <summary>
/// ���������������� һ�������� & &32�Σ�
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int   NumberOf1::NumberOf1_1(int n)
{
	int count = 0;
	int maxIndex = 1;
	while (maxIndex != 0)
	{
		if (n & maxIndex)
			count++;
		maxIndex <<= 1;

	}
	return count;
}

/// <summary>
/// �����㷨��n & (n - 1)  һ�γ���һ�� 1 �����һ�ȡ��ȥ�������1�� ��Ϊ����Ҳ���ԣ���������ʱ�临�Ӷ�
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int   NumberOf1::NumberOf1_2(int n)
{

	int count = 0;
	while (n != 0)
	{
		count++;
		n = n & (n - 1);

	}
	return count;
}