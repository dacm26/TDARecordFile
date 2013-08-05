#include "TDAFile.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	TDAFile archivo;
	char buffer[4]={'5','6','7','8'};
	archivo.open("prueba1.txt",ios_base::out,ios_base::app);
	archivo.write(buffer,4);
	archivo.flush();
	/*char buffer[4];
	archivo.open("prueba1.txt",ios_base::in);
	cout << archivo.tell()<< endl;
	archivo.seek(2,ios_base::cur);
	cout << archivo.tell()<< endl;
	archivo.read(buffer,4);
	cout << buffer<<endl;
	*/
	archivo.close();
	return 0;
}