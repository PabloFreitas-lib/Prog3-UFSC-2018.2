/*
                                    (CASTING)
upcasting
downcasting ( nao seguro)

dynamic_cast eh mais seguro. ( esse tipo de operacao depende somente se a classe base esta preparada para esse tipo, caso nao esteja sera avisado um erro de compilacao)

Utilizacao do polimorfismo , deve ser utilizado a palavra "virtual"
ao chamar a palavra reservada virtual ele verifica se pode ser utilzado esse objeto como polimorfo
--> Isso faz diferenca na hora de fazer o downcasting de forma segura ou nao

    Classes Abstratas
    
Vitual de forma pura.

Para isso eh necessario uma atribuicao "=0" , forca com que a funcao seja virtual pura. Pois ela nao vai ter uma implementacao e vai forca que a implementacao seja feita nas classes derivadas

Virtual X Virtual Pura


    Destrutores Vituais
    
Geralmente utilizado com ponteiros
Mesma ideia da palavra reservada 'virtual'
Isso vai tornar todos os destrutores de calsse derivada mesmo que ele nao tenham o mesmo nome do destrutor da classe base

    Heranca Multipla

Classe do Terceiro nivel herda duas classes que estao no nivel superior e as superiores possuirem o mesmo metodos(?) 

typeid --> usadado para saber qual o tipo da classe utilizada

*/
