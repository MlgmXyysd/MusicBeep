/*
* Katawaredoki(back) by MlgmXyysd
*/
#include<bits/stdc++.h>
#include<windows.h>
#include<pthread.h>
#include<music.h>
#define Beat 923
#define MAX_THREAD 10
using namespace std;
void* sound(void* arg);
void Sound(int dwFreq,int dwDuration,int id);
struct args {
	int Freq,Duration;
}argument;
pthread_t tid[MAX_THREAD];
int main(int argc,char **argv) {
	cout<<"Katawaredoki(back) by MlgmXyysd."<<endl;
	cout<<"1=C 4/4 =65"<<endl;
	cout<<"(01)"<<endl;
	Sound(B3,Beat*4,1);
	Beep(A6,Beat*2);
	cout<<"end."<<endl;
	return 0;
}
void Sound(int dwFreq,int dwDuration,int id) {
	argument.Freq=dwFreq;
	argument.Duration=dwDuration;
	pthread_create(&tid[id],NULL,sound,(void*)&argument);
}
void* sound(void* arg) {
	struct args *beep=(struct args*)arg;
	Beep(beep->Freq,beep->Duration);
	return NULL;
}
