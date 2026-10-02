#include <iostream>
#include "complexe_2d.h"

int main() {
     Complexe2D c(5.0, 2.0);
     Complexe2D b(10.0);
     Complexe2D a(b);
     Complexe2D d;

     cout << "c = " << c.getReel() << " + " << c.getImaginaire() << "i" << endl;
     cout << "b = " << b.getReel() << " + " << b.getImaginaire() << "i" << endl;
     cout << "a = " << a.getReel() << " + " << a.getImaginaire() << "i" << endl;
     cout << "d = " << d.getReel() << " + " << d.getImaginaire() << "i" << endl;

     d.setReel(3.0);
     d.setImaginaire(4.0);

     cout << "d apres setters = " << d.getReel() << " + " << d.getImaginaire() << "i" << endl;

     Complexe2D resultatAdd = c.add(c, d);
     cout << "c + d = " << resultatAdd.getReel() << " + " << resultatAdd.getImaginaire() << "i" << endl;

     Complexe2D resultatSub = c.sub(c, d);
     cout << "c - d = " << resultatSub.getReel() << " + " << resultatSub.getImaginaire() << "i" << endl;

     Complexe2D resultatMult = c.mult(c, d);
     cout << "c * d = " << resultatMult.getReel() << " + " << resultatMult.getImaginaire() << "i" << endl;

     Complexe2D resultatDiv = c.div(c, d);
     cout << "c / d = " << resultatDiv.getReel() << " + " << resultatDiv.getImaginaire() << "i" << endl;

     if (c.sup(c, d)) {
          cout << "c est plus grand que d" << endl;
     } else {
          cout << "c n'est pas plus grand que d" << endl;
     }

     if (c.inf(c, d)) {
          cout << "c est plus petit que d" << endl;
     } else {
          cout << "c n'est pas plus petit que d" << endl;
     }

    return 0;
}

/*
#include "myclass.h"

// 4. 
int main() {
    MyClass a("Hello World!");
    a.print_my_element();

    return 0;
}

// 1. - 2. - 3.

int main() {
    string a;
    getline(cin, a);

    cout << a << endl;

    return 0;
}

int main(int argc, char* argv[]) {
    string a = argv[1];

    cout << a << endl;

    return 0;
}
*/
