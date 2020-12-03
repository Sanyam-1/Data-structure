#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        next == NULL;
    }
};
node* create(){
    int data=0,ch;
    node* head;
    node* tail;
    cout<<"Enter your choice:\n1.Insert at end\n2.Insert at beginning\n3.Insert in Between:";
    cin>>ch;
    switch(ch){
        case 1:
        cout<<"Enter the data:";
        cin>>data;
        while(data!=-1){
            node* n = new node(data);
            if(head == NULL){
                head=n;
                tail=n;
            }
            else{
                tail->next = n;
                tail = n;
            }
            cout<<"Enter the data:";
            cin>>data;
        }
        break;
        case 2:
        int data;
        while(data!=-1){
            cout<<"Enter the data:";
            cin>>data;
            node* n= new node(data);
            if(head == NULL){
                head = n;
                tail = n;
            }
            else{
                n->next = head;
                head = n;
            }
        }    
        default: 
        cout<<"Enter a valid choice:";
    }
    return head;
}
int main(){
    node* head = create();
    return 0;
}