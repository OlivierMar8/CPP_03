//main.cpp	CPP03 ex02

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int	main( void )
{
	FragTrap ft("Lucas");
	ScavTrap sc("Duncan");
	ScavTrap abc( sc );

	std::cout << ft << std::endl;

	ft.attack("Howard");
	ft.takeDamage(4);
	ft.beRepaired(12);
	ft.highFivesGuys();
	std::cout << ft << std::endl;

	std::cout << sc << std::endl;
	sc.attack("Jack");
	sc.takeDamage(3);
	sc.beRepaired(10);
	sc.attack("Test");
	sc.beRepaired( 5 );
	std::cout << sc << std::endl;

	ClapTrap  a( "Clap" );
	ClapTrap  d( a );
	d.setName("a");
	std::cout << a << std::endl;
	a.attack("Test");
	d.attack("Bob");
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
	std::cout << a << std::endl;
	return 0;
}
