// 25.4.2017
/** Kazalci
 *
 *  Kaj se bo izpisalo na zaslonu?
 *  float x=14.8;
 *  printf("%u",&x); <-- izpiše se naslov
 *  x=10;
 *  printf("%u",&x); <-- izpiše se isti naslov kot zgoraj -- spremenljivke nismo premikali po pomnilniku
 *
 *  char neki[]="ABCDEFGH";
 *  printf("%s",&neki[3]); <-- izpiše DEFGH
 *  printf("%s",&neki[8]); <-- izpiše prazno
 *  printf("%s",&neki[9]); <-- ne vemo, kaj izpiše (nakljulne naslove, če sploh kaj)
 *  printf("%s",neki); <-- izpiše cel string
 *               ^že ime stringa je kazalec na neki[0]
 *
 *  int *k; <-- štirje bajti se rezervirajo za k
 *  int x=50; <-- štirje bajti se rezervirajo za x
 *  k=&x; <-- naslov od x se shrani na spomin k
 *  *k=60; <-- na naslov, shranjen v k, se shrani 60 (torej na x s shrani 60)
 *  ^operator indirekcije
 *  printf("%d",x); <-- izpiše 60
 *
 *  int *k;
 *  int x=50;
 *  *k=60; <-- na neznano mesto shrani 60
 *  k=&x; <-- naslov od x se shrani na spomin k
 *  printf("%d",x);
 *
 *  printf("%u","Kje sem?"); <-- vrne naslov, kjer je shranjen "Kje sem?"
 *
 *  char niz1[10];
 *  char *s;
 *  strcpy(s,"test"); <-- napaka, ker s ni nastavljen
 *  s="test"; <-- ok, s nastavimo na kos pomnilnika, kjer se začne "test"
 *  niz1="test"; <-- ne gre, niz 1 je konstanta (naslov pomnilnika)
 *  strcpy(niz1,"test"); <-- ok, 5 znakov se skopira na naslov niz1
 *
 *  Kazalec k kaže na spremenljivko tipa short (2 bajta). Kaj se zgodi z
 *  vrednostjo kazalca (naslovom) v naslednjih primerih/stavkih?
 *  k--; <-- vrednost k se zmanjša za 2
 *  k+=8; <-- vrednost k se poveča za 16
 *  (*k)++; <-- vrednost k se ne spremeni (spremeni se *k -- za 1)
 *  *k+=4; <-- vrednost k se ne spremeni (spremeni se *k za +4)
 */
