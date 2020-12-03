#include<iostream>
int main(){
    int a[10]={1,2,3,4,5,6,7},b,f=-1;
    std::cout<<"Enter the Number to search";
    std::cin>>b;
    for(int i=0;i<7;i++){
        if(a[i]==b){
            std::cout<<"Element Found at index:"<<i;
            f=0;
            break;
        }
    }
    if(f==-1){
        std::cout<<"Element not found";
    }
    return 0;
}