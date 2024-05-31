#include <iostream>
using namespace std;

struct TreeNode{
	int data;
	TreeNode* left;
	TreeNode* right;
	
	TreeNode(int value) : data(value), left(NULL), right(NULL){}
};

int main(){
	int tree[4];
	
	for (int i=0; i<5; i++){
		cout << "Masukann Nilai array indeks [" << i << "] : ";
		cin >> tree[i];
	}
	
	TreeNode* root = new TreeNode(tree[0]);
	root->left = new TreeNode(tree[1]);
	root->right = new TreeNode(tree[2]);
	root->left->left = new TreeNode(tree[3]);
	root->right->right = new TreeNode(tree[4]);
	
	cout << "\nNilai simpul-simpul pohon: " << endl;
	cout << "Akar: " << root->data << endl;
	cout << "Anak kiri dari akar: " << root->left->data << endl;
	cout << "Anak kanan dari akar: " << root->right->data << endl;
	cout << "Anak kiri dari anak kiri dari akar: " << root->left->left->data << endl;
	cout << "Anak kanan dari anak kiri dari akar: " << root->right->right->data << endl;
	
	return 0;
}
