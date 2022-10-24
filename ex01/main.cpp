//main.cpp	CPP03 ex01

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int	main( void )
{
	ScavTrap sc("Duncan");
	ScavTrap abc( sc );

	sc.attack("Jack");
	sc.takeDamage(3);
	sc.beRepaired(10);
	sc.attack("Test");
	std::cout << "d is " << sc.getHitPoints() << std::endl;
	sc.attack("Test");
	sc.attack("Test");
	sc.attack("Test");
	sc.attack("Test");
	sc.attack("Test");
	sc.attack("Test");
	sc.beRepaired( 5 );
	sc.attack("Test");
	sc.attack("Test");
	sc.attack("Test");
	std::cout << "d is " << sc.getHitPoints() << std::endl;
	sc.beRepaired( 5 );
	std::cout << "sc is " << sc.getName()  << std::endl;
	std::cout << "sc is " << sc.getHitPoints() << std::endl;
	std::cout << "sc is " << sc.getEnergyPoints()  << std::endl;
	std::cout << "sc is " << sc.getAttackDamage()  << std::endl;

	ClapTrap  a( "Clap" );
	ClapTrap  d( a );
	d.setName("a");

	std::cout << "a is " << a.getName()  << std::endl;
	std::cout << "d is " << a.getHitPoints() << std::endl;
	std::cout << "a is " << a.getEnergyPoints()  << std::endl;
	std::cout << "c is " << a.getAttackDamage()  << std::endl;

	a.attack("Test");
	d.attack("Bob");
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
	std::cout << "d is " << a.getHitPoints() << std::endl;
	a.beRepaired( 5 );
	std::cout << "a is " << a.getName()  << std::endl;
	std::cout << "d is " << a.getHitPoints() << std::endl;
	std::cout << "a is " << a.getEnergyPoints()  << std::endl;
	std::cout << "c is " << a.getAttackDamage()  << std::endl;
	return 0;
}
