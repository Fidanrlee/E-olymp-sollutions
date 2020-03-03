#include <iostream>
    #include <string>
    using namespace std;
    int arr[110];
    int last=-1;
    void push(int a){
    last++;
    arr[last]=a;
    cout<<"ok"<<endl;
    }
    void pop(){
    if(last==-1){
    cout<<"error"<<endl;
    return;
    }
    cout<<arr[last]<<endl;
    arr[last]=0;
    last--;
    }
    void back(){
    if(last==-1){
    cout<<"error"<<endl;
    return;
    }
    cout<<arr[last]<<endl;
    }
    void size(){
    cout<<last+1<<endl;
    }
    void clear(){
    for(int i=last;i>=0;i--)
    arr[i]=0;
    cout<<"ok"<<endl;
    last=-1;
    }
    int main() {
    string s;
    int a;
    while (cin >> s) {
    if (s == "push") {cin >> a;push(a);}
    else if (s == "pop") {pop();}
    else if (s == "back") {back();} 
    else if (s == "size") {size();}
    else if (s == "clear") {clear();}
    else if (s == "exit") {cout <<"bye"<<endl;break;}
    }
    return 0;
    }