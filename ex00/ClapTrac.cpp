//ClapTrac.cpp CPP03   ex00

#ifndef CLAPTRAC_HPP
# define CLAPTRAC_HPP


class ClapTrac {

	public:

		ClapTrac( void );					//Canonique
		ClapTrac( int const n );
		ClapTrac( ClapTrac const & src );	//Canonique	
		~ClapTrac( void );				//Canonique	

		ClapTrac &	operator=( ClapTrac const & rhs );//Canonique

		int			getFoo( void ) const;


	private:

		int 		_foo;

};

std::ostream &		operator<<( std::ostream & o, ClapTrac const & i );

#endif
