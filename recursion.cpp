#include<iostream>
#include<conio.h>
int recur(int a[],int x,int b){
    if(a[0]==x){
        return 0;
    }
    int ans=recur(a+1,x,b-1);
    return ans+1;
}
int main(){
    int a[10],b,x;
    std::cout<<"Enter the size of array:";
    std::cin>>b;
    for(int i=0;i<b;i++)
    {
        std::cin>>a[i];
    }
    std::cout<<"Enter the element to search:";
    std::cin>>x;
   int y = recur(a,x,b);
   std::cout<<y;
    return 0;
}