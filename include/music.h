/*
* Music Beep Head File by MlgmXyysd.
* mlgmxyysd991@gmail.com
* mlgmxyysd@vip.qq.com
* mlgmxyysd@qq.com
* Bilibili @mlgmxyysd
*/
#ifndef MUSIC
	#define Z1 66
	#define Z2 74
	#define Z3 83
	#define Z4 87
	#define Z5 98
	#define Z6 110
	#define Z7 124
	#define A1 131
	#define A2 147
	#define A3 165
	#define A4 175
	#define A5 196
	#define A6 220
	#define A7 247
	#define B1 262
	#define B2 296
	#define B3 330
	#define B4 349
	#define B5 392
	#define B6 440
	#define B7 494
	#define C1 523
	#define C2 587
	#define C3 659
	#define C4 698
	#define C5 784
	#define C6 880
	#define C7 988
	#define D1 1047
	#define D2 1175
	#define D3 1319
	#define D4 1397
	#define D5 1568
	#define D6 1760
	#define D7 1976
	#define S 1.05946
	#define MUSIC
#endif
#ifndef _WINDOWS_H
	#include<windows.h>
#endif
#ifndef PTHREAD_H
	#include<pthread.h>
#endif
struct args {
	int Freq,Duration;
}argument;
void* sound(void* arg) {
	struct args *beep=(struct args*)arg;
	Beep(beep->Freq,beep->Duration);
	return NULL;
}
void Sound(int dwFreq,int dwDuration) {
	pthread_t tid;
	argument.Freq=dwFreq;
	argument.Duration=dwDuration;
	pthread_create(&tid,NULL,sound,(void*)&argument);
}
