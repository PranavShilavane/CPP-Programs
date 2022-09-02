#include <bits/stdc++.h>
using namespace std;
class Class
{
private:
    string className;

public:
    void setDetails(string name)
    {
        className = name;
    }
    void printDetails()
    {
        cout << "Class name : " << className << endl;
    }
};

class Student : public Class
{
private:
    string studentName;
    int rollNo;

public:
    Student(string studentName, int rollNo)
    {
        this->studentName = studentName;
        this->rollNo = rollNo;
    }
    void printDetailsSudent()
    {
        cout << "Student name : " << studentName << endl;
        cout << "Student Roll No : " << rollNo << endl;
    }
};

int main()
{
    Student s("Pranav", 173);
    s.setDetails("SY");

    s.printDetailsSudent();
    s.printDetails();

    return 0;
}