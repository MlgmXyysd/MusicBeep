/*
* Template by MlgmXyysd
*/
#include<bits/stdc++.h>
#include<windows.h>
#include<pthread.h>
#include<music.h>
#define Beat 0
#define MAX_THREAD 10
using namespace std;
void* sound(void* arg);
void Sound(int dwFreq,int dwDuration,int id);
struct args {
	int Freq,Duration;
}argument;
pthread_t tid[MAX_THREAD];
int main(int argc,char **argv) {
	cout<<"Template by MlgmXyysd."<<endl;
	cout<<"(00)"<<endl;
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
