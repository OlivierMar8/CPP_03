//ScavTrap.cpp CPP03   ex01

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {

	std::cout << "ScavTrap default Constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap( std::string name ) : _name(name),
	_hitPoints( 100 ),
	_energyPoints( 50 ),
	_attackDamage( 20 ) {

	std::cout << "ScavTrap parametric Constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {

	std::cout << "ScavTrap copy Constructor called" << std::endl;
	*this = src;
	return;
}

ScavTrap::~ScavTrap( void ) {

		std::cout << "ScavTrap destructor called" << std::endl;
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

std::string	ScavTrap::getName( void ) const {

		return _name;
}

void	ScavTrap::setName( std::string const name ) {

		_name = name;
		return;
}

int		ScavTrap::getHitPoints( void ) const {

		return _hitPoints;
}

void	ScavTrap::setHitPoints( int const p ) {

		_hitPoints = p;
		return;
}

int		ScavTrap::getEnergyPoints( void ) const {

		return _energyPoints;
}

void	ScavTrap::setEnergyPoints( int const e ) {

		_energyPoints = e;
		return;
}
  
int		ScavTrap::getAttackDamage( void ) const {

		return _attackDamage;
}

void	ScavTrap::setAttackDamage( int const a ) {

		_attackDamage = a;
		return;
}

void	ScavTrap::attack( const std::string & target ) {

	if ( _hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << _name << " attacks " << target << ", causing " 
		<< _cost << " points of damage!" << std::endl;
		_energyPoints -= _cost;
		//cible perd attackDamage hit points ??
	}
	else
	{
		std::cout << _name << " can't attack! Infos: " << _hitPoints
			<< " Hits point, " << _energyPoints << " Energy Points"
			<< std::endl;
	}
	return;
}

void	ScavTrap::takeDamage( unsigned int amount ) {

	std::cout << _name << " take " << amount << " points of damage!"
		<< std::endl;
	return;
}

void	ScavTrap::beRepaired( unsigned int amount ) {

	if ( _hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << _name << " has been repaired, regaining " 
		<< amount << " points!" <<  std::endl;
		_energyPoints -= _cost;
		_hitPoints += amount;
	}
	else
	{
		std::cout << _name << " can't be repaired! Infos: " << _hitPoints
			<< " Hits point, " << _energyPoints << " Energy Points"
			<< std::endl;
	}
	return;
}

void	ScavTrap::guardGate() {

	std::cout << _name << " entered the Gate keeper mode!" << std::endl;
	return;
}
