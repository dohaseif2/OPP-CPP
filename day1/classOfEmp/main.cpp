#include <iostream>
#include <string.h>
using namespace std;
class emp
{
    int id;
    char name[10];
    int age;
public:
    emp()
    {
    }
    emp(int _id,char* _name)
    {
        id=_id;
        strcpy(name,_name);
        age=10;
    }
    emp(int _id,char* _name,int _age)
    {
        id=_id;
        strcpy(name,_name);
        age=_age;
    }
    ~emp()
    {
        cout<<"\ndestroy";
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
    int getAge()
    {
        return age;
    }
    char* getName()
    {
        return name;
    }
    void print()
    {
        cout<<"Id : "<<id<<",Age :"<<age<<", Name:"<<name;
    }
};
void printStruct(emp e);

int main()
{
    int id,age;
    char name[10];
    /*emp e1;

    cout<<"enter id \n";
     cin>>id;
     e1.setId(id);

     cout<<"enter age \n";
     cin>>age;
     e1.setAge(age);

     cout<<"enter name \n";
     cin>>name;
     e1.setName(name);

     e1.print();
     cout<<"\n======================\n";
     printStruct(e1);
     */
    emp e2(10,"ali");
    e2.print();
    cout<<"\n======================\n";
    emp e3(20,"ahmed",20);
    e3.print();

    return 0;
}
void printStruct(emp e)
{
    cout<<"Id : "<<e.getId()<<",Age :"<<e.getAge()<<", Name:"<<e.getName();
}
