#include<vector>;
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

};

class ReConstructBinaryTree
{
	
		public: void Test();
			  //��ǰ�������� ��
			  TreeNode* ReConstructBinaryTree1(vector<int> pre, vector<int> vin);
			  //��չ��  �����򡢺�������
			  TreeNode* ReConstructBinaryTree2(vector<int> after, vector<int> vin);
		private:
};

