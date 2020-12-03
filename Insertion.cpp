#include<iostream>
int main(){
    int a[10],b,c;
    std::cout<<"Enter the size of array:";
    std::cin>>b;
    for(int i=0;i<b;i++){
        std::cin>>a[i];
    }
    std::cout<<"enter the index to insert element:";
    std::cin>>c;
    for(int i=b;i>c;i--){
        a[i]=a[i-1];
    }
    std::cin>>a[c];
    for(int i=0;i<=b;i++)
    {
        std::cout<<a[i];
    }
}