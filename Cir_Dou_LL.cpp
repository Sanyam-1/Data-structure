#include<iostream>
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
    int data;
    std::cout<<"Enter the data:";
    std::cin>>data;
    node* head=NULL;
    node* temp= NULL;
    while(data!=-1){
        node* n=new node(data);
        if(head==NULL){
            head=n;
            head->next=head;
            head->prev=head;
        }   
        else{
            temp=head;
            while(temp->next!=head){
                temp=temp->next;
            }
            head->prev=n;
            n->next=head;
            temp->next=n;
            n->prev=temp;
        }
        std::cout<<"Enter the data:";
        std::cin>>data;
    }
    return head;
}
int print(node* head){
    node* temp=head;
    while(temp->next!=head){
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
    std::cout<<temp->data;
    std::cout<<std::endl;
    while(temp!=head){
        std::cout<<temp->data<<" ";
        temp=temp->prev;
    }
    std::cout<<head->data;
    std::cout<<std::endl;
    return 0;
}
node* del_beg(node* head){
    node* temp = head;
    while(temp->next != head){
        temp= temp->next;
    }
    node* del = head;
    temp->next = del->next;
    del->next->prev = temp;
    delete del;
    return head;
}
node* del_end(node* head){
    node* temp = head;
    while(temp->next!= head){
        temp = temp->next;
    }
    head->prev = temp->prev;
    temp->prev->next = head;
    delete temp;
    return head;
}
node* del_in_between(node* head, int data){
    node* temp = head;
    while(temp->data!=data){
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
    return head;
}
node* insert(node* head){
    std::cout<<"Enter the data and index:";
    int data,index;
    std::cin>>data>>index;
    node* n= new node(data);
    node* temp=head;
    if(index==0){
        n->next=head;
        n->prev=head->prev;
        head->prev=n;
        n->prev->next=n;
    }
    else{
        int a=index;
        while(a>1){
            temp=temp->next;
            a--;
        }
        temp->next->prev=n;
        n->next=temp->next;
        temp->next=n;
        n->prev=temp;
    }
    return head;
}
int main(){
    node* head= create();
    print(head);
    head= insert(head);
    print(head);
    head = del_beg(head);
    print(head);
   // head = del_end(head);
   // print(head);
   // head = del_in_between(head,5);
   // print(head);
    return 0;
}