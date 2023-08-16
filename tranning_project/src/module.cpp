#include<iostream>
#include "module.h"
using namespace std;

void addModule(){
    Module m;
    cout<<"enter module no: \n";
    cin>>m.moduleNo;
    if (cin.fail()){
        cin.clear(); cin.ignore(512, '\n');
        cout << "Not a number \n";
        addModule();
        return;
    }
    if(moduleRecord.find(m.moduleNo)!=moduleRecord.end()){
        cout<<"Record Already Exits!\n";
        updateModule();
        return;
    }
    cout<<"enter name: \n";
    cin.ignore();
    getline(cin,m.moduleName);
    cout<<"enter duration(No of Months): \n";
    cin>>m.duration;
    cout<<"enter fees(INR): \n";
    cin>>m.fees;
    cout<<"enter tentativeStartDate: \n";
    cin>>m.tentativeStartDate;
    moduleRecord[m.moduleNo]=m;
}
void updateModule(){
    int moduleNo;
    cout<<"enter Module no: \n";
    cin>>moduleNo;
    if (cin.fail()){
        cin.clear(); cin.ignore(512, '\n');
        cout << "Not a number \n";
        updateModule();
        return;
    }
    if(moduleRecord.find(moduleNo)==moduleRecord.end()){
        cout<<"No Record Found!\n";
        updateModule();
        return;
    }
    Module m = moduleRecord[moduleNo];
    cout<<"Previous Details \n"<<"Module No: "<<m.moduleNo<<"\n"<<"Module Name: "<<m.moduleName<<"\n"<<"Fees: "<<m.fees<<"\n"<<"Durations: "<<m.duration<<"\n"<<"Tentative Start Date: "<<m.tentativeStartDate<<endl;
    cout<<"update details \n";

    cout<<"enter name: \n";
    cin>>m.moduleName;
    cout<<"enter duration(No of Months): \n";
    cin>>m.duration;
    cout<<"enter fees(INR): \n";
    cin>>m.fees;
    cout<<"enter date of birth: \n";
    cin>>m.tentativeStartDate;
    moduleRecord[m.moduleNo]=m;
}
void displayAllModuleInfo(){
    int i=1;
    if(moduleRecord.size()==0){
        cout<<"Record Empty!"<<endl;
        return;
    }
    for(auto x: moduleRecord){
        Module m= x.second;
        cout<<i<<"--> \n"<<"Module No: "<<m.moduleNo<<"\n"<<"Module Name: "<<m.moduleName<<"\n"<<"Fees: "<<m.fees<<"\n"<<"Durations: "<<m.duration<<"\n"<<"Tentative Start Date: "<<m.tentativeStartDate<<endl;
        i++;
    }
}
