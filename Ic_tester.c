/*******************************************************
This program was created by the CodeWizardAVR V3.46a 
Automatic Program Generator
© Copyright 1998-2021 Pavel Haiduc, HP InfoTech S.R.L.
http://www.hpinfotech.ro

Project : 
Version : 
Date    : 1/6/2022
Author  : 
Company : 
Comments: 


Chip type               : ATmega32A
Program type            : Application
AVR Core Clock frequency: 1.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 512
*******************************************************/

#include <mega32a.h>
#include <delay.h>
// Standard Input/Output functions
#include <stdio.h>
#define Read_BIT(reg,bit) (reg&(1<<bit))>>bit
#define  LOW 0 
#define  HIGH 1
#define OUTPUT 1
#define INPUT 0
#define TESTSW  PIND.2
#define LED_Green PORTD.0
#define LED_Red PORTD.3
#define PIN1 PORTA.4
#define PIN2 PORTA.5
#define PIN3 PORTA.6
#define PIN4 PORTA.7
#define PIN5 PORTD.4
#define PIN6 PORTD.5
#define PIN7 PORTD.6
#define PIN9 PORTB.3
#define PIN10 PORTB.2
#define PIN11 PINB.1
#define PIN12 PINB.0
#define PIN13 PINC.7
#define PIN14 PINC.6
#define PIN15 PINC.5
unsigned char IC_74163(void)
{
    char i,j,D=0b0101;
           PIN2=LOW;
           PIN1=HIGH;
           PIN7=HIGH;
           PIN9=HIGH;
           PIN10=HIGH;
           PIN1=LOW;
           PIN2=HIGH;delay_ms(100);PIN2=LOW;
           PIN1=HIGH; 
           for(i=0;i<9;i++)
           {
           
        delay_ms(10);
           if(((PIN11<<3)+ (PIN12<<2)+(PIN13<<1)+(PIN14<<0)) !=i) 
           {return(0);}
           
           
        delay_ms(10);
           if(PIN15!=LOW)
            {return(0);}  
            
              PIN2=HIGH;delay_ms(100);PIN2=LOW;
            }
            
        delay_ms(10);
            if(((PIN11<<3)+(PIN12<<2)+(PIN13<<1)+(PIN14<<0)) !=i) 
           {return(0);}
             
          // if(PIN15!=HIGH)
            //{return(0);}  
           // LED_Green=1;
            for(j=0;j<2;j++)
           {  
              
              PIN6=Read_BIT(D,3);
              PIN5=Read_BIT(D,2);
              PIN4=Read_BIT(D,1);
              PIN3=Read_BIT(D,0);
              PIN9=LOW;
              PIN2=HIGH;delay_ms(100);PIN2=LOW;
              PIN9=HIGH; 
              
              delay_ms(10);
              if(((PIN11<<3)+(PIN12<<2)+(PIN13<<1)+(PIN14<<0))!=D)
              {return(0);}
              D=D^0b1111;
              
           }}
 unsigned char IC_74160(void)
{    char i,j,D=0b0101;
           PIN2=LOW;
           PIN1=HIGH;
           PIN7=HIGH;
           PIN9=HIGH;
           PIN10=HIGH;
           PIN1=LOW;
           PIN1=HIGH; 
            
           for(i=0;i<9;i++)
           {delay_ms(10);
           if(((PIN11<<3)+ (PIN12<<2)+(PIN13<<1)+(PIN14<<0)) !=i) 
           {return(0);} 
            delay_ms(10);   
            if(PIN15!=LOW)
            {return(0);}  
            
              PIN2=HIGH;delay_ms(100);PIN2=LOW;
            }
            if(((PIN11<<3)+(PIN12<<2)+(PIN13<<1)+(PIN14<<0)) !=i) 
           {return(0);}
            
           //if(PIN15!=1)
            //{return(0);}
           
           for(j=0;j<2;j++)
           {  
              PIN9=LOW;
              PIN6=Read_BIT(D,3);
              PIN5=Read_BIT(D,2);
              PIN4=Read_BIT(D,1);
              PIN3=Read_BIT(D,0);
              PIN2=HIGH;delay_ms(100);PIN2=LOW;
              PIN9=HIGH;
              delay_ms(10);
              if(((PIN11<<3)+(PIN12<<2)+(PIN13<<1)+(PIN14<<0))!=D)
              {return(0);}
              D=D^0b1111;
           }
           return(1);
}
unsigned char IC_74161(void)
{
     char i,j,D=0b0101;
     
           PIN2=LOW;
           PIN1=HIGH;
           PIN7=HIGH;
           PIN9=HIGH;
           PIN10=HIGH;
           PIN1=LOW; 
           delay_ms(100);
           PIN1=HIGH; 
           
           
           for(i=0;i<15;i++)
           { delay_ms(10);
           if(((PIN11<<3)+ (PIN12<<2)+(PIN13<<1)+(PIN14<<0)) !=i) 
           {return(0);} 
           delay_ms(10);
           if(PIN15!=LOW)
            {return(0);};
            
            PIN2=HIGH;delay_ms(100);PIN2=LOW;}
            delay_ms(10);
             if(((PIN11<<3)+(PIN12<<2)+(PIN13<<1)+(PIN14<<0)) !=i) 
           {return(0);}  
            
           
           if(PIN15!=1)
            {return(0);} 
            
            for(j=0;j<2;j++)
            {
              PIN6=Read_BIT(D,3);
              PIN5=Read_BIT(D,2);
              PIN4=Read_BIT(D,1);
              PIN3=Read_BIT(D,0);
              PIN9=LOW;
              PIN2=HIGH;delay_ms(100);PIN2=LOW; 
            
              PIN9=HIGH;
              delay_ms(10);
              if(((PIN11<<3)+(PIN12<<2)+(PIN13<<1)+(PIN14<<0))!=D)
              {return(0);}
              D=D^0b1111; 
            }
            return(1);}
void main(void)
{
  DDRD.2=INPUT;  DDRD.0=OUTPUT;
  DDRD.3=OUTPUT;   //LED & BUTTOTN
 DDRA.4=OUTPUT; DDRA.5=OUTPUT; DDRA.6=OUTPUT; DDRA.7=OUTPUT; DDRD.4=OUTPUT;DDRD.5=OUTPUT; DDRD.6=OUTPUT;
 DDRD.7=OUTPUT; DDRB.3=OUTPUT; DDRB.2=OUTPUT; DDRC.4=OUTPUT;
 DDRB.1=INPUT;DDRB.0=INPUT;DDRC.7=INPUT;DDRC.6=INPUT; DDRC.5=INPUT;
 
 
// USART initialization
// Communication Parameters: 8 Data, 1 Stop, No Parity
// USART Receiver: Off
// USART Transmitter: On
// USART Mode: Asynchronous
// USART Baud Rate: 9600
UCSRA=(0<<RXC) | (0<<TXC) | (0<<UDRE) | (0<<FE) | (0<<DOR) | (0<<UPE) | (0<<U2X) | (0<<MPCM);
UCSRB=(0<<RXCIE) | (0<<TXCIE) | (0<<UDRIE) | (0<<RXEN) | (1<<TXEN) | (0<<UCSZ2) | (0<<RXB8) | (0<<TXB8);
UCSRC=(1<<URSEL) | (0<<UMSEL) | (0<<UPM1) | (0<<UPM0) | (0<<USBS) | (1<<UCSZ1) | (1<<UCSZ0) | (0<<UCPOL);
UBRRH=0x00;
UBRRL=0x06;


while (1)
      {    
      while (TESTSW)
      { 
        delay_ms(10);
           while (TESTSW);
           if( IC_74160())
           {
           LED_Green=1;          
           printf("74160\n");
           LED_Red=0; 
           
           }
           else if (IC_74161())
                   {
                      LED_Green=1;
                      printf("74161\n");
                      LED_Red=0;
                   } 
           else if (IC_74163())
              {
                  LED_Green=1;
                  printf("74163\n");
                   LED_Red=0;
              }
           else
              {
              LED_Red=1;
              printf("Empty\n"); 
               LED_Green=0;
              }
                   
}}}
