//ClapTrap.cpp CPP03   ex01

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {

	std::cout << "ClapTrap default Constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap( std::string name ) : _name(name),
	_hitPoints( 10 ),
	_energyPoints( 10 ),
	_attackDamage( 0 ) {

	std::cout << "ClapTrap parametric Constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {

	std::cout << "ClapTrap copy Constructor called" << std::endl;
	*this = src;
	return;
}

ClapTrap::~ClapTrap( void ) {

		std::cout << "ClapTrap destructor called" << std::endl;
		return;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs) {

		std::cout << "ClapTrap copy assignement operator called" << std::endl;

		if ( this != &rhs )
		{
			_name = rhs.getName();
			_hitPoints = rhs.getHitPoints();
			_energyPoints = rhs.getEnergyPoints();
			_attackDamage = rhs.getAttackDamage();
		}
		return *this;
}

std::string	ClapTrap::getName( void ) const {

		return _name;
}

void	ClapTrap::setName( std::string const name ) {

		_name = name;
		return;
}

int		ClapTrap::getHitPoints( void ) const {

		return _hitPoints;
}

void	ClapTrap::setHitPoints( int const p ) {

		_hitPoints = p;
		return;
}

int		ClapTrap::getEnergyPoints( void ) const {

		return _energyPoints;
}

void	ClapTrap::setEnergyPoints( int const e ) {

		_energyPoints = e;
		return;
}
  
int		ClapTrap::getAttackDamage( void ) const {

		return _attackDamage;
}

void	ClapTrap::setAttackDamage( int const a ) {

		_attackDamage = a;
		return;
}

void	ClapTrap::attack( const std::string & target ) {

	if ( _hitPoints > 0 && _energyPoints > 0)
	{
		std::cout<< _name << " attacks " << target << ", causing " 
		<< _cost << " points of damage!" << std::endl;
		_energyPoints -= _cost;
	}
	else
	{
		std::cout << _name << " can't attack! Infos: " << _hitPoints
			<< " Hits point, " << _energyPoints << " Energy Points"
			<< std::endl;
	}
	return;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	std::cout << _name << " take " << amount << " points of damage!"
		<< std::endl;
	return;
}

void	ClapTrap::beRepaired( unsigned int amount ) {

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

