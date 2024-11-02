#include<iostream>
#include<string>

using namespace std;

struct strinfo
{
    string firstname;
    string fullname;
    int age;
    string city;

};

void Readinfo(strinfo &info)
{

    cout << "please enter my first name \n";
    cin >> info.firstname;

    cout << "please enter my full name \n";
    cin >> info.fullname;

    cout << "please enter mycity \n ";
    cin >> info.city;

    cout << " please enter age \n";
    cin >> info.age;

}

void printinfo(strinfo info)
{
    cout << "***********8***********\n";
    cout << "my first name " << info.firstname << endl;
    cout << " my fuul name" << info.fullname << endl;
    cout << "my city name " << info.city << endl;
    cout << "my age" << info.age << endl;
    cout << "***********8***********\n";
}

void Readpersonsinfo(strinfo person[100], int& howmanyper)
{
    cout << "please enter your number do you want\n";
    cin >> howmanyper;
    for (int i = 0; i <= howmanyper - 1; i++)
    {
        cout << "please enter num per" << i + 1 << endl;
        Readinfo (person[i]);
    }
    


}

void printpersoninfo(strinfo person[100], int howmanyper)
{
    for (int i = 0; i <= howmanyper - 1; i++) {
        cout << "number [" << i + 1 << " ]" << endl;
        printinfo(person[i]);
    }
}

int main()
{
    strinfo person[100];
    int howmanyper ;
    Readpersonsinfo(person, howmanyper);
    
    printpersoninfo(person,howmanyper );

    return 0;
}


