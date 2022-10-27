//ScavTrap.cpp CPP03   ex02

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {

	std::cout << "ScavTrap default Constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap( std::string name ) {
	_name = name; 
	_hitPoints =  100;
	_energyPoints = 50;
	_attackDamage = 20; 

	std::cout << "ScavTrap parametric Constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap( src ) {

	std::cout << "ScavTrap copy Constructor called" << std::endl;
	*this = src;
	return;
}

ScavTrap::~ScavTrap( void ) {

		std::cout << "ScavTrap destructor called" << std::endl;
		return;
}

void	ScavTrap::attack( const std::string & target ) {

	if ( _hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " 
		<< _cost << " points of damage!" << std::endl;
		_energyPoints -= _cost;
	}
	else
	{
		std::cout << "ScavTrap " << _name << " can't attack! Infos: " << _hitPoints
			<< " Hits point, " << _energyPoints << " Energy Points"
			<< std::endl;
	}
	return;
}

void	ScavTrap::guardGate() {

	std::cout << "ScavTrap " << _name << " entered the Gate keeper mode!" << std::endl;
	return;
 }

