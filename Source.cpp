#include <iostream>
#include <string>

class Persoana
{
public:
	std::string nume;
	int varsta;
	double greutate;

	Persoana();
};

int main()
{
	Persoana p;
	system("pause");
}

Persoana::Persoana()
{
	nume = "Popescu Ion";
	varsta = 42;
	greutate = 81.5;

	std::cout << "Date" << std::endl;
	std::cout << std::endl;
	std::cout << "Nume: " << nume << std::endl;
	std::cout << "Varsta: " << varsta << std::endl;
	std::cout << "Greutate (kg): " << greutate << std::endl;
}