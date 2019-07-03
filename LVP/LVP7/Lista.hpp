#ifndef _lista_h_
#define _lista_h_
#include "No.h"

using namespace std;

template <typename tipo>
class Lista {
	private:
		No<tipo> *primeiro;
		int tamanho;

	public:
		/* construtor
		 *      Cria uma lista vazia.
		 */
		 
		Lista() 
		:primeiro(NULL),
		tamanho(0)
		{
// 		    cout << "22" << endl;
		}
//------------------------------------------------------------------------------		
		/* construtor
		 *		Recebe como parâmetro uma um vetor de elementos e seu respe
		 *      ctivo tamanho t. Uma lista é criada e os t elementos contid
		 *      os no vetor são ***copiados*** para a nova lista. 
		 */
		 
		Lista(tipo e[], int t):
		primeiro(NULL)
		{
// 		     std::cout << "aqui l" << std::endl;
		    if(t < 0){ // condicao adversa
		        tamanho = 0;
		        //t= 0;
// 		        cout << " ERRO 33" << endl;
		    }
		    else
		    {
// 		        cout << "35" << endl;
		        No<tipo> *aux = NULL;
		        
		        for(int i = t ; i >= 0 ; i--) // percorrendo ao contrario
		        {
		            aux = new No<tipo>(e[i],aux);
		            if(i == t) // exepcionalmente o primeiro termo
		            {
		                primeiro = aux;
		            }
		            aux->setProximo(primeiro);
		            primeiro = aux;
		        }
		        tamanho = t;
		    }
		}
//------------------------------------------------------------------------------		
		/*	Destrutor
		 *		Desaloca a memória do vetor de elementos.		 
		 */
		 
		~Lista() 
		{
 		   cout << " ERRO 42" << endl;
		   tipo e;
		   elementoCabeca(e);
		   while(tamanho != 0){
 		        cout << "47" << endl;
		        removeCabeca(e);
		   }
		   tamanho = 0;
           primeiro = NULL;
		   
		}
//------------------------------------------------------------------------------
		/*	getTamanho
		 *		O método retorna o tamanho atual da lista, isto é, seu nú-
		 *		mero de elementos atual.
		 */
		 
		int 	getTamanho()
		{
		    if(tamanho < 0){ // adverso
// 		        cout << "Numero negativo" << endl;
		        return(0);
		    }
// 	        cout << "TAMANHO" << tamanho << endl;
	        return(tamanho);
		}
//------------------------------------------------------------------------------		
		/*	vazia
		 *		O método verifica se a lista está vazia ou não. Retorna
		 *		true caso a lista esteja vazia e false caso contrário.
		 */
		 
		bool 	vazia()
		{
		    cout <<"VAZIA" <<tamanho << endl;
		    return(tamanho == 0  ? true : false);
		}
//------------------------------------------------------------------------------
		/*	ordenada
		 *		O método verifica se os elementos da lista estão dispos-
		 *		tos em ordem crescente de valores. Caso os elementos da
		 *		lista estejam ordenados retorna true. Se pelo menos um
		 *		dos elementos não estiver em ordem crescente false.
		 */
		 
		bool 	ordenada()
		{
// 		     std::cout << "aqui ordenada" << std::endl;
		    if(tamanho == 0) // vazia
		    {
// 		        cout << "72" << endl;
		        return(true);
		    }
		    if(tamanho == 1){ // somente um termo
// 		        cout << " 73 " << endl;
		        return(true);
		    }
		    No<tipo> * aux = NULL;
		    aux = primeiro;
		    tipo e;
		    for(int i = 0;i < tamanho-1;i++) // percorrendo a lista
		    {
		         e = aux->getDado();
		         if(e > aux->getProximo()->getDado()){ // achando um erro na ordenacao
                    cout << " Erro 75 " << tamanho << endl;
                    return(false);
		         }
		         aux= aux->getProximo();
		    } // nao achou erro
		    cout << " ERRO 76" << endl;
		    return(true);
		}
//------------------------------------------------------------------------------		
		/*	insereOrdenado
		 *		O método insere o elemento de forma ordenada na lista, 
		 *		considerando a ordem crescente de valores. O método as-
		 *		sume que a lista está ordenada. Caso não esteja, a in-
		 *		serão não deve ocorrer. Retorna true, caso a inserção
		 *		ocorra e false caso a inserção não possa ser feita.
		 */
		 
		bool	insereOrdenado(tipo e) 
		{  
		    cout << "100" << endl;
		    No<tipo> * posicao = NULL;
		    posicao = primeiro;
		    if(tamanho == 0)
		    {
		       return(insereCabeca(e));
		    }else if(tamanho > 0){
		        cout << "dentro" << endl;
		        for(int i = 0; i < tamanho; i++)
		        {
		            if(posicao->getDado() > e)
		            {
		            return inserePosicao(e,i);
		            }
		            posicao=posicao->getProximo();
		        }
		        cout << "dentro 2" << endl;
		        return(insereCauda(e));
		    }
		    
            cout << "1000" << endl;
            return(false);
        }
//------------------------------------------------------------------------------
		/*	insereCabeca
		 *		Insere o elemento na cabeça da lista, ou seja, início.
		 *		A inserção só é realizada se houver capacidade 
		 *		disponível. Se a inserção for realizada	retorna true. 
		 *		Caso contrário, o método irá retornar false.
		 */
		 
		bool	insereCabeca(tipo e)
		{
		    
// 		    cout << "cabeca" << endl;
		    No<tipo> *aux = NULL;
		    aux = new No<tipo>(e,primeiro);
		    if(tamanho == 0)
		    {
		        aux->setProximo(NULL);
		        primeiro = aux;
		        tamanho = 1;
// 		        cout << "Erro 101 " << endl;
		        return(true);
		    }else if(tamanho > 0){
		        primeiro = aux;
		        tamanho++;
// 		        cout << " ERRO 103" << endl;
		        return(true);
		    }else{
// 		        cout << "104" << endl;
		        return(false);
		    }
		}
		
//------------------------------------------------------------------------------
		/*	insereCauda
		 *		Insere o elemento na cauda da lista, isto é, final.
		 *		A inserção só é realizada se houver capacidade 
		 *		disponível. Se a inserção for possível,	retorna true.
		 *		Caso contrário o método retorna false.
		 */
		 
		bool	insereCauda(tipo e) 
		{
// 		    cout << "Insere cauda " << endl;
		    No<tipo> *aux = NULL;
		    aux = new No<tipo>(e,NULL);
		    if(tamanho == 0)
		    {
		        primeiro = aux;
		        tamanho = 1;
// 		        cout << " NAO CONSIGO RETORNA VALIDO" << endl;
		        return 1;
		    }
		    else
		    {
		    No<tipo> *cauda = NULL;
		    cauda = primeiro;
		    for(int i =0 ; i < getTamanho()-1 ; i++)
		    {
		        cauda = cauda->getProximo();
		    }
		    cauda->setProximo(aux);
		    aux->setProximo(NULL);
		    tamanho++;
		    cout << " ERRO 117" << endl;
		    return(true);
		    }
		}
//------------------------------------------------------------------------------
		/*	inserePosicao
		 *		Insere o elemento na posicao indicada por p na lista.
		 *		A inserção só é realizada se a posicao p for valida.
		 *      Posicoes validas são aquelas de 0 até tamanho. Se a 
		 *      inserção for possível, insere e retorna true. Caso 
		 *      contrário, o método retorna false.
		 */
		 
		bool	inserePosicao(tipo e, unsigned int p) 
		{
// 		    cout << " insere posicao" << endl;
		    if(p == 0)
		    {
		        insereCabeca(e);
// 		        cout << " insere posicao cabeca" << endl;
		        return(true);
		    }
		    if(p == tamanho)
		    {
		        insereCauda(e);
// 		        cout << "insere posicao cauda" << endl;
		    }
		    if(p > tamanho ){
// 		        cout << "Nao insere posicao pq tamanho < posicao" << endl;
		        return(false);
		    }
		    else{
		        No<tipo> * posicao = NULL;
		        posicao = primeiro;
		        No<tipo> *aux = NULL;
		        aux = new No<tipo>(e,NULL);
		        for(int i = 0; i < p-1; i++)
		        {
		            posicao=posicao->getProximo();
		        }
		        aux->setProximo(posicao->getProximo());
		        posicao->setProximo(aux);
		        tamanho++;
// 		        cout << "Insere Posicao" << endl;
		        return(true);
		    }
		    return(false);
		}
//------------------------------------------------------------------------------
		/*	elementoCabeca
		 *		Atribui para o elemento e a cabeca da lista.
		 * 		Retorna true, se o elemento da cabeca existe,
		 *		isso significa que e conterá o elemento. Caso
		 *      o elemento da cabeça não exista, retorna false,
		 *		isso significa que e contém um valor qualquer
		 *		que não corresponde a cabeça (inexistente) da lista.
		 */
		 
		bool 	elementoCabeca(tipo &e) 
		{
// 		     std::cout << "aqui cabeca" << std::endl;
		    if(tamanho == 0 || primeiro->getDado() == 0 )
		    {
// 		        cout << "148" << endl;
		        return(false);
		    }
 		    e = primeiro->getDado();
// 		    cout << "152" << endl;
		    return(true);
		}
//------------------------------------------------------------------------------
		/*	elementoCauda
		 *		Atribui para e o elemento da cauda da lista.
		 * 		Retorna true, se o elemento da cauda existe,
		 *		isso significa que e conterá o elemento. Caso
		 *      o elemento da cauda não exista, retorna false,
		 *		isso significa que e contém um valor qualquer
		 *		que não corresponde a cauda (inexistente) da lista.
		 */
		 
		bool  	elementoCauda(tipo &e) 
		{
// 		     std::cout << "aqui c" << std::endl;
		    if(tamanho == 0)
		    {
		        cout << "169" << endl;
		        return(false);
		    }
		    No<tipo> *cauda = NULL;
		    cauda = primeiro;
		    for(int i=0;i<tamanho-1;i++)
		    {
		        cauda = cauda->getProximo();
		    }
		    if(cauda->getDado() == 0)
		    {
// 		        cout << "180" << endl;
		        return(false);
		    }else
		    {
		        e = cauda->getDado();
// 		        cout << "185" << endl;
		        return(true);
		    }
        }
//------------------------------------------------------------------------------
		/*	elementoPosicao
		 *		Atribui para e o elemento da posicao p da lista.
		 * 		Retorna true, se o elemento da posicao p existe,
		 *		isso significa que e conterá o elemento. Caso
		 *      o elemento da posicao p não exista, retorna false,
		 *		isso significa que e contém um valor qualquer que
		 *		não corresponde ao elemento p (inexistente) da lista.
		 */
		 
		bool 	elementoPosicao(tipo &e, unsigned int p) 
		{
		    
// 		    std::cout << "aqui" << std::endl;
		    if(tamanho == 0 || p < 0)
		    {
// 		        cout << "203" << endl;
		        return(false);
		    }
		    No<tipo> *posicao = NULL;
		    posicao = primeiro;
		    for(int i=0;i < p;i++)
		    {
		        posicao = posicao->getProximo();
		    }
		    if(posicao->getDado() == 0)
		    {
// 		        cout << "214" << endl;
		        return(false);
		    }else{
		        e = posicao->getDado();
// 		        cout << "218" << endl;
		        return(true);
		    }
		}
//------------------------------------------------------------------------------
		/*	removeCabeca
		 *		Remove o elemento da cabeça da lista (primeiro).
		 *		O elemento removido é armazenado no parâmetro e.
		 *		Se a remoção for possível, retorna true. Caso 
		 *		contrário retorna false, o que implica que o va-
		 *		lor contido em e é inválido.
		 */
		 
		bool 	removeCabeca(tipo &e) 
		{
 		     std::cout << "aqui 2" << std::endl;
		    elementoCabeca(e);
		    if(tamanho == 1)
		    {   
		        e = primeiro->getDado();
		        No<tipo> *aux = NULL;
		        aux = primeiro;
		        delete aux;
		        primeiro = NULL;
		        tamanho = 0;
		        cout << "240" << endl;
		        //cout << (int)e << endl;
		        return(true);
		    }
		    No<tipo> *cabeca = NULL;
		    cabeca = primeiro;
		    primeiro = primeiro->getProximo();
		    delete cabeca;
		    tamanho--;
		    cout << "249" << endl;
		    return(true);
		}
//------------------------------------------------------------------------------
		/*	removeCauda
		 *		Remove o elemento da cauda da lista (último).
		 *		O elemento removido é armazenado no parâmetro e.
		 *		Se a remoção for possível, retorna true. Caso 
		 *		contrário retorna false, o que implica que o va-
		 *		lor contido em e é inválido.
		 */
		 
		bool  	removeCauda(tipo &e) 
		{
 		     std::cout << "aqui 3" << std::endl;
		    elementoCauda(e);
		    if(tamanho == 1)
		    {
		        No<tipo> *aux = NULL;
		        aux = primeiro;
		        delete aux;
		        primeiro = NULL;
		        tamanho = 0;
		        cout << "271" << endl;
		        return(true);
		    }
            No<tipo> *cauda = NULL;
		    cauda = primeiro;
		    for(int i=0;i<tamanho -1;i++)
		    {
		        cauda = cauda->getProximo();
		    }
		    No<tipo> *aux = NULL;
		    aux = cauda->getProximo();
		    cauda->setProximo(NULL);
		    delete aux;
		    tamanho--;
		    cout << "285" << endl;
		    return(true);
		}
//------------------------------------------------------------------------------

		/*	removePosicao
		 *		Remove o elemento da posição p da lista.
		 *		O elemento removido é armazenado no parâmetro e.
		 *		Se a remoção for possível, retorna true. Caso 
		 *		contrário retorna false, o que implica que o va-
		 *		lor contido em e é inválido.
		 */
		 
		bool 	removePosicao(tipo &e, unsigned int p) 
		{
 		     std::cout << "aqui 4" << std::endl;
		    elementoPosicao(e,p);
		    if(tamanho == 1)
		    {
		        No<tipo> *aux = NULL;
		        aux = primeiro;
		        delete aux;
		        primeiro = NULL;
		        tamanho = 0;
		        cout << "308" << endl;
		        return(true);
		    }
		    No<tipo> *posicao = NULL;
		    posicao = primeiro;
		    for(int i=0;i < p-1;i++)
		    {
		        posicao = posicao->getProximo();
		    }
		    No<tipo> *aux = NULL;
		    aux = posicao->getProximo();
		    posicao->setProximo(NULL);
		    delete aux;
		    tamanho--;
		    cout << "322" << endl;
		    return(true);
		    
		}
//------------------------------------------------------------------------------
		/*	posicao
		 *		Retorna a posição de um dado elemento e na lista.
		 * 		Retorna a posição do elemento e, ou -1 se o ele-
		 *		mento não existe na lista.
		 */
		 
		int 	posicao(tipo e) 
		{
 		     std::cout << "aqui 5" << std::endl;
		    if(tamanho == 0){
		    cout << "340" << endl;
		    return(-1);
		    }
		    No<tipo> *aux = NULL;
		    aux = primeiro;
		    if(aux->getDado()== e)
		    {
		        cout << "341" << endl;
		        return(0);
		    }
		    for(int i=0;i<tamanho;i++)
		    {
		        if(aux->getDado()== e)
		        {
		        cout << "349" << endl;
		        return(i);
		        }
		        aux = aux->getProximo();
		    }
		    cout << "353" << endl;
		    return(-1);
		}
//------------------------------------------------------------------------------
		/*	existe
		 *		Verifica se um dado elemento existe na lista.
		 * 		Retorna true se existe, false caso contrário.
		 */
		 
		bool 	existe(tipo e) 
		{
 		     std::cout << "aqui 6" << std::endl;
		    return posicao(e) != -1;
		}


//------------------------------------------------------------------------------

		/*	sobrecarga do operador <<
		 *		Se a lista for vazia deve retornar exatamente: 
		 *      "L = {}" (sem as aspas)
		 * 		
		 *		Se a lista contiver elementos
		 *		"L = {e0, e1, e2, e3, en-1}" (sem as aspas)
		 * 		veja: http://www.inf.pucrs.br/manssour/LinguagemC++/SobrecargaOpIO.pdf
		 *		Mais informações: cout overload, sobrecarga cout, livros.
		 */
		 
		friend ostream &operator<<(ostream &os, Lista<tipo> &l) 
		{
// 		     std::cout << "aqui  <<" << std::endl;
		    if(l.getTamanho() == 0)
		    {
		        cout << "405" << endl;
		        os << "L = {}" << endl;
		    }
		    tipo e;
		    for(int i = 0;i < l.getTamanho() ; i++)
		    {
		       l.elementoPosicao(e,i);
		       os << e << endl;
		    }
		    
		    return os;
		}
//------------------------------------------------------------------------------
};

#endif
