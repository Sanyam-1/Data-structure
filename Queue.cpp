#include<iostream>
#include<stdlib.h>
template<typename T>
class queue{
    T *data;
    int capacity,size;
    int front,rear;
    public:
    queue(int s){
        this->capacity=s;
        data = new T[capacity];
        size=0;
        front=-1;
        rear=0;
    }
    int getsize(){
        return size;
    }
    bool Empty(){
        return size==0;
    }
    T top(){
        if(Empty()){
            std::cout<<"Queue is Empty\n";
            return -1;
        }
        return data[front];
    }
    int enqueue(){
        if(size==capacity){
            std::cout<<"Queue is full\n";
            return 0; 
        }
        T element;
        std::cout<<"Enter a Element to insert:";
        std::cin>>element;
        data[rear]=element;
        rear=(rear+1)%capacity;
        size++;
        if(front==-1){
            front=0;
        }
        return 0;
    }
    T dequeue(){
        if(Empty()){
            std::cout<<"Queue is Empty:\n";
            return 0;
        }
        T ans = data[front];
        front = (front+1)%capacity;
        size--;
        if(size==0){
            front = -1;
            rear = 0;
        }
        return ans;
    }
    int display(){
        if(Empty()){
            std::cout<<"Queue is Empty:\n";
            return 0;
        }
        for(int i=0 ; i<size ; i++){
            std::cout<<data[(front+i)%capacity]<<std::endl;
        }
        return 0;
    }
};
int main(){
    int size,ch;
    std::cout<<"Enter the size of Queue to create:";
    std::cin>>size;
    queue<int> q(size);
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