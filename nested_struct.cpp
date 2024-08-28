#include <iostream>
#include <string>
using namespace std;

struct address{
    int house_no;
    string street_name;
};

struct student{
    string name;
    int rollno;
    address addr;

};

int main()
{
    student aditi;
    aditi.name = "aditi";
    aditi.rollno= 2013;

    aditi.addr.house_no = 93;
    aditi.addr.street_name = "the_beatiful_city";


    cout << aditi.name << endl;
    cout << aditi.rollno << endl;
    cout << aditi.addr.house_no << endl;
    cout << aditi.addr.street_name<< endl;
    return 0;
}