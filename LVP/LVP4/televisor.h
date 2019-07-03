#ifndef _tv_h_
#define _tv_h_

#include <string>
#include <iostream>

using namespace std;

enum estado_tv {desligado, ligado};
enum entrada_tv {hdmi1, hdmi2, coaxial};

class Televisor {
	private:
		estado_tv 				estado;			// Estado corrente do televisor
		float 					tamanho; 		// Tamanho da tela, em polegadas diagonais
		float			 		resolucao[2];	// Resolucao horizontal e vertical
		int 					volume;			// Valor de volume 		[0,100]
		int 					contraste;		// Valor de contraste 	[0,100]
		int 					brilho;			// Valor de brilho		[0,100]
		bool 					mudo;			// Indica se o mudo esta ativo
		int 					canal;			// Indica o canal atual sintonizado [1,500]
		int 					nFavoritos;		// Numero de canais favoritos
		int 					*favoritos;		// Ponteiro para armazenar um array com os canais favoritos
		entrada_tv  			entrada;		// Entrada atual selecionada
	public:

		/*	Construtor
		 *		Inicializa o objeto com os seguintes valores:
		 *			estado: desligado, tamanho: tam, resolucao: res
		 *			volume: 0, contraste: 50, brilho: 50, mudo: nao
		 *			canal: 1, nFavoritos: 0, entrada: hdmi1.
		 *			O ponteiro favoritos deve apontar para uma regi
		 *			ao de memoria com 10 inteiros (que eh o numero 
		 *			maximo de favoritos que o televisor pode ter)		 
		 */
		Televisor(float tam, float res[2]);

		/*	Get Estado
		 *		Retorna o estado atual da tv
		 *
		 *
		 *
		 *
		 */
		estado_tv 	getEstado();

		/*	Get Tamanho
		 *		Retorna o tamanho da tv
		 *
		 *
		 *
		 *
		 */
		float 		getTamanho();

		/*	Get Resolucao horizontal
		 *		Retorna a resolucao horizontal da tv
		 *
		 *
		 *
		 *
		 */
		float		getResolucaoHorizontal();		

		/*	Get Resolucao vertical
		 *		Retorna a resolucao vertical da tv
		 *
		 *
		 *
		 *
		 */
		float		getResolucaoVertical();

		/*	Get Volume
		 *		Retorna o volume da tv
		 *
		 *
		 *
		 *
		 */
		int 		getVolume();

		/*	Get Contraste
		 *		Retorna o contraste da tv
		 *
		 *
		 *
		 *
		 */
		int 		getContraste();

		/*	Get Brilho
		 *		Retorna o brilho da tv
		 *
		 *
		 *
		 *
		 */
		int 		getBrilho();

		/*	is Mudo
		 *		Retorna se a tv esta ou nao muda
		 *
		 *
		 *
		 *
		 */
		bool		isMudo();

		/*	Get Canal
		 *		Retorna o canal atual
		 *
		 *
		 *
		 *
		 */
		int 		getCanal();

		/*	Get Numero de Favoritos
		 *		Retorna o numero de favoritos da tv
		 *
		 *
		 *
		 *
		 */
		int 		getNumeroFavoritos();

		/*	Get Favoritos
		 *		Aloca um *novo* array do tamanho do numero
		 *		de favoritos do televisor (nfavoritos), co
		 *		pia os canais favoritos para o novo array
		 *		e retorna o novo array. Se nfavoritos for 
		 *		0 ou favoritos NULL, retorna NULL.
		 */
		int*		getFavoritos();

		/*	Get Entrada
		 *		Retorna a entrada atual selecionada
		 *
		 *
		 *
		 *
		 */
		entrada_tv  getEntrada();

		/*	Set Resolucao
		 *		Seta a resolucao da tv para val. Se houve
		 *		mudanca no estado retorna true, senao
		 *		retorna false.
		 *
		 *
		 */

		bool 		setResolucao(float val[2]);

		/*	Set Estado
		 *		Seta o estado da tv para val. Se houve
		 *		mudanca no estado retorna true, senao
		 *		retorna false.
		 *
		 *
		 */

		bool 		setEstado(estado_tv val);

		/*	Set Volume
		 *		Seta o volume da tv para val. Se houve
		 *		mudanca no volume retorna true, senao
		 *		retorna false. Se val estiver fora
		 *		da faixa permitida nao seta e retorna
		 *		false.
		 */
		bool 		setVolume(int val);

		/*	Set Contraste
		 *		Seta o contraste da tv para val. Se houve
		 *		mudanca no contraste retorna true, senao
		 *		retorna false. Se val estiver fora
		 *		da faixa permitida nao seta e retorna
		 *		false.
		 */
		bool 		setContraste(int val);

		/*	Set Brilho
		 *		Seta o brilho da tv para val. Se houve
		 *		mudanca no brilho retorna true, senao
		 *		retorna false. Se val estiver fora
		 *		da faixa permitida nao seta e retorna
		 *		false.
		 */
		bool 		setBrilho(int val);

		/*	Set Canal
		 *		Seta o canal da tv para val. Se houve
		 *		mudanca no canal retorna true, senao
		 *		retorna false. Se val estiver fora
		 *		da faixa permitida nao seta e retorna
		 *		false.
		 */
		bool 		setCanal(int val);

		/*	Set favoritos
		 *		Copia os favoritos em val para favoritos
		 *		Se val eh NULL ou nF fora da faixa permi
		 *		tida, retorna false, sem copiar. Se for
		 *      possivel copiar retorna true. Substitui
		 *		os favoritos antes armazenados.
		 */
		bool		setFavoritos(int *val, int nF);

		/*	Set Entrada
		 *		Seta a entrada da tv para val. Se houve
		 *		mudanca na entrada retorna true, senao
		 *		retorna false. Se val estiver fora
		 *		da faixa permitida nao seta e retorna
		 *		false.
		 */
		bool 		setEntrada(entrada_tv val);

		/*	Mute on
		 *		Emudece a tv. Se emudeceu, retorna true.
		 *		Se ja estava muda, retorna false.
		 *
		 *
		 *
		 */
		bool		muteOn();

		/*	Mute off
		 *		Restaura o som. Se estava mudo, retorna
		 *		true. Senao retorna false.
		 *
		 *
		 *
		 */
		bool		muteOff();

		/*	Add Favorito
		 *		Adiciona um canal a lista de favoritos.
		 *		Se for possivel adicionar, retorna true.
		 *		Se nao for possivel adicionar, retorna false.
		 *		O limite de favoritos eh 10 canais. O canal
		 *		deve ser valido.
		 */
		bool	 	addFavorito(int val);

		/*	Rem Favorito
		 *		Remove um canal da lista de favoritos.
		 *		Se conseguiu remover retorna true. Senao,
		 *		retorna false.
		 *
		 *
		 */
		bool		remFavorito(int val);

		/*	Inc Canal
		 *		Incrementa o canal atual. Sempre retorna
		 *		true. O canal atual sempre deve ser valido.
		 *
		 *
		 *
		 */
		bool 		incCanal();

		/*	Dec Canal
		 *		Decrementa o canal atual. Sempre retorna
		 *		true. O canal atual sempre deve ser valido.
		 *
		 *
		 *
		 */
		bool		decCanal();

		/*	Set Canal Favorito
		 *		Seta o canal corrente para o canal favorito
		 * 		do indice contido em val. val deve ser um 
		 *		indice valido do vetor de favoritos. Se con
		 *		seguir alterar o canal retorna true, senao
		 *		retorna false.
		 */
		bool 		setCanalFavorito(int val);		


		/*	Destrutor
		 *		Destroi o objeto. Deve desalocar o array de
		 *		favoritos.
		 *
		 *
		 *
		 */
		~Televisor();

};

#endif	 	  	  		  	    	   		  	       	 	
