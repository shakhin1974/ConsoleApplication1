#pragma once
#include<string>
using namespace std;
 
class Person
{
    string fio; int age;  char gend; string adress;
    long long phone; string work;
    string parents; string child;
public:
    int id{};  
      void Fio(string fio_)
    { if (fio_ >  "А" && fio_ < "Я")
        { fio = fio_; }
        else
            fio = "#";     }
      void Age(int age_) 
    { if (age_  <= 101 && age_ >=0 ) {  age = age_;  }
        else { age = 0; }     };
    void Gend(char gend_)
    { if (gend_ == 'М' or gend_ == 'Ж')
        { gend = gend_;   }
        else
            gend = '0';}
    void Parents(string name, string sur_name) {
        if (name > "А" && name < "Я" && 
            sur_name> "А" && sur_name < "Я")
        {  parents = "Отец " + name + ' ' + sur_name; }
        else
            parents = "0";   }
    void Vivod() 
    {
cout << id << " "<< fio << " "   << age 
<< " "<< gend << " "<<parents<<' ' << endl;
    }
};
