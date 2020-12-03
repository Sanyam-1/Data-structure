#include<iostream>
int s(int a[],int size, int x){
    int ar[10];
    if(a[0]==x){
        ar[0]=a[0]; 
    }
}
int main(){
    int a[10],size,x;
    std::cin>>size;
    for(int i=0;i<size;i++){
        std::cin>>a[i];
    }
    std::cout<<"Enter the element to search:";
    std::cin>>x;
    int ans= s(a,size,x);
    std::cout<<ans;
    return 0;
}