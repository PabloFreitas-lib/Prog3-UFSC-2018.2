
#include "televisor.h"

//implemente aqui os metodos definidos em televisor.h




//---------------* CONSTRUTOR * -------------------------------
/*	Construtor
		 *		Inicializa o objeto com os seguintes valores:
		 *			estado: desligado, tamanho: tam, resolucao: res
		 *			volume: 0, contraste: 50, brilho: 50, mudo: nao
		 *			canal: 1, nFavoritos: 0, entrada: hdmi1.
		 *			O ponteiro favoritos deve apontar para uma regi
		 *			ao de memoria com 10 inteiros (que eh o numero
		 *			maximo de favoritos que o televisor pode ter)
		 
*/
		Televisor::Televisor(float tam, float res[2])
		{
			tamanho = tam;
			estado = desligado;
			resolucao[0] = res[0];
			resolucao[1] = res[1];
			volume = 0;
			contraste = 50;
			brilho = 50;
			mudo = false;
			canal = 1;
			nFavoritos = 0;
			entrada = hdmi1;
			favoritos = new int[10];
		}

		 
//-----------------------* DESTRUTOR *-----------------------

		/*	Destrutor
		 *		Destroi o objeto. Deve desalocar o array de
		 *		favoritos.
		 */
		Televisor::~Televisor()
		{	 	  	  		  	    	   		  	       	 	
			delete [] favoritos;
			favoritos = NULL;
		}

		
//-----------------* GETS *---------------------------------------------------------------


/*	    Get Estado
		 *		Retorna o estado atual da tv
		 */
    		estado_tv 	Televisor::getEstado()
    		
    		{
    			return(estado);
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Get Tamanho
		 *		Retorna o tamanho da tv
		 */
		 
    		float 		Televisor::getTamanho()
    		{
    			return(tamanho);
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Get Resolucao horizontal
		 *		Retorna a resolucao horizontal da tv
		 */
    		float		Televisor::getResolucaoHorizontal()
    		{
    			return(resolucao[0]);
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Get Resolucao vertical
		 *		Retorna a resolucao vertical da tv
		 *
		 */
    		float		Televisor::getResolucaoVertical()
    		{	 	  	  		  	    	   		  	       	 	
    			return(resolucao[1]);
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Get Volume
		 *		Retorna o volume da tv
		 */
    		int 		Televisor::getVolume()
    		{
    			return(volume);
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Get Contraste
		 *		Retorna o contraste da tv
		 */
    		int 		Televisor::getContraste()
    		{
    			return(contraste);
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Get Brilho
		 *		Retorna o brilho da tv
		 */
    		int 		Televisor::getBrilho()
    		{
    			return(brilho);
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	is Mudo
		 *		Retorna se a tv esta ou nao muda
		 */
    		bool		Televisor::isMudo()
    		{
    			return(mudo);
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Get Canal
		 *		Retorna o canal atual
		 */
    		int 		Televisor::getCanal()
    		{	 	  	  		  	    	   		  	       	 	
    			return(canal);
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Get Numero de Favoritos
		 *		Retorna o numero de favoritos da tv
		 */
    		int 		Televisor::getNumeroFavoritos()
    		{
    			return(nFavoritos);
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Get Favoritos
		 *		Aloca um *novo* array do tamanho do numero
		 *		de favoritos do televisor (nfavoritos), co
		 *		pia os canais favoritos para o novo array
		 *		e retorna o novo array. Se nfavoritos for
		 *		0 ou favoritos NULL, retorna NULL.
		 */
    		int*		Televisor::getFavoritos()
    		{
    			if(nFavoritos == 0 || favoritos == NULL)
    				return(NULL);
    			int *new_ptr = new int[nFavoritos];
    			for(int i =0; i < nFavoritos; i++){
    				new_ptr[i] = favoritos[i];
    			}
    			return(new_ptr);
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Get Entrada
		 *		Retorna a entrada atual selecionada
		 */
    		entrada_tv  Televisor::getEntrada()
    		{
    			return(entrada);
    		}	 	  	  		  	    	   		  	       	 	

//-------------------------- * SETS * ------------------------------------------------------------


		/*	Set Resolucao
		 *		Seta a resolucao da tv para val. Se houve
		 *		mudanca no estado retorna true, senao
		 *		retorna false.
		 *
		 *
		 */
    		bool 		Televisor::setResolucao(float val[2])
    		{
    			if(getResolucaoHorizontal() == val[0] || getResolucaoVertical() ==  val[1])
    			{
    				resolucao[0] = val[0], resolucao[1] = val[1];
    				cout << "Line 177" << endl;
    				return(false);
    			}else
    			{
    				resolucao[0] = val[0], resolucao[1] = val[1];
    				cout << "Line 182" << endl;
    				return(true);
    			}
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Set Estado
		 *		Seta o estado da tv para val. Se houve
		 *		mudanca no estado retorna true, senao
		 *		retorna false.
		 */

    		bool 		Televisor::setEstado(estado_tv val)
    		{
    			if (getEstado() == val)
    			{	 	  	  		  	    	   		  	       	 	
    				estado = val;
    				cout << "Line 198" << endl;
    				return(false);
    			}
    			else{
    			    cout << "Line 202" << endl;
    				estado = val;
    				return(true);
    			}
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Set Volume
		 *		Seta o volume da tv para val. Se houve
		 *		mudanca no volume retorna true, senao
		 *		retorna false. Se val estiver fora
		 *		da faixa permitida nao seta e retorna
		 *		false.
		 */
    		bool 		Televisor::setVolume(int val)
    		{
    		    if ( val <0 || val > 100)
    		        return(false);
    			if(getVolume() == val)
    			{
    			    cout << "Line 219" << endl;
    				volume = val;
    				return(false);
    			}
    			else{
    			    cout << "Line 224" << endl;
    				volume = val;
    				return(true);
    			}
    
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Set Contraste
		 *		Seta o contraste da tv para val. Se houve
		 *		mudanca no contraste retorna true, senao
		 *		retorna false. Se val estiver fora
		 *		da faixa permitida nao seta e retorna
		 *		false.
		 */
    		bool 		Televisor::setContraste(int val)
    		{	 	  	  		  	    	   		  	       	 	
    		     if ( val <0 || val > 100)
    		        return(false);
    			if(getContraste() == val)
    			{
    			    cout << "Line 242" << endl;
    				contraste = val;
    				return(false);
    			}else{
    			    cout << "Line 247" << endl;
    				contraste = val;
    				return(true);
    			}
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Set Brilho
		 *		Seta o brilho da tv para val. Se houve
		 *		mudanca no brilho retorna true, senao
		 *		retorna false. Se val estiver fora
		 *		da faixa permitida nao seta e retorna
		 *		false.
		 */
    		bool 		Televisor::setBrilho(int val)
    		{
    		     if ( val <0 || val > 100)
    		             return(false);
    			if(getBrilho() == val)
    			{
    			    cout << "Line 264" << endl;
    				brilho = val;
    				return(false);
    			}
    			else{
    			    cout << "Line 269" << endl;
    				brilho = val;
    				return(true);
    			}	 	  	  		  	    	   		  	       	 	
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Set Canal
		 *		Seta o canal da tv para val. Se houve
		 *		mudanca no canal retorna true, senao
		 *		retorna false. Se val estiver fora
		 *		da faixa permitida nao seta e retorna
		 *		false.
		 */
    		bool 		Televisor::setCanal(int val)
    		{
    			if(getCanal() == val)
    			{
    			     if ( val <0 || val > 100)
    		        return(false);
    				canal = val;
    				cout << "Line 287" << endl;
    				return(false);
    			}
    			else
    			{
    				canal = val;
    				cout << "Line 293" << endl;
    				return(true);
    			}
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Set favoritos
		 *		Copia os favoritos em val para favoritos
		 *		Se val eh NULL ou nF fora da faixa permi
		 *		tida, retorna false, sem copiar. Se for
		 *      possivel copiar retorna true. Substitui
		 *		os favoritos antes armazenados.
		 */
    		bool		Televisor::setFavoritos(int *val, int nF)
    		{	 	  	  		  	    	   		  	       	 	
    			if(val == NULL || nF >10 || nF <= 0)
    				return(false);
    			for(int i =0 ;i < nF ; i++)
    			favoritos[i]= val[i];
    			//cout << " setFavorito" << endl;
    			return(true);
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Set Entrada
		 *		Seta a entrada da tv para val. Se houve
		 *		mudanca na entrada retorna true, senao
		 *		retorna false. Se val estiver fora
		 *		da faixa permitida nao seta e retorna
		 *		false.
		 */
    		bool 		Televisor::setEntrada(entrada_tv val)
    		{
    			if(getEntrada() == val)
    			{
    				entrada = val;
    				return(false);
    			}
    			else{
    				entrada = val;
    				return(true);
    			}
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Mute on
		 *		Emudece a tv. Se emudeceu, retorna true.
		 *		Se ja estava muda, retorna false.
		 *
		 *
		 *
		 */
    		bool		Televisor::muteOn()
    		{	 	  	  		  	    	   		  	       	 	
    			if(isMudo()){
    				mudo = true;
    				return(false);
    			}
    			else{
    				mudo = true;
    				return(true);
    			}
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Mute off
		 *		Restaura o som. Se estava mudo, retorna
		 *		true. Senao retorna false.
		 *
		 *
		 *
		 */
    		bool		Televisor::muteOff()
    		{
    			if(isMudo()){
    				mudo = false;
    				return(true);
    			}
    			else{
    				mudo = false;
    				return(false);
    			}
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Add Favorito
		 *		Adiciona um canal a lista de favoritos.
		 *		Se for possivel adicionar, retorna true.
		 *		Se nao for possivel adicionar, retorna false.
		 *		O limite de favoritos eh 10 canais. O canal
		 *		deve ser valido.
		 */
    		bool	 	Televisor::addFavorito(int val)
    		{	 	  	  		  	    	   		  	       	 	
    			if(val <= 0 || nFavoritos >=10)
    				return(false);
    			favoritos[nFavoritos] = val;
    			return(true);
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Rem Favorito
		 *		Remove um canal da lista de favoritos.
		 *		Se conseguiu remover retorna true. Senao,
		 *		retorna false.
		 *
		 *
		 */
    		bool		Televisor::remFavorito(int val)
    		{
    			for(int i = 0; i < nFavoritos ; i++)
    			{
    				if(favoritos[i] == val)
    				{
    					favoritos[nFavoritos-1] = val;
    					favoritos[i] = 0;
    					nFavoritos= nFavoritos -1;
    					return(true);
    				}
    			}
    			return(false);
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Inc Canal
		 *		Incrementa o canal atual. Sempre retorna
		 *		true. O canal atual sempre deve ser valido.
		 *
		 *
		 *
		 */
    		bool 		Televisor::incCanal()
    		{	 	  	  		  	    	   		  	       	 	
    			canal = canal+1;
    			return(true);
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Dec Canal
		 *		Decrementa o canal atual. Sempre retorna
		 *		true. O canal atual sempre deve ser valido.
		 */
    		bool		Televisor::decCanal()
    		{
    			canal = canal -1;
    			return(true);
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		/*	Set Canal Favorito
		 *		Seta o canal corrente para o canal favorito
		 * 		do indice contido em val. val deve ser um
		 *		indice valido do vetor de favoritos. Se con
		 *		seguir alterar o canal retorna true, senao
		 *		retorna false.
		 */
    		bool 		Televisor::setCanalFavorito(int val)
    		{
    			if ( val <= 0)
    				return(false);
    			favoritos[nFavoritos] = val;
    			return(true);
    		}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

	 	  	  		  	    	   		  	       	 	
