// Tentando acessar um objeto const com fun��es membro n�o-const.
#include "Time.h" // inclui defini��o da classe Time

int main()
{
    Time wakeUp( 6, 45, 0 ); // objeto n�o-constante
    const Time noon( 12, 0, 0 ); // objeto constante

    // OBJETO      FUN��O MEMBRO
    wakeUp.setHour( 18 );  // n�o-const     n�o-const

    noon.setHour( 12 );    // const         n�o-const <--- ERRO

    wakeUp.getHour();      // n�o-const     const <--- ERRO

    noon.getMinute();      // const         const
    noon.printUniversal(); // const         const

    noon.printStandard();  // const         n�o-const <--- ERRO
    return 0;
} // fim de main
