#include<iostream>
using namespace std;
class son;

class father
{
char name[20];
int cash;
int gold;

public:
void set_father();
friend void income_tax(father, son);
};

void father::set_father()
{
cout << "Enter father details" << endl;
cin >> name >> cash >> gold;
}

class son
{
char name[20];
int cash;
int gold;

public:
void set_son();
friend void income_tax(father, son);
};

void son::set_son()
{
cout << "Enter son details" << endl;
cin >> name >> cash >> gold;
}

void income_tax(father f, son s)
{
int t_cash = f.cash + s.cash;
int t_gold = f.gold + s.gold;

if(t_cash>100000 || t_gold>300)
cout << "Pay Tax" << endl;
else
cout << "clean" << endl;
}

int main()
{
father f;
son s;
f.set_father();
s.set_son();
income_tax(f,s);
}
