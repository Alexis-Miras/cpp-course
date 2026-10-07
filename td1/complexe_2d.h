#ifndef COMPLEXE2D_H
#define COMPLEXE2D_H

using namespace std;

class Complexe2D {
    private:
        double reel;
        double imaginaire;
    public:
        Complexe2D();
        virtual ~Complexe2D() = default;
        Complexe2D(double reel, double imaginaire);
        Complexe2D(double value);
        Complexe2D(const Complexe2D& complexe);

        void setReel(double newReel);
        double getReel() const;
        void setImaginaire(double newImaginaire);
        double getImaginaire() const;
        Complexe2D add(Complexe2D a, Complexe2D b);
        Complexe2D sub(Complexe2D a, Complexe2D b);
        Complexe2D mult(Complexe2D a, Complexe2D b);
        Complexe2D div(Complexe2D a, Complexe2D b);
        bool sup(Complexe2D a, Complexe2D b);
        bool inf(Complexe2D a, Complexe2D b);
};


#endif