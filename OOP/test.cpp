#include <iostream>

using namespace std;

//namespace
/*miejsce gdzie można definiować typy danych, funkcje i stałe
np.*/
namespace ixooy {
   typedef string zbitkiliterspacjiiznakowdiakrytycznych;
   const zbitkiliterspacjiiznakowdiakrytycznych jaNwm = "Ixooy.";
   void uraa ()
   {
      cout<<"Uraaaa!"<<endl;
   }
}


int main (){
    //komentarz jednoliniowy
    
    /*
    komentarz wieloliniowy
    */
   
   //typ string
   /* typ string zapisuje ciągi znaków
   np.*/
   string XD69 = "Ala ma kota, a kot ma Alę";
   cout<<XD69<<endl;
   
   //typ bool 1B
   /* typ bool reprezentuje wartości true i false
   np.*/
   bool beispiel = true;
   if (beispiel == true){
       cout<<"Działa"<<endl;
   }
   //typ char 1B
   /*ten typ zazwyczaj używany jest do przedstawiania znaków
   np.*/
   char przykladA= 'X';
   cout<<przykladA<<endl; 
   
   /* typ char może też być używany do przedstawiania liczb od -128 do 127
   np.*/
   char przykladB = 77;
   /*przy cout char zawsze wysyła znak odpowiadający w ascii wartości a w obliczeniach daje swoją wartość liczbową
   np.*/
   cout<<przykladA<<endl;
   cout<<przykladB<<endl;
   int j = przykladA+przykladB;
   cout<<j<<endl;
   /* istniej też wariant (2B) wchar_t, który działa tak jak char tylko że obejmuje liczby od 0 do 65,535 i służy do zapisu znaków unicodzie
   np.*/
   char przykladC = 'X';
   char przykladD = 77;
   cout<<przykladC<<endl;
   cout<<przykladD<<endl;
   int g = przykladC+przykladD;
   cout<<g<<endl;

   //typ int 4B
   /* typ int reprezentuje wartości -2,147,483,648 do 2,147,483,647
   np.*/
   int cosz = -123265;
   cout<<cosz<<endl;

   //typ float 4B
   /* typ float reprezentuje wartości do 7 liczb po przecinku i notację wykładniczą w postaci 1E-5 czyli 1^-5
   np.*/
   float cousz = -1.23265f; //f jest po to by nie stracić danych podczas konwersji, bo liczby z przcinkiem są domyślnie double ps. używaj kropki nie przecinka
   cout<<cousz<<endl;

   //typ double 8B
   /* typ float reprezentuje wartości do 15 liczb po przecinku i notację wykładniczą w postaci 1E-5 czyli 1^-5
   np.*/
   double cogjsz = -1.23265;
   cout<<cogjsz<<endl;

   //typ void
   /* typ void służy do tworzenia funkcji nie zwracających niczego*/


   //prefixy
   /*unsigned umożliwia "wydłużenie" zakresu liczb dodatnich kosztem i o taką samą ilość jak ujemnych*/
   /*long zwiększa rozmiar double z 8 do 12 B*/
   /*long long zwiększa rozmiar int z 4 do 8 B i przedział do -(2^63) to (2^63)-1 */
   /*const tworzy stałą w odpowiednim typie np. const int haha=64; */
   /*long zwiększa rozmiar double z 8 do 12 B*/

   //aliasy nazw predefiniowanych typów danych
   /*typedef int calkowita;
   calkowita d = 56;*/
   /*using calkowita = int;
   calkowita d = 56;*/
    
   //inicjalizacja zmiennej
   /*int a = 3;*/
   /*lub int a (3);*/
   /*lub int a {};*/
   /*lub int a {3};*/
   /*lub int a = {3};*/

   //operator przypisania
   /*a=3*/
   /*lub a=(3)*/
   /*lub a={3}*/
   /*a += 3 czyli a = a + 3*/
   /*a -= 3 czyli a = a - 3*/
   /*a *= 3 czyli a = a * 3*/
   /*a /= 3 czyli a = a / 3*/
   /*a %= 3 czyli a = a % 3 czyli modulo*/

   //wnioskowanie typu zmiennej z wartości
   /*int zmienna1 = 2;
   decltype(zmienna1) zmienna2;*/
   /*int zmienna1 = 2;
   decltype(zmienna1 + 20) zmienna2;*/
   /*int zmienna1 = 2;
   auto zmienna2 = zmienna1 +2;  zmienna będzie się równała 4*/

   //operatory bitowe
   /*& and*/
   /*| or*/
   /*^ xor*/
   /*- not*/
   /*<< przesunięcie w lewo*/
   /*>> presunięcie w prawo*/

   //operatory porównania
   /*== równy
   np.*/
   if (beispiel == true){
      cout<<"=="<<endl;
   }
   /*!= różny
   np.*/
   if (beispiel != false){
      cout<<"!="<<endl;
   }
   /*< mniejszy
   np.*/
   if (przykladB < przykladA){
      cout<<"<"<<endl;
   }
   /*> większy
   np.*/
   if (przykladA > przykladB){
      cout<<">"<<endl;
   }
   /*<= mniejszy lub równy
   np.*/
   if (przykladB <= przykladA){
      cout<<"<="<<endl;
   }
   /*>= większy lub równy
   np.*/
   if (przykladA >= przykladB){
      cout<<">="<<endl;
   }
    
   //operatory logiczne
   /*&& and
   np.*/
   if ((przykladB <= przykladA)&&(beispiel == true)){
       cout<<"&&"<<endl;
   }
   /*|| or
   np.*/
   if ((przykladB <= przykladA)||(beispiel == true)){
       cout<<"||"<<endl;
   }
   /*! not
   np.*/
   if (!(beispiel == false)){
       cout<<"!"<<endl;
   }

   //sizeof
   /*funkcja sizeof może być stosowana do sprawdzenia ile zajmuje w ramie dana zmienna lub typ zmiennej
   np.*/
   cout<<sizeof(int)<<endl;
   cout<<sizeof beispiel<<endl;

   //operator przecinkowy
   int bok1 = 1, bok2 = 2, bok3 = 3;
   cout<<bok1+bok2+bok3<<endl;

   //konwersja
   /*konwersja niejawna
   np.*/
   float bok3float = bok3;
   cout<<bok3float<<endl;
   /*konwersja niejawna
   np.*/
   float bok4float = float {bok3};
   cout<<bok4float<<endl;

   //namespace u góry
   ixooy::zbitkiliterspacjiiznakowdiakrytycznych cosdfhjsdfgs = "bambolejro";
   cout<<cosdfhjsdfgs<<endl;
   cout<<ixooy::jaNwm<<endl;
   ixooy::uraa();
}