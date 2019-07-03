template<typename T>
class Pilha
{
public:
    Pilha()
    {
        
    }
    Pilha<T>(int t):tam( t > 0 ? t : 50 ),topo( -1 ),stackPtr( new T[ size ])
    {
   
    } 
	void empilha(T dado)
    {
        if(!PilhaCheia())
        ptrPilha[++topo] = dado;
    }
	T desempilha()
    {
        if(!PilhaVazia())
            topo--;
    }
	T topo()
    {
    if(!PilhaVazia())
        return(ptrPilha[0]);
    }
	int getPosTopo();
	void limparPilha()
    {
        delete []ptrPilha;
    }
	bool PilhaVazia()
    {
    return( tam == -1 ? true : false);
    }
	bool PilhaCheia()
    {
     return(topo == size -1 ? true : false);   
    }
private:
	int tam;
    int topo;
    T *ptrPilha;
};
