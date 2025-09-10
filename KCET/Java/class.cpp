#include <iostream>
#include <string>
//1. declare a class
class Person {
    //class members
    std::string name; int age;
    //Method to intiialize the class members
    void intialize(std::string personname, int personage)
    {
        name=personname;
        age=personage;
    }
    // Method to display the class members
    class members void display()
    {
        std::cout<<"Name:"<<name<<std::endl;
        std::cout<<"Age:"<<age<<std::endl;
            }
};
int main()
{
    //craete an aobject of the person class
    Person p1;
    // 2. Intialize the contents of the class member
    p1.intialize("Mushtaq",30);
    //3. Dsplay the contents of the class member
    p1.display();
    return 0;
}