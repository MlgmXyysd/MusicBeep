/*
* Katawaredoki(back) by MlgmXyysd
*/
#include<bits/stdc++.h>
#include<windows.h>
#include<pthread.h>
#include<music.h>
#define Beat 923
using namespace std;
void* sound(void* arg);
struct args {
	int Freq,Duration;
}argument;
int main(int argc,char **argv) {
	pthread_t tid[10];
	cout<<"Katawaredoki(back) by MlgmXyysd."<<endl;
	cout<<"1=C 4/4 =65"<<endl;
	cout<<"(01)"<<endl;
	
	cout<<"end."<<endl;
	return 0;
}
void* sound(void* arg) {
	struct args *beep=(struct args*)arg;
	Beep(beep->Freq,beep->Duration);
	return NULL;
}

