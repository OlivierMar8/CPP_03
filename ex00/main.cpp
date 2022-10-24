//main.cpp	CPP03 ex00

#include <iostream>
#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap  a( "Clap" );
	ClapTrap  d( a );
	d.setName("a");

	std::cout << "a is " << a.getName()  << std::endl;
	std::cout << "d is " << a.getHitPoints() << std::endl;
	std::cout << "a is " << a.getEnergyPoints()  << std::endl;
	std::cout << "c is " << a.getAttackDamage()  << std::endl;

	a.attack("Test");
	d.attack("Clap");
	std::cout << "d is " << a.getHitPoints() << std::endl;
	a.attack("Test");
	a.attack("Test");
	a.attack("Test");
	a.attack("Test");
	a.attack("Test");
	a.attack("Test");
	a.beRepaired( 5 );
	a.attack("Test");
	a.attack("Test");
	a.attack("Test");
	a.attack("Test");
	std::cout << "d is " << a.getHitPoints() << std::endl;
	a.beRepaired( 5 );
	return 0;
}
