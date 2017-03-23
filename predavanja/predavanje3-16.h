/**
 *
 *
 *
 *
 *
 */

int ga; // global, static
void foo () {
    int a = 0; // Brez določene vrednosti se lokalnim spremenljivkam nastavi "naključna" vrednost
               // Dinamična -- izbriše se iz spomina, ko se funkcija konča
    static int sa; // Statična -- obstaja vedno, nedostopna drugim funkcija (ker je lokalna)
    // ga in sa = 0 -- lastnost statičnih neinicializiranih spremenljivk
    a++;
    ga++;
    sa++;
    printf("a = %d, ga = %d, sa = %d\n", a, ga, sa);
}
void predavanje3_16 () {
    int i; // loacl, dynamic
    for (i=0; i<5; i++) {
        foo();
    }
}

/*struct vektor { // nov podatkovni tip // commenting out for sake of 3-23 which actually teaches structures
    float x;
    float y;
    float z;
};
struct vektor q; //
struct vektor v = {1,0,0}; // {1}
struct vektor w = {0,1,0}; // {0,1}

struct vektor vektorskiprodukt(struct vektor a, struct vektor b) {

};
 /** Strukture (struct) -- nov podatkovni tip
  *  tip1 ime1;
  *  tip2 ime2;
  *
  *  struct ime spr
  *
  */
