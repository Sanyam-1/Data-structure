#include<iostream>
class node{
    public:
    int data;
    node* next;
    node(int a){
        this->data=a;
        this->next=NULL;
    }
};
node* create(){
    node* head=NULL;
    int data;
    std::cout<<"Enter the data:";
    std::cin>>data;
    while(data!=-1){
        node* n = new node(data);
    if(head==NULL){
        head = n;
    }
    else{
        node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = n;
        
    }
    std::cout<<"Enter data:";
    std::cin>>data;
    }
    return head;
}
node* insert(node* head,int data, int index){
    node* n=new node(data);
    if(head==NULL){
        std::cout<<"Create Linked List first:";
        return head;
    }
    if(index==0){
        n->next=head;
        head = n;
        return head;
    }
    node* n1=insert(head->next,data,index-1);
    head->next=n1;
    return head;
}
node* del_node(node* head,int data){
    if(head==NULL){
        std::cout<<"Create Linked List first:";
        return NULL;
    }
    if(head->data == data ){
        node* temp=head->next;
        delete(head);
        head = temp;
        return head;
    }
    node* n=del_node(head->next,data);
    head->next=n;
    return head;
}
int print (node *head)
{
    node *temp = head;
    int a=0;
    while(temp!=NULL){
        std::cout<<temp->data<<" ";
        temp = temp -> next;
        a++;
    }
    std::cout<<std::endl;
    return a;
}
int main(){
    node* head = create();
    int length=0;
    length=print(head);
    std::cout<<"Length of Linked List is:"<<length;
    int data,index;
    std::cout<<"Enter the data and index to insert:";
    std::cin>>data>>index;
    insert(head,data,index);
    print(head);
    std::cout<<"enter the data to delete:";
    std::cin>>data;
    head = del_node(head,data);
    print(head);
    return 0;
}