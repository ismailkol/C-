#include<iostream>
#include"Create.h"

using namespace std;

Create::Create(int id, string massege)
	:ObjectId(id), message(massege) {
	cout << "object" << ObjectId << "constractýon run" << message << endl;
}
Create::~Create()
{
	cout << "object" << ObjectId << "destructon" << message << endl;
}

Create first(1, "ismail");
int main() {

	Create second(2, "ali");
	static Create tree(3, "veli");
	return 0;
	// ilk normaller sonra statýkler sonra global nesneler yýkýlýr.
	//en en basta fonksiyon ile oluþturulan nesneler yýkýlýr cunku fonksýyonun ýsý býtýnce fonksýyon
	//kapatýlacagý ýcýn nesnelerýnýde otamatýk olarak yýkmak zorunda kalacaktýr.
}
