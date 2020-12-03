#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int a){
        this->data=a;
        this->next=NULL;
        this->prev=NULL;
    }
};
node* create(){
    node* head = NULL;
    int data;
    cout<<"Enter the data:";
    cin>>data;
    node* temp= NULL;
    while(data!=-1){
        node* n= new node(data);
        if(head==NULL){
            head=n;
            temp=head;
        }
        else{
            temp->next=n;
            n->prev=temp;
            temp=temp->next;
        }
        cout<<"enter the data:";
        cin>>data;
    }
    return head;
}
node* insert(node* head){
    node* temp=head;
    int data,index;
    cout<<"Enter the data to insert:";
    cin>>data;
    cout<<"Enter the index to insert data:";
    cin>>index;
    if(index==0){
        node* n=new node(data);
        n->next=head;
        head->prev=n;
        head=n;
        return head;
    }
    int a=index;
    while(a>1){
        temp=temp->next;
        a--;
    }
    node* n=new node(data);
    n->next = temp->next;
    n->next->prev=n;
    temp->next=n;
    n->prev=temp;
    return head;
}
node* ins_at_beg(node* head){
    int data;
    cout<<"Enter the data:";
    cin>>data;
    node* temp = new node(data);
    temp->next = head;
    temp->prev = NULL;
    head->prev = temp;
    head = temp;
    return head; 
}
int print(node* head){
    node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" \n";
    cout<<"Printing in reverse order:\n";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->prev;        
    }
    return 0;
}
node* del_node(node* head){
    node* temp= head;
    int data;
    cout<<"Enter the data to delete:";
    cin>>data;
    if(temp->data==data){
        head=temp->next;
        delete(temp);
    }
    while(temp->data!=data){
        temp = temp->next;
    }    
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete(temp);
    return head;
}
node* del_node_beg(node* head){
    node* temp =head;
    head = head->next;
    head->prev = NULL;
    delete temp;
    return head;
}
node* del_node_end(node* head){
    node* temp= head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete temp;
    return head;
}
int main(){
    node* head = create();
    print(head);
    cout<<endl;
    head = insert(head);
    print(head);
    cout<<endl;
    head = del_node(head);
    print(head);
    cout<<"\n";
    head = del_node_end(head);
    print(head);
    cout<<endl;
    head = del_node_beg(head);
    print(head);
    cout<<endl;
    head = ins_at_beg(head);
    print(head);
    return 0;
}