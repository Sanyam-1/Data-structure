#include<iostream>
#include<stdlib.h>
template<typename T>
class node{
    public:
    T data;
    node *next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
template<typename T>
class Queue{
    node<T> *head = NULL;
    node<T> *tail = NULL;
    int size = 0;
    public:
    int enqueue(){
        T element;
        std::cout<<"Enter the data:";
        std::cin>>element;
        node<T> *n = new node<T>(element);
        if(head==NULL){
            head = n;
            tail=n;
            size++;
            return 0;
        }
        tail->next = n;
        tail = n;
        size++;
        return 0;
    }
    int getsize(){
        return size;
    }
    int top(){
        return head->data;
    }
    bool Empty(){
        return size==0;
    }
    int dequeue(){
        if(head==NULL){
            std::cout<<"Create Queue first:";
            return 0;
        }
        node<T> *n = head;
        head = head->next;
        T ans = n->data;
        delete n;
        size--;
        return ans;
    }
    int display(){
        if(head== NULL){
            std::cout<<"Create queue first:";
            return 0;
        }
        node<T> *n=head;
        while(n){
            std::cout<<n->data<<std::endl;
            n = n->next;
        }
        return 0;
    }
};
int main(){
    Queue<int> q;
    int ch;
     char c = 'y';
    while(c=='y' || c=='Y'){
        std::cout<<"Enter your choice \n1.Insert\n2.Delete\n3.Top Element\n4.If Empty\n5.Size\n6.Display\n7.exit"<<std::endl;
        std::cin>>ch;
        switch(ch){
            case 1:
            q.enqueue();
            break;
            case 2:
            std::cout<<"Deleted Element is:"<<q.dequeue()<<std::endl;
            break;
            case 3:
            std::cout<<"Top element is:"<<q.top()<<std::endl;
            break;
            case 4:
            std::cout<<q.Empty()<<std::endl;
            break;
            case 5:
            std::cout<<q.getsize()<<std::endl;
            break;
            case 6:
            q.display();
            break;
            case 7:
            exit(0);
            default:
            std::cout<<"Enter a valid choice:\n";
        }
        std::cout<<"Do you want to continue?";
        std::cin>>c;
    }
}