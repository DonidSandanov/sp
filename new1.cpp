#include <iostream>

#include <string>

#include <fstream>

#include "Windows.h"
using namespace std;

int main()

{
	
string name;
cout << "Enter your name: ";
cin >> name;
cout << "Hello, " << name << "\n";
cout << "Your ip address is:";	
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
setlocale(LC_ALL, "Russian");
string line;

ifstream IPFile;

int offset;

char* search0 = "IPv4-";

system("ipconfig > ip-adres.txt");

IPFile.open ("ip-adres.txt");

if(IPFile.is_open())

{

while(!IPFile.eof())

{

getline(IPFile,line);

if ((offset = line.find(search0, 0)) != string::npos)

{

line.erase(0,39);

cout << line << endl;

IPFile.close();

}

}

}

return 0;

}