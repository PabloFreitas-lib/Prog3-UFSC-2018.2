// Tentando acessar um objeto const com funções membro não-const.
#include "Time.h" // inclui definição da classe Time

int main()
{
    Time wakeUp( 6, 45, 0 ); // objeto não-constante
    const Time noon( 12, 0, 0 ); // objeto constante

    // OBJETO      FUNÇÃO MEMBRO
    wakeUp.setHour( 18 );  // não-const     não-const

    noon.setHour( 12 );    // const         não-const <--- ERRO

    wakeUp.getHour();      // não-const     const <--- ERRO

    noon.getMinute();      // const         const
    noon.printUniversal(); // const         const

    noon.printStandard();  // const         não-const <--- ERRO
    return 0;
} // fim de main
