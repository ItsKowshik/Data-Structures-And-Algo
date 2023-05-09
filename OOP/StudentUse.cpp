#include <bits/stdc++.h>
#include "Students.cpp"

using namespace std;

int main(){
    //Create object statically;
    Student s1;

    //Create object dyanmically;
    Student * s2 = new Student;

    //Set properties of object statically;
    s1.setName("Kowshik Arko Dey");
    s1.setAge(23);
    s1.setRoll(1);

    printf("%s %d %d\n",s1.getName(),s1.getAge(),s1.getRoll());

    //Set properties of object dyanmically
    (*s2).setName("Hrittik Dey");
    s2->setAge(29);
    s2->setRoll(2);

    printf("%s %d %d\n",s2->getName(),s2->getAge(),s2->getRoll());

    //Calling a member function
    s1.display();
    s2->display();
}   