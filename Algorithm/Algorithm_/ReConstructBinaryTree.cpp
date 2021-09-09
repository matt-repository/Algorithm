#include "ReConstructBinaryTree.h"


//�ؽ�������
//����ĳ��������ǰ�������������������ؽ����ö���������������ͷ��㡣
//��������ǰ���������{ 1,2,4,7,3,5,6,8 }�������������{ 4,7,2,1,5,3,8,6 }�����ؽ�������ͼ��ʾ��
//��ʾ:
//1.0 <= pre.length <= 2000
//2.vin.length == pre.length
//3. - 10000 <= pre[i], vin[i] <= 10000
//4.pre �� vin �����ظ�Ԫ��
//5.vin���ֵ�Ԫ�ؾ������� pre��
//6.ֻ��Ҫ���ظ���㣬ϵͳ���Զ�������������𰸶Ա�

void ReConstructBinaryTree::Test()
{
   auto result= ReConstructBinaryTree2(vector<int>{7,4,2,5,8,6,3,1}, vector<int>{ 4, 7, 2, 1, 5, 3, 8, 6 });
}

/// <summary>
/// �ݹ�ķ��������Բ�����ڵ�Ϊ1  ������Ϊ 472��������Ϊ 5386  ��������������Ϊһ�������������м��㣬��
/// </summary>
/// <param name="pre"></param>
/// <param name="vin"></param>
/// <returns></returns>
TreeNode*  ReConstructBinaryTree::ReConstructBinaryTree1( vector<int> pre, vector<int> vin)
{
	if (pre.size() == 0 || vin.size() == 0 || pre.size() != vin.size())
		return nullptr;
	TreeNode* ret =new TreeNode(pre[0]);
	vector<int> preLeft, preRight, vinLeft, vinRight;
	bool isnode(false); //�����Ƿ��˸��ڵ�
	for (int i = 0; i < vin.size(); i++)
	{
		if (!isnode) //���������û�����ڵ�
		{
			//�ų����ڵ� ��ǰ�������
			if (i != 0)
				preLeft.push_back(pre[i]);
			if (pre[0] != vin[i])
				vinLeft.push_back(vin[i]);
		}
		else //����������˸��ڵ㣨��һ����
		{
			preRight.push_back(pre[i]);
			vinRight.push_back(vin[i]);
		}
		if(pre[0] == vin[i])
			isnode = true;
	}
	if(preLeft.size()>0)
		ret->left = ReConstructBinaryTree1(preLeft, vinLeft);
	if(preRight.size()>0)
		ret->right = ReConstructBinaryTree1(preRight, vinRight);
	return ret;
}

/// <summary>
/// ��֪�������������������ؽ����������Լ���չ�ģ�
/// </summary>
/// <param name="after"></param>
/// <param name="vin"></param>
/// <returns></returns>

TreeNode* ReConstructBinaryTree::ReConstructBinaryTree2(vector<int> after, vector<int> vin)
{
	if (after.size() == 0 || vin.size() == 0 || after.size() != vin.size())
		return nullptr;
	auto maxIndex = after.size()-1;
	TreeNode* ret =new TreeNode(after[maxIndex]);
	vector<int> afterLeft, afterRight, vinLeft, vinRight;
	bool isnode(false); //�����Ƿ��˸��ڵ�
	for (int i = 0; i <=maxIndex; i++)
	{
		if (!isnode) //���������û�����ڵ�
		{
			if (after[maxIndex] != vin[i])
			{
				afterLeft.push_back(after[i]);
				vinLeft.push_back(vin[i]);
			}
			else
				afterRight.push_back(after[i]);
		}
		else //����������˸��ڵ㣨��һ����
		{
			if(i!= maxIndex)
				afterRight.push_back(after[i]);
			vinRight.push_back(vin[i]);
		}
		if(after[maxIndex] == vin[i])
			isnode = true;
	}
	if(afterLeft.size()>0)
		ret->left = ReConstructBinaryTree2(afterLeft, vinLeft);
	if(afterRight.size()>0)
		ret->right = ReConstructBinaryTree2(afterRight, vinRight);
	return ret;
}
