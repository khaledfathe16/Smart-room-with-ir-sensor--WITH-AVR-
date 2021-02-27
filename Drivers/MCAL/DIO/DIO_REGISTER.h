#ifndefine DIO_REGISTER_H
#define DIO_REGISTER_H

#define DDRA   *((volatile * )0x3A) 
#define PORTA  *((volatile * )0x3B)
#define PINA   *((volatile * )0x39)

#define DDRB    *((volatile * )0x37)
#define PORTB   *((volatile * )0x38)
#define PINB    *((volatile * )0x36)

#define DDRC    *((volatile * )0x34)
#define PORTC   *((volatile * )0x35)
#define PINC    *((volatile * )0x33)

#define DDRD    *((volatile * )0x31)
#define PORTD   *((volatile * )0x32)
#define PIND    *((volatile * )0x30)















#endif