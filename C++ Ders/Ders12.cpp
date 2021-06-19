#include<iostream>

using namespace std;

int main(){

string sys_username="ismail_kol";
string sys_password="123456";

string username;
string password;

while(true){
    cout << "Kullanici adi:";
    cin >> username;
    cout <<"Paralo:";
    cin >> password;

    if(username==sys_username&& password==sys_password){
        cout<< "Hosgeldiniz."<< username<<endl;
        break;
    }
      else if(username!=sys_username&& password==sys_password){
        cout<< "Kullanici adini yanlýs girdiniz";

    }
      else if(username==sys_username&& password!=sys_password){
        cout<< "Sifreyi yanlis girdiniz";

    }
    else {
        cout <<"Sifre ve Kullanici adini yanlis girdiniz!"<< endl;
    }

}

return 0;
}
