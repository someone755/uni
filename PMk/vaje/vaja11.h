// 23.5.2017
/**
 * Kako pobrišemo bita b0 in b2 v 32-bitni spremenljivki "status", \
 * ne, da bi spremenili vrednosti preostalih bitov.
 * Odg: status & 0xFFFFFFFA;
 * Kako postavimo bita b0 in b2?
 * Odg: 0x00000005
 *
 * Kako negiramo b4 in b5 v 32-bitni spremenljivki "status"?
 * Odg:vstatus ^= 0x00000030
 *
 * Kako v 32-bitni spremenljivki "status" hkrati postavimo b0 in b1,\
 * ter pobrišemo b2?
 * Odg: status = (status | 0x00000003) & 0xFFFFFFFB;
 *
 * Spremenljivka x je tipa float ima vrednost 0.4. Kateri od\
 * naslednjih izrazov imajo vrednost 1?
 * a) x == 0.4; -- ne, 0.4 se zapiše kot double, x pa je float
 * b) 0.4 == x; -- ne, isto kot a)
 * c) (double)x == 0.4; -- ne
 * d) x == (float)0.4 -- ja
 * e) 0.3 < x && x < 0.5; -- ja
