#include "ReplaceSpace.h"
using namespace std;

void ReplaceSpace::Test()
{
	string result= ReplaceSpace1("We Are Happy");
};
//�滻�ո� 
//��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ�%20�������磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy����ʱ�临�Ӷȣ��ռ临�Ӷȶ���n��
string ReplaceSpace::ReplaceSpace1(string s)
{
	string a;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
			a.append("%20");
		else
		{
			a.append(1,s[i]);
		}
	}
	return a;
}
