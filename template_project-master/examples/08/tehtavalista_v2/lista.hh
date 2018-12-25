#ifndef LISTA_HH
#define LISTA_HH

#include <string>
#include <memory>

using namespace std;

class Lista {
 public:
   Lista();

   void lisaa_alkio_loppuun(const string& lisattava_tehtava);
   bool poista_alkio_alusta(string& poistettu_tehtava);
   bool onko_tyhja() const;
   void tulosta() const;

 private:
   struct Listan_alkio {
      string tehtava;
      shared_ptr<Listan_alkio> seuraavan_osoite;
   };

   shared_ptr<Listan_alkio> ensimmaisen_osoite_;
   shared_ptr<Listan_alkio> viimeisen_osoite_;
};

#endif
