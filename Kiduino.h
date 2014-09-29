/*
  Kiduino.h - kiduino library
  Copyright (c) 2014 Adithya Selvaprithiraj.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef Kiduino_h
#define Kiduino_h
#include "Arduino.h"

class Led
{
	public:
		Led(int pin);
		void blink(int a);
		void blink(int a,int b);
		void on();
		void off();
		void fade();
	private:
		int _pin;
		boolean ledstate;
		long int current;
		long int previous;
		int brightness;    
		int fadeAmount;
};

class Ping
{
	public:
		Ping(int pin);
		long int getcm();
		long int getin();
	private:
		long int x;
		long int dist;
		int _pin;
};

class SLed
{
	public:
		SLed();
		void display(int a);
	private:
		boolean number[10];

};

class RGB
{
	public:
		RGB(int pin1,int pin2,int pin3);
		void write(int a,int b,int c);
		void rand();
	private:
		int x;
		int y;
		int z;
		int _pin1;
		int _pin2;
		int _pin3;
};

class SIRC
{
	public:
    SIRC(int pin,int mode);
    int read();
    void write(int value);
    private:
    void sendCode(int number);
    int _pin;
    int val;
    boolean data[12];
};

class PIN
{
	public:
		PIN(int pin,int mode);
		void on();
		void off();
		void awrite(int a);
		int aread();
	private:
		int _pin;
		int analog;
};

class GP120
{
	public:
		GP120(int pin);
		int read();
	private:
		int _pin;
		int val;
		int volts;
		int range;
};

#endif