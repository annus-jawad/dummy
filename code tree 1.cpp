#include<iostream>
using namespace std;
class tree
{
	private:
	int data;
	
	public:
		tree *left, *right, *temp, *current, *root;
		
	void create();
	void insert();
};

void tree::create()
{
	int item;
	cout<<"Enter Value: ";
	cin>>item;
	
	root = new(tree);
	root->left = NULL;
	root->right = NULL;
	root->data = item;
	
	current = root;
}

void tree::insert()
{
	int item;
	cout<<"Enter Value: ";
	cin>>item;
	temp = new(tree);
	temp->left = NULL;
	temp->right = NULL;
	temp->data = item;
	
	current = root;
	
	while(current!=NULL)
	{
		if(current->data == temp->data)
		{
			cout<<"Duplication is not Allowed ";
			return;
		}
		else if((temp->data < current->data) && (current->left == NULL))
		{
			current->left = temp;
			current = temp;
			cout<<"Inserted in Left "<<endl;
			return;
		}
		else if(temp->data < current->data)
		{
			current = current->left;
		}
		else if ((temp->data > current->data) && (current->right == NULL))
		{
			current->right = temp;
			current = temp;
			cout<<"Inserted in Right "<<endl;
			return;
		}
		else
		{
			current = current->right;
		}
	}
}

int main()
{
	tree t;
	t.create();
	t.insert();
	t.insert();
		t.insert();
			t.insert();
	
}











