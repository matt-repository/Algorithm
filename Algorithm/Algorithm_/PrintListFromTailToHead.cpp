#include "PrintListFromTailToHead.h"
#include <iostream>

// ����һ�������ͷ�ڵ㣬�������β��ͷ��˳�򷵻�ÿ���ڵ��ֵ�������鷵�أ���

	//	������{ 1,2,3 }����������:

	//	����һ������Ϊ[3, 2, 1]

 void PrintListFromTailToHead::Test()
{
	 ListNode* head = new ListNode(1);
	 head->next=new  ListNode(2);
	 head->next->next= new  ListNode(3);
	 auto a= printListFromTailToHead3(head);
	 for (size_t i = 0; i < a.size(); i++)
	 {
		cout << a[i] << endl;
	 }
}
	
	

 /// <summary>
 /// �������һ ��ֱ��ͨ�����飬Ȼ��ת(�ж�Ӧ�ĺ���)��
 /// </summary>
 /// <param name="head"></param>
 /// <returns></returns>
 vector<int> PrintListFromTailToHead::printListFromTailToHead1(ListNode* head){

	 
	 vector<int> ret;
	 while (head)
	 {
		 ret.push_back( head->val);
		 head = head->next;
	 }
	 reverse(ret.begin(), ret.end());
	 return ret;
 }

 
 /// <summary>
 /// �ݹ� ʵ�֣������ڶ������ĺ�������������������һ�����ӣ������������������ӣ����˶��ѣ�
 /// </summary>
 /// <param name="head"></param>
 /// <returns></returns>
 vector<int> PrintListFromTailToHead::printListFromTailToHead2(ListNode* head) {

	vector<int> ret;
	if (!head)
		 return ret;
	ret= printListFromTailToHead2(head->next);
	ret.push_back(head->val);
	return ret;
 }

 /// <summary>
 /// ͨ�����鷴ת������ת�����Լ�ʵ��
 /// </summary>
 /// <param name="head"></param>
 /// <returns></returns>
 vector<int> PrintListFromTailToHead::printListFromTailToHead3(ListNode* head) {

	 //��ת����
	 ListNode* pre = nullptr;
	 ListNode* cur = head;
	 ListNode* temp = cur;
	 while (cur) 
	 {
		 temp = cur->next;
		 cur->next = pre;
		 pre = cur;
		 cur = temp;
	 }
	 vector<int> ret;

	 while (pre)
	 {
		 ret.push_back(pre->val);
		 pre = pre->next;
	 }
	 return ret;
 }



