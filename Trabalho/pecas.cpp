#include "pecas.hpp"

// Funcoes base das pecas

bool Pecas::q2_d(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m, int &p){
    for(int i=(casa_inicial_int-1)*2;i>=(casa_final_int+1)*2;i-=2){
        for(int j=(casa_inicial_char-1)*4;j>=(casa_final_char+1)*4;j-=4){
            if(m.tabuleiro[i][j] != ' '){
                p=0;
            }
        }
    }
    return(p);
}

bool Pecas::q1_d(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m, int &p){
    for(int i=(casa_inicial_int-1)*2;i>=(casa_final_int+1)*2;i-=2){
        for(int j=(casa_inicial_char+1)*4;j<=(casa_final_char-1)*4;j+=4){
            if(m.tabuleiro[i][j] != ' '){
                p=0;
            }
        }
    }
    return(p);
}

bool Pecas::q3_d(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m, int &p){
    for(int i=(casa_inicial_int+1)*2;i<=(casa_final_int-1)*2;i+=2){
        for(int j=(casa_inicial_char-1)*4;j>=(casa_final_char+1)*4;j-=4){
            if(m.tabuleiro[i][j] != ' '){
                p=0;
            }
        }
    }
    return(p);
}
        
bool Pecas::q4_d(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m, int &p){
    for(int i=(casa_inicial_int+1)*2;i<=(casa_final_int-1)*2;i+=2){
        for(int j=(casa_inicial_char+1)*4;j<=(casa_final_char-1)*4;j+=4){
            if(m.tabuleiro[i][j] != ' '){
                p=0;
            }
        }
    }
    return(p);
}

bool Pecas::vn(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m, int &p){
    for(int i=(casa_inicial_int-1)*2;i>=(casa_final_int+1)*2;i-=2){
        if(m.tabuleiro[i][casa_inicial_char*4]!=' '){
            p=0;
        }
    }
    return(p);
}

bool Pecas::vp(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m, int &p){
    for(int i=(casa_inicial_int+1)*2;i<=(casa_final_int-1)*2;i+=2){
        if(m.tabuleiro[i][casa_inicial_char*4]!=' '){
            p=0;
        }
    }
    return(p);
}

bool Pecas::hn(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m, int &p){
    for(int j=(casa_inicial_char-1)*4;j>=(casa_final_char+1)*4;j-=4){
        if(m.tabuleiro[casa_inicial_int*2][j]!=' '){
            p=0;
        }
    }
    return(p);
}

bool Pecas::hp(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m, int &p){
    for(int j=(casa_inicial_char+1)*4;j<=(casa_final_char-1)*4;j+=4){
        if(m.tabuleiro[casa_inicial_int*2][j]!=' '){
            p=0;
        }
    }
    return(p);
}

// Funcao polimorfica do bispo

bool Bispo::Movimento(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m,int &jogador){
    int p=1;
    if(casa_final_char == casa_inicial_char && casa_final_int == casa_inicial_int) // checar se o movimento nao saiu do lugar
    {
     p=0;   
    return(p);
    }
    if(fabs(casa_final_int - casa_inicial_int) != fabs(casa_final_char - casa_inicial_char)){
        p=0;
        return(p);
    }
    
    if(casa_inicial_int>casa_final_int){
        if(casa_inicial_char>casa_final_char){
            p=q2_d(casa_final_int, casa_final_char, casa_inicial_char, casa_inicial_int,m,p);
        }
        else{
            p=q1_d(casa_final_int, casa_final_char, casa_inicial_char, casa_inicial_int,m,p);
        }
    }
    else{
        if(casa_inicial_char>casa_final_char){
            p=q3_d(casa_final_int, casa_final_char, casa_inicial_char, casa_inicial_int,m,p);
        }
        else{
            p=q4_d(casa_final_int, casa_final_char, casa_inicial_char, casa_inicial_int,m,p);
        }
    }
    
    if(jogador%2==1){
        if(m.tabuleiro[casa_final_int*2][casa_final_char*4]>64 && m.tabuleiro[casa_final_int*2][casa_final_char*4]<91){
            p=0;
            return(p);
        }
    }
    if(jogador%2==0){
        if(m.tabuleiro[casa_final_int*2][casa_final_char*4]>96 && m.tabuleiro[casa_final_int*2][casa_final_char*4]<122){
            p=0;
            return(p);
        }
    }
    
    return(p);
}

// Funcao polimorfica da torre

bool Torre::Movimento(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m,int &jogador){
    int p=1;
     if(casa_final_char == casa_inicial_char && casa_final_int == casa_inicial_int) // checar se o movimento nao saiu do lugar
    {
     p=0;   
    return(p);
    }
    if(casa_inicial_char!=casa_final_char && casa_inicial_int!=casa_final_int){
        p=0;
        return(p);
    }
    
    if(casa_inicial_char==casa_final_char){
        if(casa_inicial_int>casa_final_int){
            p=vn(casa_final_int, casa_final_char, casa_inicial_char, casa_inicial_int,m,p);
        }
        else{
            p=vp(casa_final_int, casa_final_char, casa_inicial_char, casa_inicial_int,m,p);
        }
    }
    else{
        if(casa_inicial_char>casa_final_char){
            p=hn(casa_final_int, casa_final_char, casa_inicial_char, casa_inicial_int,m,p);
        }
        else{
            p=hp(casa_final_int, casa_final_char, casa_inicial_char, casa_inicial_int,m,p);
        }
    }
    
    if(jogador%2==1){
        if(m.tabuleiro[casa_final_int*2][casa_final_char*4]>64 && m.tabuleiro[casa_final_int*2][casa_final_char*4]<91){
            p=0;
            return(p);
        }
    }
    if(jogador%2==0){
        if(m.tabuleiro[casa_final_int*2][casa_final_char*4]>96 && m.tabuleiro[casa_final_int*2][casa_final_char*4]<122){
            p=0;
            return(p);
        }
    }
    
    return(p);
}

// Funcaoo polimorfica do cavalo
bool Cavalo::Movimento(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m,int &jogador){
    int p=1;
     if(casa_final_char == casa_inicial_char && casa_final_int == casa_inicial_int) // checar se o movimento nao saiu do lugar
    {
     p=0;   
    return(p);
    }// Verificando se o movimeto é em L
    
    if(fabs(casa_final_char - casa_inicial_char) == 2) 
    {//L na horizontal 
        if(fabs(casa_final_int - casa_inicial_int)!= 1)
        {
            p = 0;
            return(p);
        }
    }else if (fabs(casa_final_int - casa_inicial_int) == 2){
        // L na vertical
        if(fabs(casa_final_char - casa_inicial_char) != 1)
        {
            p = 0;
            return(p);
        }
    }
    if(fabs(casa_final_char - casa_inicial_char) == 1) 
    {//L na horizontal 
        if(fabs(casa_final_int - casa_inicial_int)!= 2)
        {
            p = 0;
            return(p);
        }
    }else if (fabs(casa_final_int - casa_inicial_int) == 1){
        // L na vertical
        if(fabs(casa_final_char - casa_inicial_char) != 2)
        {
            p = 0;
            return(p);
        }
    }
    if(casa_final_char == casa_inicial_char || casa_final_int == casa_inicial_int)
    {
     p = 0;
     return(p);
    }
    
    if(jogador%2==1)
        {
        if(m.tabuleiro[casa_final_int*2][casa_final_char*4]>64 && m.tabuleiro[casa_final_int*2][casa_final_char*4]<91)
        {
            p=0;
            return(p);
        }
        }
    if(jogador%2==0)
    {
        if(m.tabuleiro[casa_final_int*2][casa_final_char*4]>96 && m.tabuleiro[casa_final_int*2][casa_final_char*4]<122)
        {
            p=0;
            return(p);
        }
    }
    	else{
            return(p);
        }
    return(p);
}

// Funcao polimorfica da rainha

bool Rainha::Movimento(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m,int &jogador){
    int p=1;
     if(casa_final_char == casa_inicial_char && casa_final_int == casa_inicial_int) // checar se o movimento nao saiu do lugar
    {
     p=0;   
    return(p);
    }
    if(casa_inicial_int!=casa_final_int){
        if(casa_inicial_char!=casa_final_char){
            if(fabs(casa_final_int - casa_inicial_int) != fabs(casa_final_char - casa_inicial_char)){
                p=0;
                return(p);
            }
        }
    }
    
    if(casa_inicial_char==casa_final_char){
        if(casa_inicial_int>casa_final_int){
            p=vn(casa_final_int, casa_final_char, casa_inicial_char, casa_inicial_int,m,p);
        }
        else{
            p=vp(casa_final_int, casa_final_char, casa_inicial_char, casa_inicial_int,m,p);
        }
    }
    else if(casa_inicial_int==casa_final_int){
        if(casa_inicial_char>casa_final_char){
            p=hn(casa_final_int, casa_final_char, casa_inicial_char, casa_inicial_int,m,p);
        }
        else{
            p=hp(casa_final_int, casa_final_char, casa_inicial_char, casa_inicial_int,m,p);
        }
    }
    else if(casa_inicial_int>casa_final_int){
        if(casa_inicial_char>casa_final_char){
            p=q2_d(casa_final_int, casa_final_char, casa_inicial_char, casa_inicial_int,m,p);
        }
        else{
            p=q1_d(casa_final_int, casa_final_char, casa_inicial_char, casa_inicial_int,m,p);
        }
    }
    else{
        if(casa_inicial_char>casa_final_char){
            p=q3_d(casa_final_int, casa_final_char, casa_inicial_char, casa_inicial_int,m,p);
        }
        else{
            p=q4_d(casa_final_int, casa_final_char, casa_inicial_char, casa_inicial_int,m,p);
        }
    }
    
    if(jogador%2==1){
        if(m.tabuleiro[casa_final_int*2][casa_final_char*4]>64 && m.tabuleiro[casa_final_int*2][casa_final_char*4]<91){
            p=0;
            return(p);
        }
    }
    if(jogador%2==0){
        if(m.tabuleiro[casa_final_int*2][casa_final_char*4]>96 && m.tabuleiro[casa_final_int*2][casa_final_char*4]<122){
            p=0;
            return(p);
        }
    }
    
    return(p);
}

// Funcao polimorfica do rei

bool Rei::Movimento(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m,int &jogador){
    int p=1;
     if(casa_final_char == casa_inicial_char && casa_final_int == casa_inicial_int) // checar se o movimento nao saiu do lugar
    {
     p=0;   
    return(p);
    }
    if(fabs(casa_inicial_int-casa_final_int)>1 || fabs(casa_inicial_char-casa_final_char)>1){
        p=0;
        return(p);
    }
    
    if(jogador%2==1){
        if(m.tabuleiro[casa_final_int*2][casa_final_char*4]>64 && m.tabuleiro[casa_final_int*2][casa_final_char*4]<91){
            p=0;
            return(p);
        }
    }
    if(jogador%2==0){
        if(m.tabuleiro[casa_final_int*2][casa_final_char*4]>96 && m.tabuleiro[casa_final_int*2][casa_final_char*4]<122){
            p=0;
            return(p);
        }
    }
    
    return(p);
}

// Função polimórfica do peão
bool Peao::Movimento(int casa_final_int, int casa_final_char, int casa_inicial_char, int casa_inicial_int, Mapa &m,int &jogador)
{   
    int p =1;
     if(casa_final_char == casa_inicial_char && casa_final_int == casa_inicial_int) // checar se o movimento nao saiu do lugar
    {
    //cout << " 1 " << endl;
     p=0;   
    return(p);
    }
    // mais de uma na horizontal
    if(fabs( casa_inicial_char - casa_final_char) > 1)
    {
        //cout << " 2"<< endl;
     p = 0;
     return(p);
    }
    
    
    if(jogador%2==1) // vermelho
    {
        if(casa_inicial_int > casa_final_int) // voltar casa
        {
           // cout << " 3 " << endl;
            p = 0;
            return(p);
        }
          if(casa_inicial_int == 2) // primeiro movimento do peao
        {
            if(static_cast<unsigned>(casa_final_int - casa_inicial_int) > 2)
            {
            //    cout << " 4 " << endl;
             p = 0;
             return(p);
            }
        }
        if(m.tabuleiro[casa_final_int*2][casa_final_char*4]>96 && m.tabuleiro[casa_final_int*2][casa_final_char*4]<122 && casa_final_char == casa_inicial_char) // nao pula outros peoes
        {
            //cout << " 5 " << endl;
            p=0;
            return(p);
        }
        if(casa_final_char != casa_inicial_char)
        {
            if(m.tabuleiro[casa_final_int*2][casa_final_char*4]== ' ' ) // Buraco vazio na diagonal ou nao tem ninguem
            {
            //    cout << " 6 " << endl;
            p=0;
            return(p);
            }
        }
        if(m.tabuleiro[casa_final_int*2][casa_final_char*4]>64 && m.tabuleiro[casa_final_int*2][casa_final_char*4]<91) // nao pula outros peoes
        {
            //cout << " 1 -Nao come amiguinho" << endl;
            p=0;
            return(p);
        }
        if(casa_inicial_int != 2 && static_cast<unsigned>(casa_final_int - casa_inicial_int) != 1)
        {
            //cout << " 7 " << endl;
         p=0;
         return(0);
        }
        
        
    }
    else if(jogador%2==0) // azul
    {
        if(casa_inicial_int < casa_final_int) // voltar casa
        {
            p=0;
            return(p);
        }
        if(casa_inicial_int == 7) // primeiro movimento do peao
        {
            if(static_cast<unsigned>(casa_inicial_int - casa_final_int) > 2)
            {
             p = 0;
             return(p);
            }
        }
        if(m.tabuleiro[casa_final_int*2][casa_final_char*4]>64 && m.tabuleiro[casa_final_int*2][casa_final_char*4]<91 && casa_final_char == casa_inicial_char) // nao pula outros peoes
        {
            p=0;
            return(p);
        }
        if(casa_final_char != casa_inicial_char)
        {
            if(m.tabuleiro[casa_final_int*2][casa_final_char*4]==' ')
            {
            p=0;
            return(p);
            }
        }
        if(m.tabuleiro[casa_final_int*2][casa_final_char*4]>96 && m.tabuleiro[casa_final_int*2][casa_final_char*4]<122) // nao pula outros peoes
        {
            //cout << " 1- Nao come amiguinho" << endl;
            p=0;
            return(p);
        }
        if(casa_inicial_int != 7 && static_cast<unsigned>(casa_inicial_int - casa_final_int) != 1)
        {
            //cout << " 7 " << endl;
         p=0;
         return(0);
        }
        
         
    }
    
    return(p);
}



