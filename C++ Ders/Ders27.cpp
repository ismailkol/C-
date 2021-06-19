#include<iostream>
using namespace std;
struct enployee{
int id;
string name;
string department;
};
int main() {

 enployee enployee1={12,"ismail","bilgisayar müh."};
 enployee enployee2;
 enployee2.id=13;
 enployee2.name="fatih";
 enployee2.department="isletme";

 cout << enployee1.name<< endl;
  cout << enployee2.name<< endl;
 enployee1.name="ismail kol";
 cout << enployee1.name<< endl;



return 0;
}
