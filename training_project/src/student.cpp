#include<bits/stdc++.h>
#include "student.h"
using namespace std;

void addStudentRecord(){
    Student s;
    cout<<"enter addmission no: \n";
    cin>>s.admNo;
    if (cin.fail()){
        cin.clear(); cin.ignore(512, '\n');
        cout << "Not a number\n";
        addStudentRecord();
        return;
    }
    if(studentRecord.find(s.admNo)!=studentRecord.end()){
        cout<<"Record Already Exits!\n";
        addStudentRecord();
        return;
    }
    cout<<"enter name: \n";
    cin.ignore();
    getline(cin,s.name);
    cout<<"enter blood group: \n";
    cin>>s.bloodGrp;
    cout<<"enter aadharcard no: \n";
    cin>>s.adhar;
    cout<<"enter date of birth: \n";
    cin>>s.dob;
    studentRecord[s.admNo]=s;
}
void updateStudent(){
    int id;
    cout<<"enter student id: \n";
    cin>>id;
    if (cin.fail()){
        cin.clear(); cin.ignore(512, '\n');
        cout << "Not a number\n";
        updateStudent();
        return;
    }
    if(studentRecord.find(id)==studentRecord.end()){
        cout<<"No Record Found!\n";
        return;
    }
    Student s = studentRecord[id];
    cout<<"student Previous info: \n"<<"Addmission no: "<<s.admNo<<"\n"<<"Name: "<<s.name<<"\n"<<"Aadhar No: "<<s.adhar<<"\n"<<"Blood Group: "<<s.bloodGrp<<"\n"<<"Date Of Birth: "<<s.dob<<endl;
    cout<<"enter new details \n";

    cout<<"enter name: \n";
    cin>>s.name;
    cout<<"enter blood group: \n";
    cin>>s.bloodGrp;
    cout<<"enter aadharcard no: \n";
    cin>>s.adhar;
    cout<<"enter date of birth: \n";
    cin>>s.dob;
    studentRecord[s.admNo]=s;
}
void displayAllStudentRecord(){
    int i=1;
    if(studentRecord.size()==0){
        cout<<"Record Empty!"<<endl;
        return;
    }
    for(auto m:studentRecord){
        Student s = m.second;
        cout<<i<<"--> \n"<<"Addmission no: "<<s.admNo<<"\n"<<"Name: "<<s.name<<"\n"<<"Aadhar No: "<<s.adhar<<"\n"<<"Blood Group: "<<s.bloodGrp<<"\n"<<"Date Of Birth: "<<s.dob<<endl;
        i++;

    }
}