//ClapTrac.cpp CPP03   ex00

#include <iostream>
#include "ClapTrac.hpp"

ClapTrac::ClapTrac( void ) {

	std::cout << "ClapTrac default Constructor called" << std::endl;
	return;
}

ClapTrac::ClapTrac( std::string name ) : _name(name),
	_hitPoints( 10 ),
	_energyPoints( 10 ),
	_attackDamage( 10 ) {

	std::cout << "ClapTrac parametric Constructor called" << std::endl;
	return;
}

ClapTrac::ClapTrac( ClapTrac const & src ) {

	std::cout << "ClapTrac copy Constructor called" << std::endl;
	*this = src;
	return;
}

ClapTrac::~ClapTrac( void ) {

		std::cout << "ClapTrac destructor called" << std::endl;
		return;
}

ClapTrac &	ClapTrac::operator=( ClapTrac const & rhs) {

		std::cout << "ClapTrac copy assignement operator called" << std::endl;

		if ( this != &rhs )
		{
			_name = rhs.getName();
			_hitPoints = rhs.getHitPoints();
			_energyPoints = rhs.getEnergyPoints();
			_attackDamage = rhs.getAttackDamage();
		}
		return *this;
}

std::string	ClapTrac::getName( void ) const {

		return _name;
}

void	ClapTrac::setName( std::string const name ) {

		_name = name;
		return;
}

int		ClapTrac::getHitPoints( void ) const {

		return _hitPoints;
}

void	ClapTrac::setHitPoints( int const p ) {

		_hitPoints = p;
		return;
}

int		ClapTrac::getEnergyPoints( void ) const {

		return _energyPoints;
}

void	ClapTrac::setEnergyPoints( int const e ) {

		_energyPoints = e;
		return;
}
  
int		ClapTrac::getAttackDamage( void ) const {

		return _attackDamage;
}

void	ClapTrac::setAttackDamage( int const a ) {

		_attackDamage = a;
		return;
}

void	ClapTrac::attack( const std::string & target ) {
	
	std::cout << _name << " attacks " << target << ", causing " 
	<< _cost << " points of damage!" << std::endl;
	return;
}

void	ClapTrac::takeDamage( unsigned int amount ) {

	std::cout << _name << " take " << amount << " points of damage!"
		<< std::endl;
	return;
}

void	ClapTrac::beRepaired( unsigned int amount ) {

	std::cout << _name << " has been repaired, regaining " 
	<< amount << " points!" <<  std::endl;
	return;
}
//  OK OK
/*
std::ostream &	operator<<( std::ostream & o, ClapTrac const & i) {

	o  << i.toFloat();

	return o;
}
*/
