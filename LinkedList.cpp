#include<iostream>
using namespace std;
class node{
    public:
    int a;
    node *next;
    node(int b){
        this->a=b;
        next=NULL;
    }
};
node* create(){
    int data,ch;
    cout<<"Enter Data:";
    cin>>data;
    node* head = NULL;
    node* tail=NULL;
    cout<<"Enter your choice:\n1.Insert at end\n2.Insert at beginning\n3.Insert in Between:";
    cin>>ch;
    switch (ch)
    {
    case 1:
        while(data!=-1){
        node* newnode = new node(data);
            if(head== NULL){
                head = newnode;
                tail = head;
            }
            else{
                tail->next=newnode;
                tail = tail->next;
            }
            cout<<"Enter the data:";
            cin>>data;
        }    
        break;
    case 2:

    
    default:
        break;
    }
    return head;
}
int print (node *head)
{
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->a<<" ";
        temp = temp -> next;
    }
    cout<<std::endl;
    return 0;
}
int main(){
    node* head = create();
    print(head);
}