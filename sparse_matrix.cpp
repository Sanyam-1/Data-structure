#include<iostream>
int main(){
    int t=0;
    int a[5][5],s[5][5];
    for (int i = 0; i <5; i++)
    {
        for(int j=0;j<5;j++){
            std::cout<<"Input row "<<i<<":";
            std::cin>>a[i][j];
        }
    }
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            std::cout<<a[i][j];
            if(a[i][j]>0)
            {
                s[0][t]=i;
                s[1][t]=j;
                s[2][t]=a[i][j];
                t++;
            }
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    for(int i=0;i<3;i++){
        for(int k=0;k<t;k++){
            std::cout<<s[i][k];
        }
        std::cout<<std::endl;
    }
    return 0;
}