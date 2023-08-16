#include<bits/stdc++.h>
using namespace std;


class Student{
    public:
    int admNo;
    string name,bloodGrp,adhar,dob;
};

static unordered_map<int,Student> studentRecord;

void addStudentRecord();
void updateStudent();
void displayAllStudentRecord();