#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    string group;
    string speciality;
    const int ID;
    const string adress;

public:
    Student() : ID(0), adress("")
    {
        name = "";
        group = "";
        speciality = "";
    }

    Student(string name, string group, string speciality, int ID, string adress)
        : name(name), group(group), speciality(speciality), ID(ID), adress(adress)
    {
    }

    string getName()
    {
        return name;
    }

    string getGroup()
    {
        return group;
    }

    string getSpeciality()
    {
        return speciality;
    }

    int getID()
    {
        return ID;
    }

    string getAdress()
    {
        return adress;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setGroup(string group)
    {
        this->group = group;
    }

    void setSpeciality(string speciality)
    {
        this->speciality = speciality;
    }

    void printStudent()
    {
        cout << "Name: " << name << endl;
        cout << "Group: " << group << endl;
        cout << "Speciality: " << speciality << endl;
        cout << "ID: " << ID << endl;
        cout << "Adress: " << adress << endl;
    }

    void changeGroup(string newGroup)
    {
        group = newGroup;
    }
};

int main()
{
    Student student("Alex", "IT-21", "Programming", 123, "Odesa");

    student.printStudent();

    student.changeGroup("IT-22");

    cout << endl;
    student.printStudent();

    return 0;
}