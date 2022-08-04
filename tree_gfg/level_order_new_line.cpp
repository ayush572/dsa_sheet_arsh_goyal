#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *left, *right;
    Node(int d)
    {
        val = d;
        left = NULL;
        right = NULL;
    }
};
//original idea was using the BFS


//this is by using the DFS - implemented self O(n) time 
// and O(n) space
void level_order_new_line(Node *root)
{
    queue<Node *> Q;
    int s=0;
    if(root==NULL)
        return;
    Q.push(root);
    s=Q.size();
    while (!Q.empty())
    {
        cout<<Q.front()->val<<" ";
        Node *curr=Q.front();
        Q.pop();
        s--;
        if(curr->left != NULL)
            Q.push(curr->left);
        if(curr->right!= NULL)
            Q.push(curr->right);
        //means the current level has finished off completely, so we will
        //start printing from a new line
        if(s==0)
        {
            s=Q.size();
            cout<<"\n";
        }
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    // root->right->left = new Node(60);
    root->right->right = new Node(60);
    root->right->right->left = new Node(70);
    root->right->right->right = new Node(80);
    level_order_new_line(root);
    return 0;
}