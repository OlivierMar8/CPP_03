//FragTrap.hpp CPP03   ex02

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap  : public ClapTrap {

	public:

		FragTrap( void );					//Canonique
		FragTrap( std::string const name );
		FragTrap( FragTrap const & src );	//Canonique	
		~FragTrap( void );				//Canonique	

		void		attack( const std::string & target );

		void		highFivesGuys();

};

#endif
