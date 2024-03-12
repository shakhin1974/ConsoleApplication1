#include <iostream>
#include<string>
#include <algorithm>
#include<windows.h>
#include"Header.h"
#include <ctype.h>
using namespace std;
int main()
{   SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Person Zaharov; 
    Zaharov.id = 1;
    Zaharov.Age(17);  
    Zaharov.Fio("Захаров Арсен");
    Zaharov.Gend('М');
    Zaharov.Parents("Максим","Захаров");
    Zaharov.Vivod(); 
    
    
}
