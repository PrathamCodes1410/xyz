#include<iostream>

using namespace std;

struct employee
{
    int empId;
    float empSalary;
    char empRank;
};

int main(){

    struct employee pratham;
    pratham.empId = 1;
    pratham.empRank = 'S';
    pratham.empSalary = 15000000;

    cout<<pratham.empSalary<<endl;
    return 0;
}