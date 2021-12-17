#define true 1
#define false 0
sbit LCD_RS at RB4_bit;
sbit LCD_EN at RB5_bit;
sbit LCD_D4 at RB0_bit;
sbit LCD_D5 at RB1_bit;
sbit LCD_D6 at RB2_bit;
sbit LCD_D7 at RB3_bit;
sbit LCD_RS_Direction at TRISB4_bit;
sbit LCD_EN_Direction at TRISB5_bit;
sbit LCD_D4_Direction at TRISB0_bit;
sbit LCD_D5_Direction at TRISB1_bit;
sbit LCD_D6_Direction at TRISB2_bit;
sbit LCD_D7_Direction at TRISB3_bit;
int i,j;
int iside,jside;
char kelime1[]="Merhaba";
char kelime2[]="Dunya";
int displayLen=18;
void main() {
      ADCON1=0x80;
      Lcd_Init();
      Lcd_Cmd(_LCD_CURSOR_OFF);
      iside=true;
      jside=true;
      for(i=1,j=1;;){
      Lcd_Cmd(_LCD_CLEAR);
      Lcd_Out(1,i,kelime1);
      Lcd_Out(2,j,kelime2);
      Delay_ms(500);
      if(i+sizeof(kelime1)==displayLen){
      i--;
      iside=false;
      }else if(i==1){
      i++;
      iside=true;
      }else if(iside==true){
      i++;}
      else if(iside==false){
      i--;}
      if(j+sizeof(kelime2)==displayLen){
      j--;
      jside=false;
      }else if(j==1){
      j++;
      jside=true;
      }else if(jside==true){
      j++;}
      else if(jside==false){
      j--;}
      
      }
      


      
}