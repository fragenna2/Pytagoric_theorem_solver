#include <iostream>
#include <cmath>


using namespace std;


int main()
{
    int scelta;
    float cateto_maggiore;
    float cateto_minore;
    float ipotenusa;


    cout << "Ciao, inserisci un valore per iniziare a lavorare: Ipotenusa[1], cateto maggiore[2], cateto minore[3]\n";
    cout << "Se necessiti di una funzione in particolare contatta l'amministratore dell'app\n";

    cin >> scelta;


    if (scelta == 1) {

    
        cout << "Inserisci il cateto maggiore: \n";
        cin >> cateto_maggiore;
        cout << "Cateto minore: \n";
        cin >> cateto_minore;

        ipotenusa = cateto_maggiore*cateto_maggiore + cateto_minore*cateto_minore;
        ipotenusa = sqrt(ipotenusa);

        cout << "L'ipotenusa misura: " << ipotenusa << "\n";

        system("pause");

    } else if (scelta == 2) {
        //cateto maggiore

        cout << "Inserisci l'ipotenusa: \n";
        cin >> ipotenusa;
        cout << "Inserisci il cateto minore: \n";
        cin >> cateto_minore;

        cateto_maggiore = ipotenusa*ipotenusa - cateto_minore*cateto_minore;
        cateto_maggiore = sqrt(cateto_maggiore);

        cout << "Il cateto maggiore misura: " << cateto_maggiore << "\n";

        system("pause");

    } else if (scelta == 3) {
        //cateto minore

        cout << "Inserisci l'ipotenusa: \n";
        cin >> ipotenusa;
        cout << "Inserici il cateto maggiore: \n";
        cin >> cateto_maggiore;


        cateto_minore = ipotenusa*ipotenusa - cateto_maggiore*cateto_maggiore;
        cateto_minore = sqrt(cateto_minore);




        
        cout << "Il cateto minore misura: " << cateto_minore << "\n";

        system("pause");

    }
    


    

}