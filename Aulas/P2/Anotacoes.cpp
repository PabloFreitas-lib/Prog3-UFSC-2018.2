/*
------------------------- Sobrecarga de operadores: ----------------------------------

- Utilizada quando pelo menos um dos operandos são um objeto;
- Somente pode ser aplicada em operadores ja existentes
- Nao pode ser altera a ordem de precedencia do operador e nem a associatividade( esqueda para direita entao vai ser ate o final), nem pode se alterar o numero de parametros, NO ENTANTO VERIFICAR QUANDO OS OPERADORES FOREM () {} [] ( DEVEM SER SOBRECARRAGAGOS COMO METODOS) -> OPERADORES DE ATRIBUIÇÃO
- Operadores de atribuição nao necessitam de sobrecarga( = , ',' , & )
- Nao pode ser sobrecarregador operadores de manipulacao de escopo ( . , :: , ?: , *. . *)
- Existem duas formas de se utilizar um operator, palavra reservada
Sintaxe :tipo operator sinal do operator(operando(s)) cost(facultativo){}
Podem ser atribuidas de duas forma:
Funcão: declarada como funcao global , necessita de friend para ter acesso as classes que ela modificar, necessita de dois parametros (operandos), utilizada mais quando se quer utilizar dois objetos diferentes.
Metodo: decladara dentro do escopo da classe que ela vai ser utilizada , somente eh necessario passar um parametro como parametro, pois o outro ( o da esquerda) sera implicitamente declarado.
- Bons metodos de programacao:
 Utilizar o return como const Objeto & e passar como parametro por referencia , const Objeto & .
 na hr do return desse objeto utilizar *this(semelhante ao cascateamento).
- cin >> extracao de fluxo de dados
 cout << inserçao de fluxo de dados

- Como diferenciar operadores pre-fixados dos pos-fixados:
Pre:
metodo nao possuem parametros
funcao possuem somente um parametro
Pos:
metodo possuem somente um parametro
funcao possuem dois parametros
- Construtores com um unico argumento devem ser utilizados a palavra explicit para evitar erros de conversao automática.
-

----------------------------------- Herança: -----------------------------------------

- Utilizado principalmente para reusabilidade de codigo
- Definido em classes BASES e classes DERIVADAS. Geralmente divididas em organização do tipo árvore para melhor entendimento.
- Sintaxe
class base{
public:
    
protected:

private:    
}

class derivada: TIPO base{
public:
    
protected:

private:
}
-  Quando se tem esse tipo de hierarquia , quando a classe derivada eh criada tb é criado um objeto para a classe base, no entando quando eh criado um objeto para classe base nao eh criado um objeto para suas classes derivadas.
- Para acessar funcoes da classe base eh necessaria a utilizacao de acesso de escopo "::"
- Esse TIPO pode ser do public ,protected, private:

#switch case

    case public:
a partir da classe derivada eu posso acessar o public e protected no escopo da mesma, no entanto o private so podera ser acessado por funcoes que sejam da classe base.
Os publics podem ter acesso a patir do escopo global

    case protected:
O que era public e protected da classe base agora passa a ser protected, somente tendo acesso no escopo da classe derivada. No escopo global nao se tem muito acesso, somente ao public do da classe derivada.

    case private:
        Dai complicou mesmo, tudo que era public protected ou private da classe base passou a ser agora private, entao só podem ser acessadas a patir de outras funcoes

- Ordem de chamada de construtores Eh do Topo da arvore para o final, destrutores eh exatamente o contrário
- Não se herda funcoes friends
- Não se herda sobrecarga de operadores
- Quando metodos possuem nomes iguais, a chamada prevalece o metodo da derivada, para chamar explicitamente o metodo da classe base eh necessario a utilizacao do operador resolução de escopo (::).

- Existem dois tipos de hierarquias:
Podem ser do tipo simples(unica classe base) ou multipla(mais de uma classe base)
Sintaxe:
class base1{
};
class base2{
};
class derivada: TIPO base1,base2{
};
----------------------------- Polimorfismo: -----------------------------------------

Introducao:

Modo de programacao  para criacao de codigos que sao facilmente expansiveis e genéricos. Dinamizar a reutilizacao de código.

Trabalhamos muito na ideia de que se o objeto da classe derivada eh criado um da classe base tb eh criado juntamente no entando se uma da classe base for criado nao sera criado os seus respectivos derivados.

No começo foi trabalhado para obter acesso a funcoes do escopo da base a partir de um ponteiro de classe derivada eh preciso a utilizacao de um ponteiro que aponta para a base e apontar esse ponteiro para o endereço do objeto da classe derivada.
No entanto se eu quiser acessar funcoes do escopo da classe derivada com esse mesmo procedimento a cima eu serei barrado , seguindo o principio inialmente explicado.

ERRO COMUM:: aponta o ponteiro de classe derivada para objeto de classe básica , isso nao pode acontecer pois a classe derivada nao eh um objeto para a classe base , a classe base que eh um objeto para a classe derivada

Caso eu aponte um ponteiro da classe base para a classe derivada , na utilizacao desse ponteiro eu posso acessar livremente a classe base, no entando caso eu queria acessar as funcoes da classe derivada ira Acusar ERRO!!!


Manipulação de objetos da classe base:

Upcasting: Como se fosse um "upgrade" do ponteiro(ou referencia de objeto) da classe derivada para um ponteiro da classe base

Restrições:
-
-


Downcasting:

dynamic_cast:



















*/
