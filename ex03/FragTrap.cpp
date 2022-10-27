//FragTrap.cpp CPP03   ex02

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {

	std::cout << "FragTrap default Constructor called" << std::endl;
	return;
}

FragTrap::FragTrap( std::string name ) {
	_name = name; 
	_hitPoints =  100;
	_energyPoints = 100;
	_attackDamage = 30; 

	std::cout << "FragTrap parametric Constructor called" << std::endl;
	return;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap( src ) {

	std::cout << "FragTrap copy Constructor called" << std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap( void ) {

		std::cout << "FragTrap destructor called" << std::endl;
		return;
}

void	FragTrap::attack( const std::string & target ) {

	if ( _hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "FrapTrap " << _name << " attacks " << target << ", causing " 
		<< _cost << " points of damage!" << std::endl;
		_energyPoints -= _cost;
	}
	else
	{
		std::cout << "FrapTrap " << _name << " FragTrap can't attack! Infos: " << _hitPoints
			<< " Hits point, " << _energyPoints << " Energy Points"
			<< std::endl;
	}
	return;
}

void	FragTrap::highFivesGuys() {

	std::cout << "Hey Guys! My name is FrapTrap " << _name << ". Give me a high Five!" << std::endl;
	return;
 }

