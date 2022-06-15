#include<bits/stdc++.h>
using namespace std;
struct Node{
    int k;
    Node *left, *right;
    Node(int d)
    {
        k=d;
        left=NULL;
        right=NULL;
    }
};
void height(Node *root, int k)
{
    if(root==NULL)
        return;
    else if(root!=NULL)
    {
        if(k==0)
        {
            cout<<root->k<<" ";
            return;
        }
        k--;
        height(root->left,k);
        height(root->right,k);
    }
    return;
}
int main()
{
    int k;
    cout<<"\nEnter k:";
    cin>>k;
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right->right=new Node(70);
    height(root,k);
    return 0;
}