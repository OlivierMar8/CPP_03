//ClapTrap.hpp CPP03   ex02

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {

	public:

		ClapTrap( void );					//Canonique
		ClapTrap( std::string const name );
		ClapTrap( ClapTrap const & src );	//Canonique	
		~ClapTrap( void );				//Canonique	

		ClapTrap &	operator=( ClapTrap const & rhs );//Canonique

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

	protected:

		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;	

		static const int	_cost  = 1;

};

#endif
