#include "Kula.h"
#include <iostream>
#include <cstdlib>
#include <math.h>
using std::cout;
using std::endl;
constexpr double M_PI{ 3.14159265358979323846 };//musia³em sam wprowadziæ, gdy¿ w moim kompilatorze PI nie jest zdefiniowane w bibliotece math.h .

	Kula::Kula(int R)
	{
		this->R = R;
	}
	void Kula::Pole_Kuli()
	{
	   Pole=4*(M_PI)*pow(R,2);
	}
	void Kula::objetosc_Kuli()
	{
		objetosc=(4/3)*M_PI*pow(R, 3);
	}
	void Kula::wyswietl(void)
	{
		cout << "Pole kuli o promieniu r rowne " << R << " wynosi " << Pole << " "
			"A objetosc wynosi " << objetosc;
	}
	Kula::~Kula()
	{
	};

