#include <iostream>
#include <string.h>


using namespace std;

struct gra
{
       string tytul;
	    string wydawca;
		 string gatunek;
		  string rok_wydania;
		         string ocena;
};


int main ()

{
gra gra1;

 gra1.tytul = "Counter-Strike";
 gra1.wydawca ="VALVE";
 gra1.gatunek ="FPS";
 gra1.rok_wydania = "1998";
 gra1.ocena = "8/10";
 
 
 	cout<<"Tytul gry:"<<gra1.tytul<<endl;
 	cout<<"Wydawca gry:"<<gra1.wydawca<<endl;
 	cout<<"Gatunek gry:"<<gra1.gatunek<<endl;	
 	cout<<"Rok wydania gry:"<<gra1.rok_wydania<<endl;
 	cout<<"Moja ocena gry:"<<gra1.ocena<<endl;

{
	cout<<"==================="<<endl;
}
	
gra gra2;

 gra2.tytul = "Fifa";
 gra2.wydawca ="Ea sports";
 gra2.gatunek ="Sportowa";
 gra2.rok_wydania ="2020";
 gra2.ocena="7/10";
 	cout<<"Tytul gry:"<<gra2.tytul<<endl;
 	cout<<"Wydawca gry:"<<gra2.wydawca<<endl;
 	cout<<"Gatunek gry:"<<gra2.gatunek<<endl;
 	cout<<"Rok wydania gry:"<<gra2.rok_wydania<<endl;
 	cout<<"Moja ocena gry:"<<gra2.ocena<<endl;
 
 return 0;	
}
