#include <iostream>
using namespace std;

class Forma {
   public:
      void setWidth(int l) {
         largura = l;
      }
      void setHeight(int h) {
         altura = h;
      }

   protected:
      int largura;
      int altura;
};

class CustoDeTinta {
   public:
      int getCost(int area) {
         return area * 70;
      }
};

class Retangulo: public Forma, public CustoDeTinta {
   public:
      int getArea() {
         return (largura * altura);
      }
};

int main(void) {
   Retangulo ret;
   int area;

   ret.setWidth(5);
   ret.setHeight(7);

   area = ret.getArea();

   cout << "Área total: " << ret.getArea() << endl;
   cout << "Custo total: $" << ret.getCost(area) << endl;

   return 0;
}
