#include<bits/stdc++.h>
using namespace std;

class Module{
    public:
    int moduleNo,duration;
    string moduleName,tentativeStartDate;
    float fees;
};
static unordered_map<int,Module> moduleRecord;

void addModule();
void updateModule();
void displayAllModuleInfo();