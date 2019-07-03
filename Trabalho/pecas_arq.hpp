#ifndef PECAS_ARQ_HPP
#define PECAS_ARQ_HPP

#include <iostream>
#include <cmath>
#include "mapa.hpp"
#include "funcoes.hpp"

class Pecas_arq{
    friend int posicao_vert(const int &);
    friend int posicao_hor(const char &);
public:
    virtual void Movimento(const char [], char &, char &, int &, int &, Mapa &, int) = 0;
private:
};

class Bispo_arq : public Pecas_arq{
public:
    virtual void Movimento(const char dados_do_arquivo[], char &casa_inicial_char, char &casa_final_char, int &casa_inicial_int, int &casa_final_int, Mapa &ma, int rodada);
};

class Cavalo_arq : public Pecas_arq{
public:
    virtual void Movimento(const char dados_do_arquivo[], char &casa_inicial_char, char &casa_final_char, int &casa_inicial_int, int &casa_final_int, Mapa &ma, int rodada);
};

class Peao_arq : public Pecas_arq{
public:
    virtual void Movimento(const char dados_do_arquivo[], char &casa_inicial_char, char &casa_final_char, int &casa_inicial_int, int &casa_final_int, Mapa &ma, int rodada);
};

class Rainha_arq : public Pecas_arq{
public:
    virtual void Movimento(const char dados_do_arquivo[], char &casa_inicial_char, char &casa_final_char, int &casa_inicial_int, int &casa_final_int, Mapa &ma, int rodada);
};

class Rei_arq : public Pecas_arq{
public:
    virtual void Movimento(const char dados_do_arquivo[], char &casa_inicial_char, char &casa_final_char, int &casa_inicial_int, int &casa_final_int, Mapa &ma, int rodada);
};

class Torre_arq : public Pecas_arq{
public:
    virtual void Movimento(const char dados_do_arquivo[], char &casa_inicial_char, char &casa_final_char, int &casa_inicial_int, int &casa_final_int, Mapa &ma, int rodada);
};


#endif
