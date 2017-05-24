// 16.5.2017
unsigned char zapakiraj(unsigned char high, unsigned char low){
    return((high<<4) + low);
}
int odpakiraj(unsigned char x,unsigned char part){
    if(part==1) return x>>4;
    if(part==2) return x&0x0f;
}

void vaja10(){
    unsigned char x=zapakiraj(10,4);
    x++;
    return 0;
}
/**
 * V spremenljivko x elimo shraniti vrednost, katere dvojiški \
 * zapis je 1100 0001.
 *
 * DEC | HEX | BIN
 * 0   | 0x0 | 0000
 * 1   | 0x1 | 0001
 * 2   | 0x2 | 0010
 * 3   | 0x3 | 0011
 * 4   | 0x4 | 0100
 * 5   | 0x5 | 0101
 * 6   | 0x6 | 0110
 * 7   | 0x7 | 0111
 * 8   | 0x8 | 1000
 * 9   | 0x9 | 1001
 * 10  | 0xa | 1010
 * 11  | 0xb | 1011
 * 12  | 0xc | 1100
 * 13  | 0xd | 1101
 * 14  | 0xe | 1110
 * 15  | 0xf | 1111
 *
 * Spremenljivko a tipa unsigned int ima desetiško vrednost 17. \
 * Kaj izpiše printf("%x",a);? (11)
 *
 * Spremenljivka x tipa unsigned short ima vrednost 0xE0F0.
 *                              1110 0000 1111 0000 >^
 * Kakšna vrednost (vprašanje, odgovor(bin)/odgovor(hex)):
 * ~x 0001 1111 0000 1111 / 1F0F (eniški komplement)
 * x&0x21 0000 0000 0010 0000 / 0x20
 * x|0x1010 1111 0000 1111 0000 / 0xF0F0
 * x^0xFFFF 0001 1111 0000 1111 / 0x1F0F
 * x>>3 0001 1100 0001 1110 / 0x1C1E
 * x<<1 1100 0001 1110 0000 / 0xC1E0
 */
