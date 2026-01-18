#include <iostream>
#include "gamenew.h"

using namespace std;

int main()
{
    int maxNum = 50;
    GameNew peliOlio(maxNum);

    peliOlio.play();
    peliOlio.printGameResult();

    cout << "Arvasit oikein" << endl;

    return 0;
}
