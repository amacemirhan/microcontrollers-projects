void interrupt(){
PORTB.B1=~PORTB.B1 ;
T0IF_bit=0; //interrupt flag reset
TMR0=0x130; //Timer degeri
}
void main() {
           OPTION_REG=0x02;
           GIE_bit=1;
           T0IE_bit=1;
           TRISB.B1=0;
           PORTB=0;
           TMR0=130;
           while(1){
           }
}