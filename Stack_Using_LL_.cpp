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
        LL* noded = new LL(data);
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
void del(){
    if(top == NULL){
        cout<<"Underflow\n";
        return ;
    }
    else{
        LL* node = top;
        top = top->next;
        cout<<"Deleted Element ::"<<node->data<<" \n";
        delete node;
        size--;
    }
}
void display(){
   cout<<top->data;
   cout<<endl;
}
int main(){
    del();
    create();
    display();
    del();
    display();
}