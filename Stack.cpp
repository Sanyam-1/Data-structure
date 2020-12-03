#include<iostream>
class stack{
    int *data;
    int next_index;
    int capacity;
    public:
    stack(int size){
        data = new int[size];
        next_index=0;
        capacity = size;
    }
    int push(int a){
        if(next_index==capacity){
            std::cout<<"Stack is full:\n";
            return -1;
        }
            data[next_index]=a;
            next_index++; 
        return 1;
    }
    bool empty(){
        return next_index==0;
    }
    int pop(){
        if(empty()){
            std::cout<<"Stack is Empty:"<<std::endl;
        }
        else{
        std::cout<<"Deleted Element is : "<<data[--next_index]<<std::endl;
        }
        return 0;
    }
    void display(){
        if(empty()){
            std::cout<<"Insert elements in stack first:";
            return;
        }
        for(int i=0;i<next_index;i++){
            std::cout<<"Element"<<i<<" is:"<<data[i]<<std::endl;
        }
        return;
    }
};
int main(){
    int size,data;
    std::cout<<"Enter the size:";
    std::cin>>size;
    stack s(size);
    int f=0;
    while(f!=-1){
        std::cout<<"Enter the data:";
        std::cin>>data;
        f=s.push(data);
    }
    s.display();
    s.pop();
    s.display();
    return 0;
}