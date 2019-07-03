#ifndef _no_h_

#define _no_h_

#include <iostream>

using namespace std;

template <typename tipo>
class No {
    
	private:
		tipo 		 dado;
		No<tipo> *proximo;
	
	public:
		No(tipo d)
		:dado(d)
		{
		}
		No(tipo d, No<tipo> *p)
		:dado(d),
		proximo(p)
		{
		}
		void setDado(tipo d) 
		{
		    dado = d;
		}
		tipo getDado()
		{
		    return(dado);
		}
		void	setProximo(No<tipo> *p) 
		{
		    proximo = p;
		}
		No<tipo>* getProximo() 
		{
		    return(proximo);
		}
};

#endif
