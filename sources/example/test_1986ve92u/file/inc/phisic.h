﻿#ifndef PHISIC_H_INCLUDED
#define PHISIC_H_INCLUDED

/*
================================================================//
=================           WDG             ====================//
================================================================//
*/

/*
================================================================//
=================           PORT            ====================//
================================================================//
*/

#define TEST_PIN_PE6_ON             MDR_PORTE->RXTX |=  BIT6;
#define TEST_PIN_PE6_OFF            MDR_PORTE->RXTX &= ~BIT6;


// All Port
void Port_Init(void);

/*
================================================================//
=================           TIMER           ====================//
================================================================//
*/


/*
================================================================//
=================        SPI_Slave_ap       ====================//
================================================================//
*/


/*
================================================================//
=================            I2C            ====================//
================================================================//
*/

#endif // PHISIC_H_INCLUDED
