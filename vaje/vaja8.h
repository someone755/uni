//18.4.2017
/** PWM - pulse width modulation
 *  DAC - digital to analog converter
 *
 *
 *  void setup(){
 *      int i;
 *      for(i=40;i<47;i++) pinMode(i,OUTPUT);
 *  }
 *
 *  Map številk na 8-segmentnem zaslončku
 *      a | b | c | d | e | f | g | .
 *      0   1   1   0   0   0   0   0 // 1
 *      1   1   0   1   1   0   1   0 // 2
 *  char cifre[][9]= {"11111100",//0
 *                    "01100000",//1
 *                    "11011010",//2
 *                    "11110010",//3
 *                    "01100110",//4
 *                    "10110110" //5
 *  };
 *  void loop(){
 *
 *  }
 *  void dispNum(int num){
 *      int i;
 *      for(i=0;i<8;i++){
 *          if(cifre[num][i]=='1') digitalWrite(40+1,LOW);
 *          else digitalWrite(40+i,HIGH);
 *      }
 *  }
 */
