#include "MinNumberInRotateArray.h"
#include <iostream>

void MinNumberInRotateArray::Test()
{

	int ret = MinNumberInRotateArray1(vector<int> {1 ,1 ,1 ,1 ,0, 1});
	std::cout << ret << endl;
}

/// <summary>
/// 4 5 6 1 2 3 ��һ���ǵݼ� ���顣��a[n+1]>=a[n] �����������ת���õ���������ǰ�棬  �ҳ���С������ �ݹ�+ ���ֲ��ҵĻ���������ģ� 
///  �����ֲ���Ϊ ������ݼ�������ʵ�֣��������м�ıȣ����� û�취�ȣ�����Ҳ��֪�� ������һ�ߣ�����������Ҷ˵�ȿ����ҳ����� ��С������һ�ߡ�
/// �ʼ���ŵݹ�ķ���д����ѭ�����ڶ����ʱ���������⣬��Ϊÿ����һ�� ����������߼��ͱ���(��������ת����) �������ﲻ���õݹ�ķ���д��
/// </summary>  
/// <param name="rotateArray"></param>
/// <returns></returns>
int MinNumberInRotateArray::MinNumberInRotateArray1(vector<int> rotateArray)
{
	/*if (rotateArray.size() == 0)
		return 0;
	int maxIndex = rotateArray.size();
	int mid = maxIndex / 2;
	vector<int> target;
	if (rotateArray[mid] > rotateArray[maxIndex])
	{
		int i = mid;
		while (i< maxIndex)
		{
			target.push_back(rotateArray[i + 1]);
			i++;
		}
		return MinNumberInRotateArray1(target);
	}
	else if (rotateArray[mid] < rotateArray[maxIndex])
	{

	}*/
	///����Ϊ�����˼·�����ţ��Ժ�鿴˼·


	if (rotateArray.size() == 0)
		return 0;

	int first = 0, last = rotateArray.size() - 1;

	int mid = last / 2;

	while (first<last) //����д < ���� !=  ������
	{
		if (rotateArray[mid] > rotateArray[last])
			first = mid+1;
		else if (rotateArray[mid] < rotateArray[last])
			last = mid;
		else
			last = last-1;
		mid = first + (last-first) / 2;
	}
	//���� ʱ��mid=first=last �����Դ�ʱ���Է��� rotateArray[mid] rotateArray[first]  rotateArray[last] ������
	return rotateArray[mid];
		

}