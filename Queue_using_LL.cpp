#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
node* front = NULL;
node* rear = NULL;
int size = 0;
void create(){
    int data;
    cout<<"Enter the data ::";
    cin>>data;
    while(data!=-1){
        node* n = new node(data);
        if(front == NULL && rear == NULL){
            front = n;
            rear = n;
            size++;
        }
        else{
            rear->next = n;
            rear = n;
            size++;
        }
        cout<<"Enter the data ::";
        cin>>data;
    }
}
void dequeue(){
    if(front == NULL && rear == NULL){
        cout<<"Queue is Empty:";
    }
    else{
        node* n = front;
        front = front->next;
        cout<<"Deleted element ::"<<n->data<<" \n";
        delete n;
        size--;
    }
}
void display(){
    node* n = front;
    cout<<"Display ::";
    while(n != rear){
        cout<<n->data<<" ";
        n = n->next;
    }
    cout<<n->data<<endl;
}
void enqueue(){
    int data;
    cout<<"Enter the data to insert in Queue :: ";
    cin>>data;
    node* n = new node(data);
    if(front == NULL && rear == NULL){
        front = n;
        rear = n;
        size++;
    }
    else{
        rear->next = n;
        rear = n;
        size++;
    }
}
int main(){
    create();
    display();
    dequeue();
    display();
    enqueue();
    display();
}