#include <iostream>
#include <random>
#include <vector>

struct node
{
    int key_value;
    node *left = nullptr;
    node *right = nullptr;
};

class btree
{
public:
    btree();
    ~btree();

    void insert(int key);
    node *search(int key);
    void destroy_tree();
    node *show();
    void show(node* root);
private:
    void destroy_tree(node *leaf);
    void insert(int key, node *leaf);
    node *search(int key, node *leaf);

    node *root;
};

int main()
{
    std::random_device rd;
    std::mt19937 mersenne(rd());

    std::vector<int> l;
    for (int i = 0; i < 100; ++i) {
        l.push_back(mersenne() % 100);
    }
    btree first;
    std::vector<int>::iterator it;
    for (it = l.begin(); it != l.end(); ++it) {
        first.insert(*it);
    }
    //node *root = first.show();
    //first.show(root);
    first.search(33);

}


btree::btree()
{
    root=nullptr;
}

btree::~btree()
{
    destroy_tree();
}

void btree::destroy_tree(node *leaf)
{
    if (leaf != nullptr)
    {
        destroy_tree(leaf->left);
        destroy_tree(leaf->right);
        delete leaf;
    }
}

void btree::insert(int key, node *leaf)
{
    if (key < leaf->key_value)
    {
        if (leaf->left != nullptr)
            insert(key, leaf->left);
        else
        {
            leaf->left = new node;
            leaf->left->key_value = key;
            leaf->left->left = nullptr; // sets the left child of child node to nullptr
            leaf->left->right = nullptr; // sets the right 
        }
    }
    else if (key >= leaf->key_value)
    {
        if (leaf->right != nullptr)
            insert(key, leaf->right);
        else
        {
            leaf->right = new node;
            leaf->right->key_value = key;
            leaf->right->left = nullptr;
            leaf->right->right = nullptr;
        }
    }
}

node *btree::search(int key, node *leaf)
{
    if (leaf != nullptr)
    {
        if (key == leaf->key_value) {
            std::cout << "Key found! " << key << "=" << leaf->key_value << '\n';
            return leaf;
        }
        if (key < leaf->key_value) {
            std::cout << key << " Is less than " << leaf->key_value<< '\n';
            return search(key, leaf->left);
        }
        else
            return search(key, leaf->right);
    }
    else return nullptr;
}

void btree::insert(int key)
{
    if (root != nullptr)
        insert(key, root);
    else
    {
        root = new node;
        root->key_value = key;
        root->left = nullptr;
        root->right = nullptr;
    }
}

node *btree::search(int key)
{
    return search(key, root);
}

void btree::destroy_tree()
{
    destroy_tree(root);
}

node *btree::show()
{
    return root;
}
void btree::show(node *leaf)
{
    //std::cout << "leaf value= " << leaf->key_value << '\n';
    if (leaf->left){
        std::cout << "******************" << "\n";
        std::cout << "Leaf value left = " << leaf->left->key_value << "\n";
        show(leaf->left);
    }
    if (leaf->right) {
       std::cout << "Leaf value  right = " << leaf->right->key_value << "\n";
       show(leaf->right);
    }
}
