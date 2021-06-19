#include<iostream>
using namespace std;
struct address{
string cityName ;
int no;
};
struct employee{
int id;
string name;
string department;
address *address1;
};
int main(){
employee employee1;

  employee1.id=20;
  employee1.name ="ismail";
  employee1.department="Bilgisayar muh";

   address addres ={"istanbul",4};
   employee1.address1 =&addres;
   employee * ptr =&employee1;

   cout << ptr->address1->cityName << endl;
    cout << ptr->address1->no << endl;
return 0;
}
