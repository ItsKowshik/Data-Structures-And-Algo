#include <bits/stdc++.h>

using namespace std;

//Creating the student class;
class Student{
    private:
    int age;
    string name;
    int roll;
    public:
    void display(){
        printf("%s %d %d\n",name,roll,age);
    }

    int getAge(){
        return age;
    }

    void setAge(int age){
        age = age;
    }

    void setRoll(int roll){
        roll = roll;
    }

    int getRoll(){
        return roll;
    }

    void setName(string name){
        name = name;
    }

    string getName(){
        return name;
    }
};
