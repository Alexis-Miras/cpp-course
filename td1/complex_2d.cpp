#include <iostream>
#include "complexe_2d.h"
using namespace std;

Complexe2D::Complexe2D() {
    reel = 0.0;
    imaginaire = 0.0;
}

Complexe2D::Complexe2D(double r, double i) {
    reel = r;
    imaginaire = i;
}

Complexe2D::Complexe2D(double value) {
    reel = value;
    imaginaire = value;
}

Complexe2D::Complexe2D(const Complexe2D& complexe) {
    reel = complexe.reel;
    imaginaire = complexe.imaginaire;
}

void Complexe2D::setReel(double newReel) {
    reel = newReel;
}

double Complexe2D::getReel() const {
    return reel;
}

void Complexe2D::setImaginaire(double newImaginaire) {
    imaginaire = newImaginaire;
}

double Complexe2D::getImaginaire() const {
    return imaginaire;
}

Complexe2D Complexe2D::add(Complexe2D a, Complexe2D b) {
    Complexe2D c;
    c.reel = a.reel + b.reel;
    c.imaginaire = a.imaginaire + b.imaginaire;
    return c;
}

Complexe2D Complexe2D::sub(Complexe2D a, Complexe2D b) {
    Complexe2D c;
    c.reel = a.reel - b.reel;
    c.imaginaire = a.imaginaire - b.imaginaire;
    return c;
}

Complexe2D Complexe2D::mult(Complexe2D a, Complexe2D b) {
    Complexe2D c;
    c.reel = a.reel * b.reel - a.imaginaire * b.imaginaire;
    c.imaginaire = a.imaginaire * b.reel + a.reel * b.imaginaire;
    return c;
}

Complexe2D Complexe2D::div(Complexe2D a, Complexe2D b) {
    Complexe2D c;
    double denominateur = b.reel * b.reel + b.imaginaire * b.imaginaire;
    c.reel = (a.reel * b.reel + a.imaginaire * b.imaginaire) / denominateur;
    c.imaginaire = (a.imaginaire * b.reel - a.reel * b.imaginaire) / denominateur;
    return c;
}

bool Complexe2D::sup(Complexe2D a, Complexe2D b) {
    double moda = (a.reel * a.reel + a.imaginaire * a.imaginaire);
    double modb = (b.reel * b.reel + b.imaginaire * b.imaginaire);
    return moda > modb;
}

bool Complexe2D::inf(Complexe2D a, Complexe2D b) {
    double moda = (a.reel * a.reel + a.imaginaire * a.imaginaire);
    double modb = (b.reel * b.reel + b.imaginaire * b.imaginaire);
    return moda < modb;
}