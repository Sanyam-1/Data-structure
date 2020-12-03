#include<iostream>
int m_sort(int a[],int s,int e){
    if(s>=e){
        return 0;
    }
    int mid=(e+s)/2;
    m_sort(a,s,mid);
    m_sort(a,mid+1,e);
    int k=s; 
    int l=mid+1;
    int c[10];
    int i=0;
    while(k<=mid && l<=e){
        if(a[k]<a[l]){
            c[i++]=a[k++];
        }
        else{
            c[i++]=a[l++];
        }
    }

    for(i=s;i<e-s+1;i++)
    {
        std::cout<<a[i];
        }
    std::cout<< std::endl;
    return 0;
}
int main(){
    int a[10],b,size,s=0,e;
    std::cout<<"Enter the Size of the array: ";
    std::cin>>size;
    e=size-1;
    for(int i=0;i<size;i++){
        std::cin>>a[i];
    }
    b=  m_sort(a,s,e);
    return 0;

}
