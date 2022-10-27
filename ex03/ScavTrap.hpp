//ScavTrap.hpp CPP03   ex02

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap  : public ClapTrap {

	public:

		ScavTrap( void );					//Canonique
		ScavTrap( std::string const name );
		ScavTrap( ScavTrap const & src );	//Canonique	
		~ScavTrap( void );				//Canonique	

		void		attack( const std::string & target );

		void		guardGate();

};

#endif
