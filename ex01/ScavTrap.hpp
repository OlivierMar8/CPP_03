//ScavTrap.hpp CPP03   ex00

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap  : public ClapTrap {

	public:

		ScavTrap( std::string const name );
		ScavTrap( ScavTrap const & src );	//Canonique	
		~ScavTrap( void );				//Canonique	
/*
		ScavTrap &	operator=( ScavTrap const & rhs );//Canonique

		std::string	getName( void ) const;
		void		setName( std::string const name );
		int			getHitPoints( void ) const;
		void		setHitPoints( int const p );
		int			getEnergyPoints( void ) const;
		void		setEnergyPoints( int const e );
		int			getAttackDamage( void ) const;
		void		setAttackDamage( int const a );
		
		void		attack( const std::string & target );
		void		takeDamage(unsigned int amount );
		void		beRepaired( unsigned int amount );

		void		guardGate();

	private:

		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;	

		static const int	_cost  = 1;

*/		ScavTrap( void );					//Canonique
};

#endif
