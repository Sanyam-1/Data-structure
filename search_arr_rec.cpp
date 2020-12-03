#include<iostream>
int search(int a[],int size, int x)
{
    if(a[size-1]==x){
        return (size-1);
    }
    int ans = search(a,size-1,x);
    return ans;
}
int main()
{
    int a[10],size,x;
    std::cout<<"Enter the size of array:";
    std::cin>>size;
    for(int i=0;i<size;i++){
        std::cin>>a[i];
    }
    std::cout<<"Enter the element to be searched:";
    std::cin>>x;
    int ans=search(a,size,x);
    std::cout<<ans;
    return 0;
}