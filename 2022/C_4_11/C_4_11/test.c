#include"Tree.h"

int TreeSize(struct TreeNode* root)
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}

void _intorder(struct TreeNode* root, int* arr, int* pi)
{
	if (root == NULL)
		return;
	_intorder(root->left, arr, pi);
	arr[(*pi)++] = root->val;
	_intorder(root->right, arr, pi);

}
int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
	if (root == NULL)
		return NULL;
	int sz = TreeSize(root);
	int i = 0;
	int* ret = (int*)malloc(sizeof(int) * sz);
	_intorder(root, ret, &i);
	return ret;
}
//int main()
//{
//	char arr[101];
//	
//	while (scanf("%s", arr)!= EOF)
//	{
//		int i = 0;
//		BTNode* root = BinaryTreeCreate(arr, strlen(arr), &i);
//		BinaryTreeInOrder(root);
//	}
//	return 0;
//}
//bool isUnivalTree(struct TreeNode* root)
//{
//	if (root == NULL)
//		return true;
//	bool left = root->left == NULL || (root->left->val == root->val && isUnivalTree(root->left));
//	if (!left)
//		return false;
//	bool right = root->right == NULL || (root->left->val == root->val && isUnivalTree(root->right));
//	if (right)
//		return true;
//	return false;
//}

//int main()
//{
//	int i = 0;
//	char arr[] = "ABD##E#H##CF##G##";
//	BTNode* root = BinaryTreeCreate(arr, strlen(arr), &i);
//	//int ret = BinaryTreeSize(root);
//	//BinaryTreeFind(root, 'E');
//	//int ret = BinaryTreeFull(root);
//	//printf("%d ", ret);
//	BinaryTreePrevOrder(root);
//	//printf("\n")
//	//BinaryTreeInOrder(root);
//	return 0;
//}

//int TreeSize(struct TreeNode* root)
//{
//	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
//}
//
//void PreOrder(struct TreeNode* root, char* arr, int* pi)
//{
//	if (root == NULL)
//	{
//		arr[*pi] = '#';
//		(*pi)++;
//		return;
//	}
//	arr[*pi] = root->val;
//	(*pi)++;
//	PreOrder(root->left, arr, pi);
//	PreOrder(root->right, arr, pi);
//}
//
//char* preorderTraversal(struct TreeNode* root, int* returnSize) 
//{
//	int sz = TreeSize(root);
//	char* ret = (char*)malloc(sizeof(char) * (sz + 1));
//	*returnSize = 0;
//	PreOrder(root, ret, returnSize);
//	*returnSize = sz;
//	return ret;
//}
//int main()
//{
//	int i = 0;
//	char arr[] = "ABD##E#H##CF##G##";
//	int sz1 = strlen(arr);
//	struct TreeNode* root = BinaryTreeCreate(arr, strlen(arr), &i);
//	//BinaryTreePrevOrder(root);
//	int sz = 0;
//	char* ret = preorderTraversal(root, &sz);
//	ret[sz1] = '\0';
//	printf("%s", ret);
//	return 0;
//}
//bool _isSymmetric(struct TreeNode* p, struct TreeNode* q)
//{
//	if (p == NULL && q == NULL)
//		return true;
//	if (p == NULL || q == NULL)
//		return false;
//	return p->val == q->val && _isSymmetric(p->left, q->right) && _isSymmetric(p->right, q->left);
//}
//
//
//bool isSymmetric(struct TreeNode* root) 
//{
//	if (root == NULL)
//		return true;
//	return _isSymmetric(root->left, root -> right);
//}


//bool isSameTree(struct TreeNode* p, struct TreeNode* q)
//{
//	if (p == NULL && q == NULL)
//		return true;
//	if (p == NULL || q == NULL)
//		return false;
//	return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//
//
//}

//bool isSameTree(struct TreeNode* p, struct TreeNode* q)
//{
//	if (q == NULL || p == NULL)
//	{
//		if (q == p)
//			return true;
//		else
//			return false;
//	}
//	if (p->val != q->val)
//		return false;
//	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//}

//bool IsTreeSame(BTNode* p, BTNode* q)
//{
//	if (q == NULL || p == NULL)
//	{
//		if (q == p)
//			return true;
//		else
//			return false;
//	}
//	if (p->_data != q->_data)
//		return false;
//	return IsTreeSame(p->_left, q->_left) && IsTreeSame(p->_right, q->_right);
//}


//bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) 
//{
//	if (root == NULL)
//		return subRoot == NULL;
//	if (root->val == subRoot->val)
//	{
//		if (isSameTree(root, subRoot))
//			return true;
//	}
//	bool left = isSubtree(root->left, subRoot);
//	if (left)
//		return true;
//	bool right = isSubtree(root->right, subRoot);
//	if (right)
//		return true;
//	return false;
//}

//bool isUnivalTree(struct TreeNode* root)
//{
//	bool left = root->left == NULL || root->left->val == root->val && isUnivalTree(root->left);
//	bool right = root->right == NULL || root->right->val == root->val && isUnivalTree(root->right);
//	return left && right;
//}

//bool isUnivalTree(struct TreeNode* root) 
//{
//	if (root == NULL)
//		return true;
//	if (isUnivalTree(root->left) && isUnivalTree(root->right))
//	{
//		if (root->left == NULL || root->right == NULL)
//		{
//			if (root->left == NULL && root->right == NULL)
//			{
//				return true;
//			}
//			else if (root->left == NULL)
//			{
//				return root->val == root->right->val;
//			}
//			else
//			{
//				return root->val == root->right->val;
//			}
//		}
//	}
//	else
//		return false;
//}

//_Bool isUnivalTree(struct TreeNode* root) 
//{
//	if (root == NULL)
//		return 1;
//	if (isUnivalTree(root->left) && isUnivalTree(root->right))
//	{
//		if (root->left == NULL || root->right == NULL)
//		{
//			if (root->left == NULL && root->right == NULL)
//				return 1;
//			else if (root->left == NULL)
//			{
//				return root->val == root;
//			}
//			else
//			{
//				return root->val == root->left->val;
//			}
//		}
//		else
//			return root->val == root->left->val && root->val == root->right->val;
//	}
//	else
//		return 0;
//}

//int maxDepth(struct TreeNode* root) 
//{
//	if (root == NULL)
//		return 0;
//	int left = maxDepth(root->left);
//	int right = maxDepth(root->right);
//	return left > right ? left : right + 1;
//}


//typedef int* tree;
//int numktree(tree* root, int k)
//{
//	if (root == NULL)
//		return 0;
//	if (k == 1)
//		return 1;
//	return numsktree(root > left, k - 1) + numktree(root->right, k - 1);
//
//}