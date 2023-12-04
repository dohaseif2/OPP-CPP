#include <iostream>
#include <string.h>
using namespace std;
class Person
{
protected:
    int id;
    int age;
    char name[20];
public :
    Person()
    {
        id =-1;
        strcpy(name,"undefined");
        age=0;
    }
    Person(int _id,char* _name)
    {
        id =_id;
        strcpy(name,_name);
    }
    Person(int _id,char* _name,int _age)
    {
        id =_id;
        strcpy(name,_name);
        age=0;
    }
    void setId(int _id)
    {
        id=_id;
    }
    void setName(char* _name)
    {
        strcpy(name,_name);
    }
    void setAge(int _age)
    {
        age=_age;
    }
    int getId()
    {
        return id;
    }
    char* getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    void print()
    {
        cout <<id<<":"<<age<<":"<<name;
    }
};
class Student:public Person
{
    char grade;
public :
    Student()
    {
        grade='a';
    }
    Student(int _id,char* _name):Person(_id,_name)
    {
        grade='a';
    }

    Student(int _id,char* _name,int _age):Person(_id,_name,_age)
    {
        grade='a';
    }
    Student(int _id,char* _name,int _age,char _grade):Person(_id,_name,_age)
    {
        grade=_grade;
    }

    void setGrade(char _grade)
    {
        grade=_grade;
    }
    char getGrade()
    {
        return grade;
    }
    void printStudent()
    {
        cout<<"\nStudent Data :";
        print();
        cout<<":"<<grade;
    }
};
class Employee:public Person
{
    int salary;
public :
    Employee()
    {
        salary=1000;
    }
    Employee(int _id,char* _name):Person(_id,_name)
    {
        salary=1000;
    }
    Employee(int _id,char* _name,int _age):Person(_id,_name,_age)
    {
        salary=1000;
    }
    Employee(int _id,char* _name,int _age,int _salary):Person(_id,_name,_age)
    {
        salary=_salary;
    }

    void setSalary(char _salary)
    {
        salary=_salary;
    }
    char getSalary()
    {
        return salary;
    }
    void printEmployee()
    {
        cout<<"\nEmployee Data :";
        print();
        cout<<":"<<salary;
    }
};
int main()
{
    Student s1(2,"ahmed",18,'c');
    s1.printStudent();
    Employee e1(3,"ali",30,4000);
    e1.printEmployee();

    return 0;
}
