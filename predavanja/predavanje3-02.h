/**
 *  js vs c:
 *       -knjižnice, printf, scanf, main(), prevajanje, C je statično tipiziran (JS je dinamično tipiziran)
 *       -no boolean (0, 1) -- printf("%d\n", 3<7);
 *       -ni === in !===
 *       -operator deljenja -- 4/8 = 0 ampak 4/8.0 = 0.5
 *           -zahteva za pretvorbo tipa: 4/(float)8 = 0.5
 *   8-bitno število: od 0 do 2^8-1 (11111111)
 *   signed: predznačen (lahko + ali -), do 2^(n-1)-1 || unsigned: brez predznaka (samo +), od -2^(n-1) do 2^(n-1)-1
 *
 *   realni tip (ieee floating point):
 *   p (1 bit), ekspr. (e) (8 bitov), mantisa (m) (23 bitov)
 *   vrednost: (-1)^p * (1.m) * 2^(e-127)
 *
 *   Enojna natančnost: 32 bitov
 *   (single precision) 7.22 signifikantnih mest -- 7 mest je gotovo pravilnih, osma cifra je 22% pravilna
 *
 *   Dvojna natančnost: 64 bitov
 *   (double precision) 15.95 signifikantnih mest
 *
 *   Tip |           dolžina (bajt)|     formatno določilo
 *   char |          1 |                 %d ali %c
 *   short, int |    vsaj 2 |            %d
 *   long |          vsaj 4 |            %ld
 *   float |         obicajno 4 |        %f
 *   double |        obicajno 8 |        %lf
 *   void |          ni vrednosti
 *
 *   unsigned; char (%u), int (%u), long (%lu)
 *
 *   %d dela do 16 bitov
 */

 void predavanje3_02 () {
     printf("### Predavanje 2.3.:\n");
}
