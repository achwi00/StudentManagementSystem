#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    string surname;
    string major;
    int yearOfStudy;
public:
    Student()=default;
    void setName(string name)
    {
      this->name=name;
    };
    void setSurname(string surname)
    {
        this->surname=surname;
    };
    void setMajor(string major)
    {
      this->major=major;
    };
    void setYearOfStudy(int yearOfStudy)
    {
        this->yearOfStudy=yearOfStudy;
    };
    string getName(){return name;};
    string getSurname(){return surname;};
    string getMajor(){return major;};
    int getYearOfStudy(){return yearOfStudy;};
};
class Group
{
private:
    int groupNumber;
    int placesLimit;
    int currentSize;
    Student* tab;

public:

    Group(int groupNumber)
    {
        this->groupNumber=groupNumber;
        placesLimit=10;
        currentSize=0;
        tab=new Student[10];

    };

    Student getTab(int i)
    {
      return tab[i];
    };

    void getDetails()
    {
        cout<<"\nGroup number: "<<groupNumber;
        cout<<"\nThe limit of places: "<<placesLimit;
        cout<<"\nCurrent size of the group: "<<currentSize<<endl;
        for (int i = 0; i < currentSize; ++i)
        {
            cout<<"Student "<<i<<": ";
            cout<<(getTab(i)).getName()<<endl;
        }
    };
    void addStudent(Student student)
    {
        if(currentSize<placesLimit)
        {
//            Student st;
//            st=student;
            tab[currentSize]=student;
            currentSize++;
            cout<<"valid operation";

        }
        else
        {
            cout<<"You have reached the limit of students in the group.";
        }

    };
    void changeSurname(Student student,string newSurname)
    {
        student.setSurname(newSurname);
    };


};


int main()
{
    Student st1;
    st1.setName("Kate");
    st1.setSurname("Smith");
    st1.setMajor("Computer Science");
    st1.setYearOfStudy(2);

    Student st2;
    st2.setName("Anne");
    st2.setSurname("Abrams");
    st2.setMajor("Psychology");
    st2.setYearOfStudy(3);

    Group gr1(1001);
    gr1.addStudent(st1);
    gr1.addStudent(st2);
    gr1.getDetails();
}
