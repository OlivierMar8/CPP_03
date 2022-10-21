//main.cpp	CPP03 ex00

#include <iostream>
#include "ClapTrac.hpp"

int	main( void )
{
	ClapTrac  a( "Toc" );
	ClapTrac const d( a );


	/*
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
*/
	std::cout << "a is " << a.getName()  << std::endl;
	std::cout << "d is " << a.getHitPoints() << std::endl;
	std::cout << "a is " << a.getEnergyPoints()  << std::endl;
	std::cout << "c is " << a.getAttackDamage()  << std::endl;

	a.attack("Test");
	std::cout << "d is " << a.getHitPoints() << std::endl;
	a.attack("Test");
	a.attack("Test");
	a.attack("Test");
	a.attack("Test");
	a.attack("Test");
	a.attack("Test");
	a.attack("Test");
	a.attack("Test");
	a.attack("Test");
	a.attack("Test");
	std::cout << "d is " << a.getHitPoints() << std::endl;
	return 0;
}
