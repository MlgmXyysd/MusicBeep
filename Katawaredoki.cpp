/*
* Katawaredoki by MlgmXyysd
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
	cout<<"Katawaredoki by MlgmXyysd."<<endl;
	cout<<"1=C 4/4 =65"<<endl;
	cout<<"(01)"<<endl;
	Beep(C5,Beat*2);
	Beep(C2,Beat*2);
	cout<<"(02)"<<endl;
	argument.Freq=C3;
	argument.Duration=Beat*4;
	pthread_create(&tid[1],NULL,sound,(void*)&argument);
	Beep(B5,Beat*4);
	cout<<"(03)"<<endl;
	argument.Freq=C5;
	argument.Duration=Beat*2;
	pthread_create(&tid[1],NULL,sound,(void*)&argument);
	Beep(C1,Beat*2);
	argument.Freq=C4;
	argument.Duration=Beat*2;
	pthread_create(&tid[2],NULL,sound,(void*)&argument);
	argument.Freq=C1;
	argument.Duration=Beat*2;
	pthread_create(&tid[3],NULL,sound,(void*)&argument);
	Beep(B6*S,Beat*2);
	cout<<"(04)"<<endl;
	Beep(C1,Beat*4); //Checked
	cout<<"(05)"<<endl;
	Beep(C5,Beat);
	Beep(C5,Beat*0.75);
	Beep(C5,Beat/4);
	Beep(C5,Beat/2);
	Beep(C3,Beat/2);
	Beep(C2,Beat/2);
	Beep(C2,Beat/4);
	Beep(C1,Beat/4); //Checked
	cout<<"(06)"<<endl;
	Beep(C3,Beat*3.5);
	Beep(C1,Beat/2); //Checked
	cout<<"(07)"<<endl;
	Beep(C5,Beat);
	Beep(C5,Beat*0.75);
	Beep(C1,Beat/4);
	Beep(D1,Beat/2);
	Beep(C7,Beat/4);
	Beep(C6,Beat/4);
	Beep(C5,Beat/2);
	Beep(C5,Beat/4);
	Beep(C6,Beat/4); //Checked
	cout<<"(08)"<<endl;
	Beep(C5,Beat);
	Beep(C3,Beat/3);
	Beep(C4,Beat/3);
	Beep(C3,Beat/3);
	Beep(C2,Beat*1.5);
	Beep(C1,Beat/2); //Checked
	cout<<"(09)"<<endl;
	Beep(C5,Beat);
	Beep(C5,Beat*0.75);
	Beep(C5,Beat/4);
	Beep(C5,Beat/2);
	Beep(C3,Beat/2);
	Beep(C2,Beat/2);
	Beep(C2,Beat/4);
	Beep(C1,Beat/4); //Checked
	cout<<"(10)"<<endl;
	Beep(C3,Beat*2.5);
	Beep(B5,Beat/2);
	Beep(C1,Beat/4);
	Beep(C2,Beat/4);
	Beep(C3,Beat/4);
	Beep(C2,Beat/2); //Checked
	cout<<"(11)"<<endl;
	//C2,Beat/4 Linked up.
	Beep(C1,Beat/4);
	Beep(C1,Beat/4);
	Beep(B6,Beat/4);
	Beep(C1,Beat/2);
	Beep(C1,Beat/4);
	Beep(C1,Beat*0.75);
	Beep(B4,Beat/2);
	Beep(C1,Beat/4);
	Beep(C2,Beat/4);
	Beep(C3,Beat/4);
	Beep(C2,Beat/2); //Checked
	cout<<"(12)"<<endl;
	//C2,Beat/4 Linked up.
	Beep(B5,Beat/4);
	Beep(C1,Beat/2);
	Beep(C5,Beat/2);
	Beep(C1,Beat/4);
	Beep(C2,Beat*0.75);
	Beep(B5,Beat/2);
	Beep(C1,Beat/4);
	Beep(C2,Beat/4);
	Beep(C3,Beat/4);
	Beep(C2,Beat/2); //Checked
	cout<<"(13)"<<endl;
	//C2,Beat/4 Linked up.
	Beep(C1,Beat/4);
	Beep(C1,Beat/4);
	Beep(B6,Beat/4);
	Beep(C1,Beat/2);
	Beep(C1,Beat/4);
	Beep(C1,Beat*0.75);
	Beep(B4,Beat/2);
	Beep(C1,Beat/4);
	Beep(C2,Beat/4);
	Beep(C3,Beat/4);
	Beep(C2,Beat*0.75); //Checked
	cout<<"(14)"<<endl;
	//C2,Beat/2 Linked up.
	Beep(B5,Beat/2);
	Beep(C5,Beat/2);
	Beep(C1,Beat/4);
	Beep(C2,Beat*1.5);
	Beep(C1,Beat/4);
	Beep(C2,Beat/4);
	Beep(C1,Beat*1.75); //Checked
	cout<<"(15)"<<endl;
	//C1,Beat*1.5 Linked up.
	argument.Freq=C5;
	argument.Duration=Beat*1.75;
	pthread_create(&tid[1],NULL,sound,(void*)&argument);
	Beep(C1,Beat*1.75);
	Beep(C3,Beat*2.5); //Checked
	cout<<"(16)"<<endl;
	//C3,Beat*2 Linked up.
	argument.Freq=D1;
	argument.Duration=Beat*2;
	pthread_create(&tid[1],NULL,sound,(void*)&argument);
	Beep(C5,Beat*2); //Checked
	cout<<"(17)"<<endl;
	Beep(C1,Beat*1.5);
	argument.Freq=C2;
	argument.Duration=Beat*2;
	pthread_create(&tid[1],NULL,sound,(void*)&argument);
	Beep(C1,Beat*2);
	Beep(C3,Beat*4.5); //Checked
	cout<<"(18)"<<endl;
	//C3,Beat*4 Linked up. Checked
	cout<<"(19)"<<endl;
	argument.Freq=C5;
	argument.Duration=Beat/2;
	pthread_create(&tid[1],NULL,sound,(void*)&argument);
	Beep(C1,Beat/2);
	Beep(B6,Beat/2);
	Beep(C5,Beat*0.75);
	Beep(C5,Beat/4);
	Beep(C5,Beat/2);
	Beep(C3,Beat/2);
	Beep(C2,Beat/2);
	Beep(C2,Beat/4);
	Beep(C1,Beat/4); //Checked
	cout<<"(20)"<<endl;
	Beep(C3,Beat*3.5);
	Beep(C1,Beat/2); //Checked
	cout<<"(21)"<<endl;
	Beep(C5,Beat);
	Beep(C5,Beat*0.75);
	Beep(C1,Beat/4);
	Beep(D1,Beat/2);
	Beep(C7,Beat/4);
	Beep(C6,Beat/4);
	Beep(C5,Beat/2);
	Beep(C5,Beat/4);
	Beep(C6,Beat/4); //Checked
	cout<<"(22)"<<endl;
	Beep(C5,Beat*0.75);
	Beep(B5,Beat/4);
	Beep(C3,Beat/3);
	Beep(C4,Beat/3);
	Beep(C3,Beat/3);
	Beep(C2,Beat*1.5);
	Beep(C1,Beat/2); //Checked
	cout<<"(23)"<<endl;
	Beep(C5,Beat);
	Beep(C5,Beat*0.75);
	Beep(C5,Beat/4);
	Beep(C5,Beat/2);
	Beep(C3,Beat/2);
	Beep(C2,Beat/2);
	Beep(C2,Beat/4);
	Beep(C1,Beat/4); //Checked
	cout<<"(24)"<<endl;
	Beep(C3,Beat*2.75);
	Beep(B5,Beat/4);
	Beep(C1,Beat/4);
	Beep(C2,Beat/4);
	Beep(C3,Beat/4);
	Beep(C2,Beat/2); //Checked
	cout<<"(25)"<<endl;
	//C2,Beat/4 Linked up.
	Beep(C1,Beat/4);
	Beep(C1,Beat/4);
	Beep(B6,Beat/4);
	Beep(C1,Beat/2);
	Beep(C1,Beat/4);
	Beep(C1,Beat*0.75);
	Beep(B4,Beat/2);
	Beep(C1,Beat/4);
	Beep(C2,Beat/4);
	Beep(C3,Beat/4);
	Beep(C2,Beat/2); //Checked
	cout<<"(26)"<<endl;
	//C2,Beat/4 Linked up.
	Beep(B5,Beat/4);
	Beep(C1,Beat/2);
	Beep(C5,Beat/2);
	Beep(C1,Beat/4);
	Beep(C2,Beat*0.75);
	Beep(B5,Beat/2);
	Beep(C1,Beat/4);
	Beep(C2,Beat/4);
	Beep(C3,Beat/4);
	Beep(C2,Beat/2); //Checked
	cout<<"(27)"<<endl;
	//C2,Beat/4 Linked up.
	Beep(C1,Beat/4);
	Beep(C1,Beat/4);
	Beep(B6,Beat/4);
	Beep(C1,Beat/2);
	Beep(C1,Beat/4);
	Beep(C1,Beat*0.75);
	Beep(B4,Beat/2);
	Beep(C1,Beat/4);
	Beep(C2,Beat/4);
	Beep(C3,Beat/4);
	Beep(C2,Beat/2); //Checked
	cout<<"(28)"<<endl;
	//C2,Beat/4 Linked up.
	Beep(B5,Beat/4);
	Beep(C1,Beat/2);
	Beep(C5,Beat/2);
	Beep(C1,Beat/4);
	Beep(C2,Beat*0.75);
	Beep(B5,Beat/2);
	Beep(B1,Beat/4);
	Beep(B2,Beat/4);
	Beep(B3,Beat/4);
	Beep(B2,Beat/2); //Checked
	cout<<"(29)"<<endl;
	//B2,Beat/4 Linked up.
	Beep(B1,Beat/4);
	Beep(B1,Beat/4);
	Beep(A6,Beat/4);
	Beep(B1,Beat/2);
	Beep(B1,Beat/4);
	Beep(B1,Beat*0.75);
	Beep(A4,Beat/2);
	Beep(B1,Beat/4);
	Beep(B2,Beat/4);
	Beep(B3,Beat/4);
	Beep(B2,Beat/2); //Checked
	cout<<"(30)"<<endl;
	//B2,Beat/4 Linked up.
	Beep(A5,Beat/4);
	Beep(B1,Beat/2);
	Beep(B5,Beat/2);
	Beep(B1,Beat/4);
	Beep(B2,Beat*0.75);
	Beep(A5,Beat/2);
	Beep(B1,Beat/4);
	Beep(B2,Beat/4);
	Beep(B3,Beat/4);
	Beep(B2,Beat/2); //Checked
	cout<<"(31)"<<endl;
	//B2,Beat/4 Linked up.
	Beep(B1,Beat/4);
	Beep(B1,Beat/4);
	Beep(A6,Beat/4);
	Beep(B1,Beat/2);
	Beep(B1,Beat/4);
	Beep(B1,Beat*0.75);
	Beep(A4,Beat/2);
	Beep(B1,Beat/4);
	Beep(B2,Beat/4);
	Beep(B3,Beat/4);
	Beep(B2,Beat/2); //Checked
	cout<<"(32)"<<endl;
	//B2,Beat/4 Linked up.
	Beep(A5,Beat/4);
	Beep(B1,Beat/2);
	Beep(B5,Beat/4);
	Beep(A5,Beat/4);
	Beep(B1,Beat/4);
	Beep(B2,Beat*0.75);
	Beep(A5,Beat/2);
	Beep(B1,Beat/4);
	Beep(B2,Beat/4);
	Beep(B3,Beat/4);
	Beep(B2,Beat/2); //Checked
	cout<<"(33)"<<endl;
	//B2,Beat/4 Linked up.
	Beep(B1,Beat/4);
	Beep(B1,Beat/4);
	Beep(A6,Beat/4);
	Beep(B1,Beat/2);
	Beep(B1,Beat/4);
	Beep(B1,Beat*0.75);
	Beep(A4,Beat/2);
	Beep(B1,Beat/4);
	Beep(B2,Beat/4);
	Beep(B3,Beat/4);
	Beep(B2,Beat/2); //Checked
	cout<<"(34)"<<endl;
	//B2,Beat/4 Linked up.
	Beep(A5,Beat/4);
	Beep(B1,Beat/2);
	Beep(B5,Beat/2);
	Beep(B1,Beat/4);
	Beep(B2,Beat*0.75);
	Beep(A5,Beat/2);
	Beep(B1,Beat/4);
	Beep(B2,Beat/4);
	Beep(B3,Beat/4);
	Beep(B2,Beat/2); //Checked
	cout<<"(35)"<<endl;
	//B2,Beat/4 Linked up.
	Beep(B1,Beat/4);
	Beep(B1,Beat/4);
	Beep(A6,Beat/4);
	Beep(B1,Beat/4);
	Beep(A6,Beat/4);
	Beep(B1,Beat/4);
	Beep(B1,Beat*0.75);
	Beep(A4,Beat/2);
	Beep(B1,Beat/4);
	Beep(B2,Beat/4);
	Beep(B3,Beat/4);
	Beep(B2,Beat/2); //Checked
	cout<<"(36)"<<endl;
	//B2,Beat/4 Linked up.
	Beep(A5,Beat/4);
	Beep(B1,Beat/2);
	Beep(B5,Beat/2);
	Beep(B1,Beat/4);
	Beep(B2,Beat*0.75);
	Beep(A5,Beat/2);
	Beep(B1,Beat/4);
	Beep(B2,Beat/4);
	Beep(B3,Beat/4);
	Beep(B2,Beat/2); //Checked
	cout<<"(37)"<<endl;
	//B2,Beat/4 Linked up.
	Beep(B1,Beat/4);
	Beep(B1,Beat/4);
	Beep(A6,Beat/4);
	Beep(B1,Beat/2);
	Beep(B1,Beat/4);
	Beep(B1,Beat*0.75);
	Beep(A4,Beat/2);
	Beep(B1,Beat/4);
	Beep(B2,Beat/4);
	Beep(B3,Beat/4);
	Beep(B2,Beat/2); //Checked
	cout<<"(38)"<<endl;
	//B2,Beat/4 Linked up.
	Beep(A5,Beat/4);
	Beep(B1,Beat/2);
	Beep(B5,Beat/2);
	Beep(B1,Beat/4);
	Beep(B2,Beat*0.75);
	Beep(A5,Beat*0.75);
	Beep(B1,Beat/4);
	Beep(B2,Beat/4);
	Beep(B1,Beat*1.75); //Checked
	cout<<"(39)"<<endl;
	//B1,Beat*1.5 Linked up.
	argument.Freq=B5;
	argument.Duration=Beat*2;
	pthread_create(&tid[1],NULL,sound,(void*)&argument);
	Beep(B1,Beat*2);
	Beep(B3,Beat*4.5); //Checked
	cout<<"(40)"<<endl;
	//B3,Beat*4 Linked up. Checked
	cout<<"(41)"<<endl;
	Beep(B1,Beat*1.5);
	argument.Freq=B2;
	argument.Duration=Beat*2;
	pthread_create(&tid[1],NULL,sound,(void*)&argument);
	Beep(B1,Beat*2);
	Beep(B3,Beat*4.5); //Checked
	cout<<"(42)"<<endl;
	//B3,Beat*4 Linked up. Checked
	cout<<"end."<<endl;
	return 0;
}
void* sound(void* arg) {
	struct args *beep=(struct args*)arg;
	Beep(beep->Freq,beep->Duration);
	return NULL;
}

