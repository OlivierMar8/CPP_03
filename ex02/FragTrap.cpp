//FragTrap.cpp CPP03   ex02

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {

	std::cout << "FragTrap default Constructor called" << std::endl;
	return;
}

FragTrap::~FragTrap( void ) {

		std::cout << "FragTrap destructor called" << std::endl;
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

FragTrap::FragTrap( FragTrap const & src ) {

	std::cout << "FragTrap copy Constructor called" << std::endl;
	*this = src;
	return;
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs) {

		std::cout << "FragTrap copy assignement operator called" << std::endl;

		if ( this != &rhs )
		{
			_name = rhs.getName();
			_hitPoints = rhs.getHitPoints();
			_energyPoints = rhs.getEnergyPoints();
			_attackDamage = rhs.getAttackDamage();
		}
		return *this;
}
  
void	FragTrap::attack( const std::string & target ) {

	if ( _hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << _name << " FragTrap attacks " << target << ", causing " 
		<< _cost << " points of damage!" << std::endl;
		_energyPoints -= _cost;
	}
	else
	{
		std::cout << _name << " FragTrap can't attack! Infos: " << _hitPoints
			<< " Hits point, " << _energyPoints << " Energy Points"
			<< std::endl;
	}
	return;
}

void	FragTrap::highFivesGuys() {

	std::cout << "Hey Guys! My name is " << _name << ". Give me a high Five!" << std::endl;
	return;
 }

