#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    long long id;
    int age;
    float cgpa;

    void setter()
    {
        cout << "Student name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Student ID: ";
        cin >> id;
        cout << "Student age: ";
        cin >> age;
        cout << "Student CGPA: ";
        cin >> cgpa;
        cin.ignore();
    }

    void getter()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Age: " << age << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

class CSE : public Student
{
public:
    string sub1, sub2, sub3;

    void set_sub()
    {
        cout << "*********CSE*********" << endl;
        cout << "Enter 1st subject name: ";
        cin >> sub1;
        cout << "Enter 2nd subject name: ";
        cin >> sub2;
        cout << "Enter 3rd subject name: ";
        cin >> sub3;
    }
    void get_sub()
    {
        cout << "Subject 1: " << sub1 << endl;
        cout << "Subject 2: " << sub2 << endl;
        cout << "Subject 3: " << sub3 << endl << endl;
    }
};

class EEE : public Student
{
public:
    string sub1, sub2, sub3;

    void set_sub()
    {
        cout << "*********EEE*********" << endl;
        cout << "Enter 1st subject name: ";
        cin >> sub1;
        cout << "Enter 2nd subject name: ";
        cin >> sub2;
        cout << "Enter 3rd subject name: ";
        cin >> sub3;
    }
    void get_sub()
    {
        cout << "Subject 1: " << sub1 << endl;
        cout << "Subject 2: " << sub2 << endl;
        cout << "Subject 3: " << sub3 << endl << endl;
    }
};

class BBA : public Student
{
public:
    string sub1, sub2, sub3;

    void set_sub()
    {
        cout << "*********BBA*********" << endl;
        cout << "Enter 1st subject name: ";
        cin >> sub1;
        cout << "Enter 2nd subject name: ";
        cin >> sub2;
        cout << "Enter 3rd subject name: ";
        cin >> sub3;
    }
    void get_sub()
    {
        cout << "Subject 1: " << sub1 << endl;
        cout << "Subject 2: " << sub2 << endl;
        cout << "Subject 3: " << sub3 << endl << endl;
    }
};

bool compare(Student a, Student b)
{
    if (a.age != b.age)
    {
        return a.age < b.age;
    }
    else
    {
        return a.cgpa > b.cgpa;
    }
}

int main()
{
    int dept;
    cout << "Which department's data do you want to give input?" << endl;
    cout << "Press 1 for CSE" << endl;
    cout << "Press 2 for EEE" << endl;
    cout << "Press 3 for BBA" << endl;
    cout << "Please enter => ";
    cin >> dept;

    const int N = 1e4+5;
    vector<CSE> cse_students(N);
    vector<EEE> eee_students(N);
    vector<BBA> bba_students(N);



    int n;
    switch (dept)
    {
    case 1:
        cout << "You have chosen the CSE department" << endl << endl;
        cout << "How many students' data do you want to give input?" << endl;
        cin >> n;
        {

            for (int i = 0; i < n; ++i)
            {
                cout<< (i <= 0 ? "": "Again, ");
                cse_students[i].setter();
                cse_students[i].set_sub();
                cout<< endl;
            }
            sort(cse_students.begin(), cse_students.end(), compare);
            for (int i = 0; i < n; ++i)
            {
                cout << i+1 << endl;
                cse_students[i].getter();
                cse_students[i].get_sub();
            }
        }
    //break;
    case 2:
        cout << "You have chosen the EEE department" << endl << endl;
        cout << "How many students' data do you want to give input?" << endl;
        cin >> n;
        {
            for (int i = 0; i < n; ++i)
            {
                cout<< (i <= 0 ? "": "Again, ");
                eee_students[i].setter();
                eee_students[i].set_sub();
                cout<< endl;
            }
            sort(eee_students.begin(), eee_students.end(), compare);
            for (int i = 0; i < n; ++i)
            {
                cout << i+1 << endl;
                eee_students[i].getter();
                eee_students[i].get_sub();
            }
        }
    //break;
    case 3:
        cout << "You have chosen the BBA department" << endl << endl;
        cout << "How many students' data do you want to give input?" << endl;
        cin >> n;
        {
            for (int i = 0; i < n; ++i)
            {
                cout<< (i <= 0 ? "": "Again, ");
                bba_students[i].setter();
                bba_students[i].set_sub();
                cout<< endl;
            }
            sort(bba_students.begin(), bba_students.end(), compare);
            for (int i = 0; i < n; ++i)
            {
                cout << i+1 << endl;
                bba_students[i].getter();
                bba_students[i].get_sub();
            }
        }
    //break;

    default:
        cout << "Please input a valid number!!!" << endl;
    }


    vector<variant<CSE, EEE, BBA>> res;
    res.push_back(cse_students[0]);
    res.push_back(eee_students[0]);
    res.push_back(bba_students[0]);


    //cout << res[0] << endl;
    for(auto x: res)cout << x.getter()<< endl;

    return 0;
}
























/*
#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    long long id;
    int age;
    float cgpa;

    void setter()
    {
        cout << "Student name: ";
        getline(cin, name);
        cout << "Student ID: ";
        cin >> id;
        cout << "Student age: ";
        cin >> age;
        cout << "Student CGPA: ";
        cin >> cgpa;

    }

    void getter()
    {
        cout << name << endl<< id<<endl<< age<< endl<< cgpa<< endl;
    }
};

class CSE: public Student
{
public:
    string sub1, sub2, sub3;

    void set_sub()
    {
        cout << "*********CSE*********"<< endl;
        cout << "Enter 1st subject name: ";
        cin >> sub1;
        cout << "Enter 2nd subject name: ";
        cin >> sub2;
        cout << "Enter 3rd subject name: ";
        cin >> sub3;
    }
    void get_sub()
    {
        cout <<"Subject 1: "<<  sub1 << endl <<"Subject 2: "<< sub2 << endl<< "Subject 3: "<< sub3 << endl << endl;
    }
};

class EEE: public Student
{
public:
    string sub1, sub2, sub3;

    void set_sub()
    {
        cout << "*********EEE*********"<< endl;
        cout << "Enter 1st subject name: ";
        cin >> sub1;
        cout << "Enter 2nd subject name: ";
        cin >> sub2;
        cout << "Enter 3rd subject name: ";
        cin >> sub3;
    }
    void get_sub()
    {
        cout <<"Subject 1: "<<  sub1 << endl <<"Subject 2: "<< sub2 << endl<< "Subject 3: "<< sub3 << endl << endl;
    }
};


class BBA: public Student
{
public:
    string sub1, sub2, sub3;

    void set_sub()
    {
        cout << "*********BBA*********"<< endl;
        cout << "Enter 1st subject name: ";
        cin >> sub1;
        cout << "Enter 2nd subject name: ";
        cin >> sub2;
        cout << "Enter 3rd subject name: ";
        cin >> sub3;
    }
    void get_sub()
    {
        cout <<"Subject 1: "<<  sub1 << endl <<"Subject 2: "<< sub2 << endl<< "Subject 3: "<< sub3 << endl<< endl;
    }
};




int main()
{
    int dept;
    cout << "Which depertments data you want to give inupt?"<< endl;
    cout << "Press 1 for CSE"<< endl;
    cout << "Press 2 for EEE"<< endl;
    cout << "Press 3 for BBA"<< endl;
    cout << "Please enter => ";

    cin >> dept;

    switch(dept)
    {
    case 1:
        cout << "You have choose CSE depertment"<< endl<< endl;
        cout << "How many students data you want to give input?"<< endl;
        {
            int n;
            cin >> n;
            CSE obj1[n];

            for(size_t i = 0; i < n; i++)
            {
                obj1[i].setter();
                obj1[i].set_sub();
                obj1[i].getter();
                obj1[i].get_sub();
            }

        }
        break;










    case 2:
        cout << "You have choose EEE depertment"<< endl;
        break;
    case 3:
        cout << "You have choose BBA depertment"<< endl;
        break;
    default:
        cout << "Please input a valid number!!!"<< endl;
    }


    /*
        CSE obj1;
        obj1.setter();
        obj1.getter();
        obj1.set_sub();
        obj1.get_sub();

        EEE obj2;
        obj2.setter();
        obj2.getter();
        obj2.set_sub();
        obj2.get_sub();

        BBA obj3;
        obj3.setter();
        obj3.getter();
        obj3.set_sub();
        obj3.get_sub();

    return 0;
};


*/


















