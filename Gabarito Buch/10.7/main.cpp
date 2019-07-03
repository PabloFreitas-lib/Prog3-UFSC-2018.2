#include <iostream>
using namespace std;

class DoubleSubscriptedArray
{
public:
        DoubleSubscriptedArray()
    {
        try{
            *chessBoard = new int[c];
            for(int i =0 ; i < c ; i++){
                chessBoard[i] = new int[l];
            }
        }catch(exception & e)
        {
        chessBoard = nullptr; 
        cout << "Erro na controy" << endl;
        }
    }
    
       ~DoubleSubscriptedArray()
    {
        for(int i=0;i<c;i++)
        delete []chessBoard[i];
        delete []chessBoard;
    }

        int getSize(void) const
    {
        return(l,c);
    }
    DoubleSubscriptedArray & operator()(int , int) const
    {
        
        
    }

private:
    int **chessBoard;
    int l,c;
};

int main()
{


    return 0;
}



