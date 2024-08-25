#include <iostream>
using namespace std;

struct student{
    string name;
    int roll;
    float persentage;
};

int main (){
    struct student s[5];
    s[0]={"aditi jaswal",1,97.5};
    s[1]={"sahil jaswal",2,99.8};
    s[3]={"golu jaswal",3,88.9};
    cout<<s[0].name<<" "<<s[0].roll<<" "<<s[0].persentage;


    return 0;
    }