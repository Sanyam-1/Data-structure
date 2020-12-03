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
    int data;
    std::cout<<"Enter the data:";
    std::cin>>data;
    node* head=NULL;
    while(data!=-1){
        node* n= new node(data);
        if(head==NULL){
            head = n;
        }
        else{
            node* temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next=n;
        }
        std::cout<<"Enter the data:";
        std::cin>>data;
    }
    return head;
}
int print(node* head){
    node* temp = head;
    while(temp!=NULL){
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
node* mid_node(node* head){
    node* temp=head;
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
node* merge(node* h1,node* h2){
    node* fh=NULL;
    node* ft=NULL;
        if(h1->data < h2->data){
            fh=h1;
            ft=h1;
            h1=h1->next;
        }
        else{
            fh=h2;
            ft=h2;
            h2=h2->next;
        }
    while(h1!=NULL && h2!=NULL)
    {
        if(h1->data < h2->data){
            ft->next=h1;
            ft=h1;
            h1=h1->next;
        }
        else{
            ft->next=h2;
            ft=h2;
            h2=h2->next;
        }
    }
        while(h1!=NULL){
            ft->next=h1;
            ft=h1;
            h1 = h1->next;
        }
        while(h2!=NULL){
            ft->next=h2;
            ft=h2;
            h2 = h2->next;
        }
    return fh;
}
node* merge_sort(node* head,node* tail){
    std::cout<<"exected:";
    if(head->next==NULL){
        return head;
    }
    node* temp = mid_node(head);
    node* h1=merge_sort(head,temp);
    node* h2=merge_sort(temp->next,tail);
    head=merge(h1,h2);
    std::cout<<"fully:";
    return head;
}
int main(){
    node* head =create();
    print(head);
    std::cout<<std::endl;
    node* tail=head;
    while(tail->next!=NULL){
       tail=tail->next;
       std::cout<<tail->data;
    }
    head = merge_sort(head,tail);
    print(head);
    std::cout<<std::endl;
    return 0;
}