#include<vector>
using namespace std;

struct ListNode {
	int val;
	struct ListNode* next;
	ListNode(int x) : val(x), next(NULL) { //ִ�й��캯����ʱ���Ȱ�val ��ֵ��next ��ʼ��
	}
};
class PrintListFromTailToHead
{
	

public :
	void Test();
	vector<int> printListFromTailToHead1(ListNode* head);
	vector<int> printListFromTailToHead2(ListNode* head);
	vector<int> printListFromTailToHead3(ListNode* head);
private:

};

