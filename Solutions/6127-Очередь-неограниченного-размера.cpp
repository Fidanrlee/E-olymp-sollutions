#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node *next;
};
int s=0;
Node *root;
Node *cur=root;

void push(int val){
s++;
if(root==NULL){
root=new Node;
root->data=val;
root->next=NULL;
cur=root;
}
else {
Node *temp=new Node;
temp->data=val;
temp->next=NULL;
cur->next=temp;
cur=cur->next;
}
cout<<"ok"<<endl;
}

void pop(){
if(s==0){
cout<<"error"<<endl;
return;
}
cout<<root->data<<endl;
if(root->next==NULL)
root=NULL;
else {
root=root->next;
}
s--;
}

void front(){
if(s==0){
cout<<"error"<<endl;
return;
}
cout<<root->data<<endl;
}

void size(){
cout<<s<<endl;
}

void clear(){
root=NULL;
s=0;
cout<<"ok"<<endl;
}

int main()
{
    string s;
    int val;
    while(cin>>s){
    if(s=="push") {cin>>val;push(val);}
    else if(s=="pop") pop();
    else if(s=="front") front();
    else if(s=="size") size();
    else if(s=="clear") clear();
    else if(s=="exit"){cout<<"bye"<<endl;break;};

    }


}