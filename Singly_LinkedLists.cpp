#include<iostream>
class node{
    public:
    int a;
    node *next;
    node(int b){
        this->a=b;
        next=NULL;
    }
};
node* input(){
    int data;
    std::cout<<"Enter Data:";
    std::cin>>data;
    node* head = NULL;
    node* tail=NULL;
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
        std::cout<<"Enter Data:";
        std::cin>>data;
    }
    return head;
}
node* insert(node* head,int a,int index){
    node* temp=head;
    int c;
    node* newnode = new node(a);
    if(head==NULL){
        head = newnode;
        return head;
    }
    if(index==0){
        newnode->next=head;
        head = newnode;
        return head;
    }
    else{
        c=0;
        while(c < index-1){
            temp = temp->next;
            c++;
        }
        newnode->next=temp->next;
        temp->next = newnode;
    }
    return head;
}
int print (node *head)
{
    node *temp = head;
    while(temp!=NULL){
        std::cout<<temp->a<<" ";
        temp = temp -> next;
    }
    std::cout<<std::endl;
    return 0;
}
int search(node *head){
    node* temp=head;
    if(head==NULL){
        std::cout<<"Create a node first:";
    }
    int x,y=0;
    if(head!=NULL){
        std::cout<<"Enter the value to be searched:";
        std::cin>>x;
        while(temp->a!=x && temp->next!=NULL){
            temp=temp->next;
            y++;
        }
        if(temp->a==x){
            std::cout<<"Element found at index:"<<y;
        }
        else if(temp->a!=x && temp->next==NULL){
            std::cout<<"Element is not in Linked List";
        }
    }
    return 0;
}
node* del_node(node* head,int data){
    node* temp = head;
    node* x = NULL;
    if(head->a==data){
        head = head->next;
        delete(temp);
        return head;
    }
    else{
        while(temp->a!=data){
            x=temp;
            temp = temp->next;
        }
        x->next=temp->next;
        delete(temp);
        return head;
    }
}
int main(){
    node* head= input();
    print(head);
   // search(head);
   int a,b,data;
   std::cout<<"Enter the data and its index to insert:";
   std::cin>>a>>b;

   head = insert(head,a,b);
   print(head);
   std::cout<<"Enter the value to delete:";
   std::cin>>data;
   head=del_node(head,data);
   print(head);
   return 0;
}
/*int main(){
    node ob1(1),ob2(2),ob3(3),ob4(4),ob5(5);
    node *head =&ob1;
    ob1.next=&ob2;
    ob2.next=&ob3;
    ob3.next=&ob4;
    ob4.next=&ob5;
    print(head);
}*/