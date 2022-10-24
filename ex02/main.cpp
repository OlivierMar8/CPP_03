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

	std::cout << "ft is " << ft.getName()  << std::endl;
	std::cout << "ft is " << ft.getHitPoints() << std::endl;
	std::cout << "ft is " << ft.getEnergyPoints()  << std::endl;
	std::cout << "ft is " << ft.getAttackDamage()  << std::endl;

	ft.attack("Howard");
	ft.takeDamage(4);
	ft.beRepaired(12);
	std::cout << "ft is " << ft.getName()  << std::endl;
	std::cout << "ft is " << ft.getHitPoints() << std::endl;
	std::cout << "ft is " << ft.getEnergyPoints()  << std::endl;
	std::cout << "ft is " << ft.getAttackDamage()  << std::endl;

	std::cout << "sc is " << sc.getName()  << std::endl;
	std::cout << "sc is " << sc.getHitPoints() << std::endl;
	std::cout << "sc is " << sc.getEnergyPoints()  << std::endl;
	std::cout << "sc is " << sc.getAttackDamage()  << std::endl;
	sc.attack("Jack");
	sc.takeDamage(3);
	sc.beRepaired(10);
	sc.attack("Test");
	std::cout << "d is " << sc.getHitPoints() << std::endl;
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
