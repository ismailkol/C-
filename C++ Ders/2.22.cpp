#include<iostream>

using namespace std;

int main(){

string arrayy[]={"ismail","samet","furkan"};
string *ptr=arrayy;
cout << ptr+1<< endl;
cout << *(ptr +1)<< endl;// alttaký durum ýle aynýdýr
cout << ptr[1]<< endl;// Bu kullaným daha cok kullanýlmaktadýr.



return 0;
}

