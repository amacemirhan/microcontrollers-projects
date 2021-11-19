#define tus PORTC.B1
#define led PORTB.B1
void main() {
TRISB.B1 = 0;
TRISC.B1 = 1; //bit eriþimi
while(1){
if (tus == 0){
led = ~led;
while(tus==0); //Tus birakmayi bekle
}
}
}