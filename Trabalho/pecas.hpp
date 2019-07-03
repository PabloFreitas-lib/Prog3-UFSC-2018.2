#ifndef PECAS_HPP
#define PECAS_HPP

#include <iostream>
#include <cmath>
#include "mapa.hpp"

class Pecas{
    friend bool teste(const char &, const int &, const int &, const int &, const int &, Mapa &,int &jogador);
    friend int posicao_vert(const int &);
    friend int posicao_hor(const char &);
public:
    virtual bool Movimento(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m,int &jogador)=0;
    //virtual bool Movimento(const char &peca, int char_inicial, int char_final, int int_inicial, int int_final, Mapa &,) = 0;
    virtual bool q2_d(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m, int &p);
    virtual bool q1_d(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m, int &p);
    virtual bool q3_d(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m, int &p);
    virtual bool q4_d(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m, int &p);
    virtual bool vn(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m, int &p);
    virtual bool vp(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m, int &p);
    virtual bool hn(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m, int &p);
    virtual bool hp(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m, int &p);
private:
    
};

class Bispo : public Pecas{
public:
    virtual bool Movimento(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m,int &jogador);
};

class Torre : public Pecas{
public:
    virtual bool Movimento(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m,int &jogador);
};

class Cavalo : public Pecas{
public:
    virtual bool Movimento(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m,int &jogador);
};

class Rainha : public Pecas{
public:
    virtual bool Movimento(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m,int &jogador);
};

class Rei : public Pecas{
public:
    virtual bool Movimento(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m,int &jogador);
};

class Peao : public Pecas{
public:
    virtual bool Movimento(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m,int &jogador);
};


#endif
