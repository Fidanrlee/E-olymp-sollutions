#include <iostream>
using namespace std;

struct Node {
int val;
Node *left;
Node *right;
Node *parent;
};
int getsecondleft(Node *N);
int getsecond(Node *N);
Node *add(Node *N,int a){
    if(N==NULL){
        Node *root = new Node;
        root->left=NULL;
        root->right=NULL;
        root->val=a;
        root->parent=NULL;
        return root;
        }

    else if(N->val<a){
             Node *rchild = add(N->right, a);
        N->right  = rchild;
        rchild->parent = N;
        }

    else if(N->val>a){
            Node *lchild = add(N->left, a);
        N->left  = lchild;
        lchild->parent = N;
      }

return N;
}

int getsecondleft(Node *N){
if(N->right!=NULL)
        getsecondleft(N->right);
else cout<<N->val;

}

int getsecond(Node *N){
    if(N->right!=NULL)
        getsecond(N->right);
    else if(N->left!=NULL)
        getsecondleft(N->left);
    else if(N->parent->right->val==N->val)
            cout<<N->parent->val;
    return 0;
}

int main(){
Node *N =NULL;
int a;
while(cin>>a){
        if(a==0)    break;
        N=add(N,a);
}
 getsecond(N);
return 0;
}