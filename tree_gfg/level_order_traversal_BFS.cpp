#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node *left,*right;
    Node(int d){
        val=d;
        left=NULL;
        right=NULL;
    }
};

void BFS(Node *root)
{
    queue <Node *> q;
    q.push(root);
    while(!q.empty())
    {
        Node *curr = q.front();
        cout<<curr->val<<" ";
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
        q.pop();
    }
}

//overall time complexity = O(h*n)
void print_nodes_k(Node *root, int i)
{
    if(root==NULL)
        ;
    else if(i==0 && root!=NULL)
        cout<<root->val<<" ";
    else
    {
        i--;
        print_nodes_k(root->left,i);
        print_nodes_k(root->right,i);
    }
    return;
}
//taking O(h*n time)
void print_nodes(Node *root, int h)
{
    for(int i=0;i<h;i++)
    {
        print_nodes_k(root,i);
    }
}

//takes O(n) time
int height(Node *root){
    int tot=0;
    if(root==NULL)
        return 0;
    else
    {
        tot = max(height(root->left),height(root->right));
        return tot+1;
    }
}
//first we will calculate the height, that takes O(n) time
//After that, we use the function, that prints all the nodes at
//height of k, by applying a while loop
void level_order(Node *root){
    int h = height(root);
    print_nodes(root,h);
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(15);
    root->left->left = new Node(30);
    root->right = new Node(20);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->right->left->left = new Node(60);
    root->right->left->right = new Node(70);
    cout<<"level order : ";
    level_order(root);
    cout<<"\nBFS: ";
    BFS(root);
}