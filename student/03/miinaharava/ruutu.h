#ifndef RUUTU_H
#define RUUTU_H

#include <vector>
#include <iostream>

class Ruutu;
using Lauta = std::vector< std::vector< Ruutu > >;

class Ruutu
{
public:
    // Rakentaja. Param.: sijainti, miinatilanne, lauta
    Ruutu(int x, int y, bool onkoMiinaa, Lauta*);

    // tulostaa laudan...
    void tulosta(std::ostream& virta);

    // tarkistaa, monta miinaa viereisissä ruuduissa
    void laskeViereiset();

    // tarkistaa, onko peli päättynyt
    bool onkoValmis();

    // tarkistaa, onko ruudussa lippua
    bool onkoLippu();

    // poistaa lipun ruudusta
    void poistaLippu();

    // lisää lipun ruutuun
    void lisaaLippu();

private:
    // avaa ruudun asettamalla sille arvon 0
    bool avaa();

    // ruudun sijainti ja miinatilanne
    int x_;
    int y_;
    bool onkoMiinaa_;

    // osoitin lautaan
    Lauta* lauta_;
};

#endif // RUUTU_H
