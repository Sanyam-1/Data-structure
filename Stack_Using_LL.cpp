#include<iostream>
using namespace std;
class LL{
    public:
    int data;
    LL* next;
    LL(int data){
        this->data = data;
        this->next = NULL;
    }
};
LL* top = NULL;
int size = 0;
void create(){
    int data;
    cout<<"Enter the data:";
    cin>>data;
    while(data!=-1){
        LL* node = new LL(data);
        if(top == NULL){
            top=node;
            size++;
        }
        else{
            node->next = top;
            top = node;
            size++;
        }
        cout<<"Enter the data:";
        cin>>data;
    }
}
void pop(){
    if(top == NULL){
        cout<<"Underflow\n";
        return ;
    }
    else{
        LL* node = top;
        cout<<"Deleted Element is ::"<<node->data<<endl;
        top = top->next;
        delete node;
        size--;
    }
}
void display(){
    LL* dis = top;
    while(dis!= NULL){
        cout<<dis->data<<" ";
        dis = dis->next;
    }
    cout<<endl;
}
int main(){
    pop();
    create();
    display();
    pop();
    display();
}