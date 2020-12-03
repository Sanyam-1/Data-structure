#include<iostream>
int main(){
    int a[10],b;
    std::cout<<"Enter the size of array:";
    std::cin>>b;
    for (int i = 0; i < b; i++)
    {
        std::cin>>a[i];
    }
    int sum=0;
    for (int i = 0; i <b; i++)
    {
        std::cout<<a[i]<<std::endl;
        sum+= a[i];
    }
    std::cout<<sum;
    return 0;
       
}