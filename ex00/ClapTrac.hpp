//ClapTrac.hpp CPP03   ex00

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrac {

	public:

		ClapTrac( std::string const name );
		ClapTrac( ClapTrac const & src );	//Canonique	
		~ClapTrac( void );				//Canonique	

		ClapTrac &	operator=( ClapTrac const & rhs );//Canonique

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

	private:

		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;	

		static const int	_cost  = 1;

		ClapTrac( void );					//Canonique
};
/*
std::ostream &		operator<<( std::ostream & o, ClapTrac const & i );
*/
#endif
