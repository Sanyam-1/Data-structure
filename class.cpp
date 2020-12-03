#include<iostream>
class student{
    int roll,age;
    public:
    student(){

    }
    student(int a ,int b){
        roll=a;
        age = b;
    }
    int display(){
        std::cout<<"Roll Number:"<<roll<<std::endl;
        std::cout<<"Age:"<<age<<std::endl;
        return 0;
    }
};
int main(){
    student s1(10,15);
    s1.display();
    student s2(s1);
    s2.display();
    student *s3 = new student(12,16);
    (*s3).display();
    student s4(*s3);
    s4.display();
    student *s5= new student;
    *s5 = *s3;
    (*s5).display();
    return 0;
}