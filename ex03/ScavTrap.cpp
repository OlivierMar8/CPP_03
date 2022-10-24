//ScavTrap.cpp CPP03   ex03

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {

	std::cout << "ScavTrap default Constructor called" << std::endl;
	return;
}

ScavTrap::~ScavTrap( void ) {

		std::cout << "ScavTrap destructor called" << std::endl;
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

ScavTrap::ScavTrap( ScavTrap const & src ) {

	std::cout << "ScavTrap copy Constructor called" << std::endl;
	*this = src;
	return;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs) {

		std::cout << "ScavTrap copy assignement operator called" << std::endl;

		if ( this != &rhs )
		{
			_name = rhs.getName();
			_hitPoints = rhs.getHitPoints();
			_energyPoints = rhs.getEnergyPoints();
			_attackDamage = rhs.getAttackDamage();
		}
		return *this;
}
  
void	ScavTrap::attack( const std::string & target ) {

	if ( _hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << _name << " ScavTrap attacks " << target << ", causing " 
		<< _cost << " points of damage!" << std::endl;
		_energyPoints -= _cost;
	}
	else
	{
		std::cout << _name << " ScavTrap can't attack! Infos: " << _hitPoints
			<< " Hits point, " << _energyPoints << " Energy Points"
			<< std::endl;
	}
	return;
}

void	ScavTrap::guardGate() {

	std::cout << _name << " entered the Gate keeper mode!" << std::endl;
	return;
 }

