#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a ,int &b ,int &c ,int &d)
{
	int kept[] = {50,100,500,1000};
	int random[4];
	int check[4] ={};
	int i = 0;
	
	while(i < 4)
	{
		int randoms = rand()%4;
		if(check[randoms] == 1)
		{
			randoms = rand()%4;
		}
		else
		{
			random[i] = kept[randoms];
			check[randoms] = 1;
			i++;
		}
	}
	a = random[0];
	b = random[1];
	c = random[2];
	d = random[3];
}

//ถ้า check ตำแหน่งนั้นๆ แล้วว่ายังไม่ถูกใช้ ให้ใช้ค่านั้นๆได้เลย 
//แต่ถ้า ค่านั้นถูกใช้แล้ว ก็ให้สุ่มค่าใหม่จนกว่าจะเจอตัวที่ยังไม่ได้ใช้