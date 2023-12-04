#include <iostream>
#include <string.h>
using namespace std;
struct emp
{
private:
    int id;
    char name[10];
    int age;
public:
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
    emp e1;
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
    cout<<"\n";
    printStruct(e1);

    return 0;
}
void printStruct(emp e)
{
    cout<<"Id : "<<e.getId()<<",Age :"<<e.getAge()<<", Name:"<<e.getName();
}
