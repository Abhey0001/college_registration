#include<iostream>
#include<bits/stdc++.h>
#include "student.h"
#include "module.h"
using namespace std;

int main(){
    int input;
    while (true)
    {
        cout<<"\n# College Registration System #"<<endl;
        cout<<"0-> Exit \n1-> Add Record \n2-> Update Record \n3-> displayAllStudentRecord \n4--> addModule \n5--> updateModule \n6--> displayAllModuleInfo"<<endl;
        cin>>input;
        if (cin.fail()){
            cin.clear(); cin.ignore(512, '\n');
            cout << "Not a number";
            continue;
        }
        else if(input==0) break;
        else if(input==1) addStudentRecord();
        else if(input==2) updateStudent();
        else if(input==3) displayAllStudentRecord();
        else if(input==4) addModule();
        else if(input==5) updateModule();
        else if(input==6) displayAllModuleInfo();
        else{
            cout<<"Invalid Input \n";
        }
    }
    return 0;
}