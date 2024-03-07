#include <iostream>
#include <iomanip>
#include<string>
#include<windows.h>
#include"Header.h"

using namespace std;

void Student::Age(int age_)
{
    age = age_;
}
void Student::Stepend(int stependia_)
{
    stependia = stependia_;
}
void Student::Gend(char gend_)
{
    gend = gend_;
}
int Student::next_age() { return age + 1; }
int Student::P_Stependia(int s)
{
    return stependia + s;
}
void Student::Vivod() {
    cout << id << " "
        << fio << " " << gend << " " << age << " "
        << stependia << " " << gruppa << endl;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Student Zaharov;
    Zaharov.id = 1;
    Zaharov.fio = "Захаров Алексей Александрович ";
    Zaharov.Age(17);
    Zaharov.Gend('M');
    Zaharov.Stepend(999);
    Zaharov.gruppa = "2oibas-1222";
    Zaharov.Vivod();
    cout << "Захаров Next year =  "
        << Zaharov.next_age() << ";  ";
    cout << "Захаров Big salary =  "
        << Zaharov.P_Stependia(1000) << endl;
    Student Guseynov;
    Guseynov.id = 2;
    Guseynov.fio = "Гусейнов Ниджат Анарович";
    Guseynov.Age(18);
    Guseynov.Gend('M');
    Guseynov.Stepend(0);
    Guseynov.gruppa = "2oibas-1222";
    Guseynov.Vivod();
    cout << "Guseynov Next year =  "
        << Guseynov.next_age() << ";  ";
    cout << "Radionov Big salary =  "
        << Guseynov.P_Stependia(1000) << endl;
}