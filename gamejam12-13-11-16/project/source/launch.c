//libs and stuff
#include <gba_console.h>
#include <gba_video.h>
#include <gba_interrupt.h>
#include <gba_systemcalls.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RGB16(r,g,b)  ((r)+(g<<5)+(b<<10)) 

#define KEY_A 1
#define KEY_B 2
#define KEY_SELECT 4
#define KEY_START 8
#define KEY_RIGHT 16
#define KEY_LEFT 32
#define KEY_UP 64
#define KEY_DOWN 128
#define KEY_R 256
#define KEY_L 512


unsigned short* Screen = (unsigned short*)0x6000000; 
time_t t;
int* KEYS = (int*)0x04000130;

unsigned int frame;

int playerX = 120;

int ballVelX = 1;
int ballVelY = 1;
unsigned int ballPosX = 115;
unsigned int ballPosY = 80;
int counter = 0;

int shouldCollideA = 0;
int shouldCollideB = 0;
int shouldCollideC = 0;
int shouldCollideD = 0;
int shouldCollideE = 0;
int shouldCollideF = 0;
int shouldCollideG = 0;
int shouldCollideH = 0;
int shouldCollideI = 0;
int shouldCollideJ = 0;
int shouldCollideK = 0;
int shouldCollideL = 0;
int shouldCollideM = 0;
int shouldCollideN = 0;
int shouldCollideO = 0;
int shouldCollideP = 0;
int shouldCollideQ = 0;
int shouldCollideR = 0;
int shouldCollideS = 0;
int shouldCollideT = 0;
int shouldCollideU = 0;
int shouldCollideV = 0;
int shouldCollideW = 0;
int shouldCollideX = 0;
int shouldCollideY = 0;
int shouldCollideZ = 0;
int shouldCollidea = 0;
int shouldCollideb = 0;
int shouldCollidec = 0;
int shouldCollided = 0;
int shouldCollidee = 0;
int shouldCollidef = 0;
int shouldCollideg = 0;
int shouldCollideh = 0;
int shouldCollidei = 0;
int shouldCollidej = 0;
int shouldCollidek = 0;
int shouldCollidel = 0;
int shouldCollidem = 0;
int shouldColliden = 0;
int shouldCollideo = 0;
int shouldCollidep = 0;
int shouldCollideq = 0;
int shouldCollider = 0;
int shouldCollides = 0;
int shouldCollidet = 0;
int shouldCollideu = 0;
int shouldCollidev = 0;
int shouldCollidew = 0;
int shouldCollidex = 0;

int loop=1;
int menu = 1;

void redrawPlayerLeft(int xpos, unsigned short* Screen)
{
	if(!(xpos<=2)){
	for(int y = 140; y<=142;y++){
		Screen[(xpos+21)+y*240] = RGB16(0,0,0);	
		Screen[(xpos+22)+y*240] = RGB16(0,0,0);	
	}
	for(int x = xpos; x<xpos+20;x++){
		for(int y = 140; y<=142;y++){
			Screen[x+y*240] = RGB16(31,31,31);	
		}
	}
	}
	else
	{
		playerX=2;
	}
}

void redrawPlayerRight(int xpos, unsigned short* Screen)
{
	if(!(xpos>=218)){
	for(int y = 140; y<=142;y++){
		Screen[(xpos-1)+y*240] = RGB16(0,0,0);	
		Screen[(xpos-2)+y*240] = RGB16(0,0,0);	
	}
	for(int x = xpos; x<xpos+20;x++){
		for(int y = 140; y<=142;y++){
			Screen[x+y*240] = RGB16(31,31,31);	
		}
	}
	}
	else
	{
		playerX=218;
	}
}

void killGame(unsigned short* Screen)
{
	loop=0;
}

void ballReboundX(){
	ballVelX = -ballVelX;
}

void ballReboundY(){
	ballVelY = -ballVelY;
}

//---------------------------------------------------------------------------------
void VblankInterrupt()
//---------------------------------------------------------------------------------
{
	frame += 2;
}

void moveBall(unsigned short* Screen){
	Screen[ballPosX+ballPosY*240] = RGB16(0,0,0);
	if(10>=ballPosX || ballPosX>=230){
		ballReboundX();
	}
	if(10>=ballPosY){
		ballReboundY();
	}
	if(ballPosY>=142)killGame(Screen);
	//if(ballPosY>=142)ballReboundY();
	ballPosX +=ballVelX;
	ballPosY +=ballVelY;
	Screen[ballPosX+ballPosY*240] = RGB16(31,31,31);
}

void checkBallCollision()
{
	     if(ballPosX>=10 && ballPosX<=30 && ballPosY>=15 &&ballPosY<=25){if(!shouldCollideA){ballReboundX();counter++;shouldCollideA=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(10+x)+(15+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=10 && ballPosX<=30 && ballPosY>=27 &&ballPosY<=37){if(!shouldCollideB){ballReboundY();counter++;shouldCollideB=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(10+x)+(27+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=10 && ballPosX<=30 && ballPosY>=39 &&ballPosY<=49){if(!shouldCollideC){ballReboundX();counter++;shouldCollideC=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(10+x)+(39+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=10 && ballPosX<=30 && ballPosY>=51 &&ballPosY<=61){if(!shouldCollideD){ballReboundY();counter++;shouldCollideD=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(10+x)+(51+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=10 && ballPosX<=30 && ballPosY>=63 &&ballPosY<=73){if(!shouldCollideE){ballReboundX();counter++;shouldCollideE=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(10+x)+(63+y)*240] = RGB16(0,0,0);}}}
	
	else if(ballPosX>=32 && ballPosX<=52 && ballPosY>=15 &&ballPosY<=25){if(!shouldCollideF){ballReboundX();counter++;shouldCollideF=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(32+x)+(15+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=32 && ballPosX<=52 && ballPosY>=27 &&ballPosY<=37){if(!shouldCollideG){ballReboundY();counter++;shouldCollideG=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(32+x)+(27+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=32 && ballPosX<=52 && ballPosY>=39 &&ballPosY<=49){if(!shouldCollideH){ballReboundX();counter++;shouldCollideH=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(32+x)+(39+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=32 && ballPosX<=52 && ballPosY>=51 &&ballPosY<=61){if(!shouldCollideI){ballReboundY();counter++;shouldCollideI=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(32+x)+(51+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=32 && ballPosX<=52 && ballPosY>=63 &&ballPosY<=73){if(!shouldCollideJ){ballReboundX();counter++;shouldCollideJ=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(32+x)+(63+y)*240] = RGB16(0,0,0);}}}
	
	else if(ballPosX>=54 && ballPosX<=74 && ballPosY>=15 &&ballPosY<=25){if(!shouldCollideK){ballReboundX();counter++;shouldCollideK=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(54+x)+(15+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=54 && ballPosX<=74 && ballPosY>=27 &&ballPosY<=37){if(!shouldCollideL){ballReboundY();counter++;shouldCollideL=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(54+x)+(27+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=54 && ballPosX<=74 && ballPosY>=39 &&ballPosY<=49){if(!shouldCollideM){ballReboundX();counter++;shouldCollideM=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(54+x)+(39+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=54 && ballPosX<=74 && ballPosY>=51 &&ballPosY<=61){if(!shouldCollideN){ballReboundY();counter++;shouldCollideN=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(54+x)+(51+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=54 && ballPosX<=74 && ballPosY>=63 &&ballPosY<=73){if(!shouldCollideO){ballReboundX();counter++;shouldCollideO=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(54+x)+(63+y)*240] = RGB16(0,0,0);}}}
	
	else if(ballPosX>=76 && ballPosX<=96 && ballPosY>=15 &&ballPosY<=25){if(!shouldCollideP){ballReboundX();counter++;shouldCollideP=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(76+x)+(15+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=76 && ballPosX<=96 && ballPosY>=27 &&ballPosY<=37){if(!shouldCollideQ){ballReboundY();counter++;shouldCollideQ=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(76+x)+(27+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=76 && ballPosX<=96 && ballPosY>=39 &&ballPosY<=49){if(!shouldCollideR){ballReboundX();counter++;shouldCollideR=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(76+x)+(39+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=76 && ballPosX<=96 && ballPosY>=51 &&ballPosY<=61){if(!shouldCollideS){ballReboundY();counter++;shouldCollideS=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(76+x)+(51+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=76 && ballPosX<=96 && ballPosY>=63 &&ballPosY<=73){if(!shouldCollideT){ballReboundX();counter++;shouldCollideT=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(76+x)+(63+y)*240] = RGB16(0,0,0);}}}
	
	else if(ballPosX>=98 && ballPosX<=118 && ballPosY>=15 &&ballPosY<=25){if(!shouldCollideU){ballReboundX();counter++;shouldCollideU=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(98+x)+(15+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=98 && ballPosX<=118 && ballPosY>=27 &&ballPosY<=37){if(!shouldCollideV){ballReboundY();counter++;shouldCollideV=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(98+x)+(27+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=98 && ballPosX<=118 && ballPosY>=39 &&ballPosY<=49){if(!shouldCollideW){ballReboundX();counter++;shouldCollideW=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(98+x)+(39+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=98 && ballPosX<=118 && ballPosY>=51 &&ballPosY<=61){if(!shouldCollideX){ballReboundY();counter++;shouldCollideX=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(98+x)+(51+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=98 && ballPosX<=118 && ballPosY>=63 &&ballPosY<=73){if(!shouldCollideY){ballReboundX();counter++;shouldCollideY=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(98+x)+(63+y)*240] = RGB16(0,0,0);}}}
	
	else if(ballPosX>=120 && ballPosX<=140 && ballPosY>=15 &&ballPosY<=25){if(!shouldCollideZ){ballReboundX();counter++;shouldCollideZ=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(120+x)+(15+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=120 && ballPosX<=140 && ballPosY>=27 &&ballPosY<=37){if(!shouldCollidea){ballReboundY();counter++;shouldCollidea=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(120+x)+(27+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=120 && ballPosX<=140 && ballPosY>=39 &&ballPosY<=49){if(!shouldCollideb){ballReboundX();counter++;shouldCollideb=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(120+x)+(39+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=120 && ballPosX<=140 && ballPosY>=51 &&ballPosY<=61){if(!shouldCollidec){ballReboundY();counter++;shouldCollidec=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(120+x)+(51+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=120 && ballPosX<=140 && ballPosY>=63 &&ballPosY<=73){if(!shouldCollided){ballReboundX();counter++;shouldCollided=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(120+x)+(63+y)*240] = RGB16(0,0,0);}}}
	
	else if(ballPosX>=142 && ballPosX<=162 && ballPosY>=15 &&ballPosY<=25){if(!shouldCollidee){ballReboundX();counter++;shouldCollidee=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(142+x)+(15+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=142 && ballPosX<=162 && ballPosY>=27 &&ballPosY<=37){if(!shouldCollidef){ballReboundY();counter++;shouldCollidef=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(142+x)+(27+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=142 && ballPosX<=162 && ballPosY>=39 &&ballPosY<=49){if(!shouldCollideg){ballReboundX();counter++;shouldCollideg=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(142+x)+(39+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=142 && ballPosX<=162 && ballPosY>=51 &&ballPosY<=61){if(!shouldCollideh){ballReboundY();counter++;shouldCollideh=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(142+x)+(51+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=142 && ballPosX<=162 && ballPosY>=63 &&ballPosY<=73){if(!shouldCollidei){ballReboundX();counter++;shouldCollidei=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(142+x)+(63+y)*240] = RGB16(0,0,0);}}}
	
	else if(ballPosX>=164 && ballPosX<=184 && ballPosY>=15 &&ballPosY<=25){if(!shouldCollidej){ballReboundX();counter++;shouldCollidej=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(164+x)+(15+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=164 && ballPosX<=184 && ballPosY>=27 &&ballPosY<=37){if(!shouldCollidek){ballReboundY();counter++;shouldCollidek=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(164+x)+(27+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=164 && ballPosX<=184 && ballPosY>=39 &&ballPosY<=49){if(!shouldCollidel){ballReboundX();counter++;shouldCollidel=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(164+x)+(39+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=164 && ballPosX<=184 && ballPosY>=51 &&ballPosY<=61){if(!shouldCollidem){ballReboundY();counter++;shouldCollidem=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(164+x)+(51+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=164 && ballPosX<=184 && ballPosY>=63 &&ballPosY<=73){if(!shouldColliden){ballReboundX();counter++;shouldColliden=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(164+x)+(63+y)*240] = RGB16(0,0,0);}}}
	
	else if(ballPosX>=186 && ballPosX<=206 && ballPosY>=15 &&ballPosY<=25){if(!shouldCollideo){ballReboundX();counter++;shouldCollideo=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(186+x)+(15+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=186 && ballPosX<=206 && ballPosY>=27 &&ballPosY<=37){if(!shouldCollidep){ballReboundY();counter++;shouldCollidep=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(186+x)+(27+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=186 && ballPosX<=206 && ballPosY>=39 &&ballPosY<=49){if(!shouldCollideq){ballReboundX();counter++;shouldCollideq=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(186+x)+(39+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=186 && ballPosX<=206 && ballPosY>=51 &&ballPosY<=61){if(!shouldCollider){ballReboundY();counter++;shouldCollider=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(186+x)+(51+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=186 && ballPosX<=206 && ballPosY>=63 &&ballPosY<=73){if(!shouldCollides){ballReboundX();counter++;shouldCollides=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(186+x)+(63+y)*240] = RGB16(0,0,0);}}}
	
	else if(ballPosX>=208 && ballPosX<=228 && ballPosY>=15 &&ballPosY<=25){if(!shouldCollidet){ballReboundX();counter++;shouldCollidet=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(208+x)+(15+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=208 && ballPosX<=228 && ballPosY>=27 &&ballPosY<=37){if(!shouldCollideu){ballReboundY();counter++;shouldCollideu=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(208+x)+(27+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=208 && ballPosX<=228 && ballPosY>=39 &&ballPosY<=49){if(!shouldCollidev){ballReboundX();counter++;shouldCollidev=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(208+x)+(39+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=208 && ballPosX<=228 && ballPosY>=51 &&ballPosY<=61){if(!shouldCollidew){ballReboundY();counter++;shouldCollidew=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(208+x)+(51+y)*240] = RGB16(0,0,0);}}}
	else if(ballPosX>=208 && ballPosX<=228 && ballPosY>=63 &&ballPosY<=73){if(!shouldCollidex){ballReboundX();counter++;shouldCollidex=1;}for(int x = 0; x<20;x++){for(int y = 0; y<10;y++){Screen[(208+x)+(63+y)*240] = RGB16(0,0,0);}}}
	
	else if(ballPosX>=playerX && ballPosX<=playerX+20 && ballPosY>=140 && ballPosY<=142)ballReboundY();
}

void drawFirstBoard(unsigned short* Screen)
{
	for(int i = 10; i <230; i+=22){
		for(int j = 15; j < 75; j+=12){
			unsigned short color = RGB16(rand() % 31,rand() % 31,rand() % 31);
			for(int x = 0; x<20;x++){
				for(int y = 0; y<10;y++){
					Screen[(i+x)+(j+y)*240] = color;	
				}
			}
		}
	}
	for(int i = 0; i<56;i++){
		for(int y = 0; y<4; y++){
			Screen[(i)+(y*240)]=RGB16(16,16,16);
		}
	}
	for(int i = 0; i<55;i++){
		for(int y = 0; y<3; y++){
			Screen[(i)+(y*240)]=RGB16(16,0,0);
		}
	}
	
}

void drawScore(unsigned short* Screen)
{
	for(int i = 0; i<=counter;i++)
	{
		for(int x = 0; x<5; x++){
			for(int y = 0; y<3; y++){
				Screen[(x+i)+(y*240)]=RGB16(31,0,0);
			}
		}
	}
}



int main(void)
{
	irqInit();
	irqSet( IRQ_VBLANK, VblankInterrupt);
	irqEnable(IRQ_VBLANK);
	REG_IME = 1;
	SetMode( MODE_3 | BG2_ON );
	srand((unsigned) time(&t));
	drawFirstBoard(Screen);
	redrawPlayerLeft(playerX, Screen);
	Screen[ballPosX+ballPosY*240] = RGB16(31,31,31);
	
	while(loop)
	{
		VBlankIntrWait();
		if(!((*KEYS) & KEY_LEFT))redrawPlayerLeft(playerX-=2, Screen);
		if(!((*KEYS) & KEY_RIGHT))redrawPlayerRight(playerX+=2, Screen);
		checkBallCollision();		
		moveBall(Screen);
		drawScore(Screen);
		
	}
	while(!loop){
		VBlankIntrWait();
	}
}
