/** Arduino
 *  14 sponk: D0, D1, D2, ..., D13
 *  Vcc = 5V
 *
 *
 *  Imax = 20 mA (pri Vcc = 5V)
 *
 *  V Arduino IDE:
 *  void setup(){
 *      pinMode(13,OUTPUT); <-- pin št. 13, OUTPUT mode (ali INPUT, ampak mi delamo LEDico)
 *  }
 *  void loop(){
 *      digitalWrite(13,HIGH); <-- na sponki 13 bo zdej HIGH; U= 5 V
 *      delay(500); <-- zaksnitev 500 milisekund pred naslednjim ukazom
 *      digitalWrite(13,LOW); <-- LOW; U = 0 V
 *      delay(500);
 *  }
 *
 *  4 LEDice v vzorcu
 *  void setup(){
 *      int i=10;
 *      for (i;i<14;i++){
 *          pinMode(i,OUTPUT);
 *      }
 *  }
 *  void loop(){
 *      static int i=10;
 *      digitalWrite(i,LOW);
 *      i++;
 *      if(i==14) i=10;
 *      digitalWrite(i,HIGH);
 *      delay(100);
 *  }
 *
 *  Delamo lahko svoje vzorce -- ukaz = string iz #...#9, kjer # prižje luč, . ugasne, 9 čas delaya v 20ms (torej 180ms).
 *  void ledice(int sponka, char *ukaz){
 *      char ch;
 *      int i=0;
 *      for(i;ukaz[i];i++){
 *          if(ukaz[i]=="#"){
 *              digitalWrite(i+sponka,HIGH)
 *          } else if(ukaz[i]=='.'){
 *              digitalWrite(i+sponka,LOW);
 *          } else {
 *              delay((ukaz[i]-'0')*20);
 *          }
 *      }
 *  }
 *  Setup ostane isti!
 *  void loop(){
 *      ledice(10,"....9");
 *      ledice(10,"####9");
 *          ali pa tole
 *      char program[][6] = {"#...9",".#..9","..#.9","...#9","..#.9",".#..9","#...9","####9","....9","####9","-...9","stop"}; //assuming 4 LEDs, 1 znak za čas
 *      int i=0;
 *      for(i;program[i][0]!='s';i++){
 *          ledice(10,program[i];
 *      }
 *  }
 */
