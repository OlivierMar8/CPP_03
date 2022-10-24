//DiamondTrap.hpp CPP03   ex03

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class DiamondTrap  : public FragTrap, public ScavTrap {

	public:

		DiamondTrap( void );					//Canonique
		~DiamondTrap( void );				//Canonique	
		DiamondTrap( std::string const name );
		DiamondTrap( DiamondTrap const & src );	//Canonique	

		DiamondTrap &	operator=( DiamondTrap const & rhs );//Canonique

		void		attack( const std::string & target );

		void		whoAmI();

	private:
		std::string	_name;

};

#endif
