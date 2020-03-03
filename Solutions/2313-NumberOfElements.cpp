#include <iostream>
using namespace std;

struct Node {
int val;
Node *left;
Node *right;
};

Node *add(Node *N,int a){

    if(N==NULL){
        Node *root = new Node;
        root->left=NULL;
        root->right=NULL;
        root->val=a;
        return root;
        }

    else if(N->val<a){
        N->right=add(N->right,a);}

    else if(N->val>a){
        N->left=add(N->left,a);}

return N;
}

int weight(Node *N){
    if(N==NULL) return 0;

    int cnt=0;
    cnt+=weight(N->right);
    cnt+=weight(N->left);
    return cnt+1;
}


int main(){
Node *N =NULL;
int a;
while(cin>>a){
        if(a==0)    break;
        N=add(N,a);
}
cout<< weight(N);
return 0;
}
