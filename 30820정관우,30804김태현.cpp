#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

void intro();
void room(); //방 
void bad(); // 1.서랍침대 
void books(); // 2.책장
void cro(); // 3.옷장 
void tol(); // 4.화장실 
void mirorr(); //거울 
void box(); //금고 
void door();//5.출입문 
void door_password();

int Gun = FALSE; //총 획득 여부 
int aemm = FALSE; //탄알 획득 여부
int hot = FALSE; //뜨거운 물 여부 
int cold = FALSE; //찬물 여부
int openbooks = FALSE; //책장 열림 여부 
int openbox = FALSE; // 금고 오픈 여부
int m1 = FALSE; //침대 종이 
int wet = FALSE; //물에 다았을때 
int open = FALSE;
int opendoor = FALSE;
int Gunaemm = FALSE;
int main() {
	int menu;
	
	while(1) {
		printf("No One Escape 1.0\n\n");
		printf("1. 입장\n");
		printf("0. 종료\n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				intro();
				room();
				break;
			case 0:
				return 0;
			default:
				printf("입력 거부...\n\n");
				break;
		}
	}
	
}

void intro() {
	system("cls");
	printf("\n\n");
	printf("눈을 떠보니 작은 방 안에 있는 것 같다.\n");
	Sleep(1500);
	printf("여긴 어디지... 기억이 나지 않는다.\n\n");
	Sleep(2500);
	printf("이 원룸같은 공간 모든게 낮썰다....\n");
	Sleep(1500);
	printf("대체 누가 날 여기에 데리고 온 거지?\n\n");
	Sleep(2500);
	printf("하지만 지금은 그런 걸 따질 시간이 없어....\n");
	Sleep(1500);
	printf("이 그지같은 곳을 나가야해.....\n\n");
	printf("아이고난!\n\n");
	Sleep(1500);
	open = TRUE;
	system("pause");
}

void room() {
	int menu,Re;
	
	while(1) {
		if(openbooks){
			system("cls");
			printf("[원룸]\n\n");
			printf("여기서 할 수 있는 것들을 찾아야해...\n\n");
			printf("1. 서랍달린 침대  2. 금고  3. 옷장\n");
			printf("4. 화장실  5. 출입문\n");
		}
		else if(opendoor){
			system("cls");
			printf("[원룸]\n\n");
			printf("여기서 할 수 있는 것들을 찾아야해...\n\n");
			printf("1. 서랍달린 침대  2. 금고  3. 옷장\n");
			printf("4. 화장실  5. 출입문\n");
		}
		else{
			system("cls");
			printf("[원룸]\n\n");
			printf("여기서 할 수 있는 것들을 찾아야해...\n\n");
			printf("1. 서랍달린 침대  2. 책장  3. 옷장\n");
			printf("4. 화장실  5. 출입문\n");
		}
		printf(">>");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				bad();
				break;
			case 2:
				books();	
				break;
			case 3:
				cro();
				break;
			case 4:
				tol();
				break;
			case 5:
				door();
				break;
			default:
				printf("\n입력 거부...\n");
				system("pause");
		}
	}
	
}


void bad(){//침대 
	int menu,day;
	while(1){
		system("cls");
		printf("[원룸]-[침대]\n\n");
		printf("침대에 서랍이 있다.\n");
		printf("1. 서랍을 열어본다.\n");
		printf("2. 침대를 확인한다.\n");
		printf("0. 돌아가기\n");
		
		printf(">>");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				m1=TRUE;
				printf("종이와 일기장이 있다.\n");
				printf("종이에는 이렇게 써있다.\n");
				printf("『나는 가끔 비에 졌으며 길을 걷는 걸 좋아한다』라고 밖에 안써있다...\n\n");
				printf("일기장에는 이렇게 적혀있다.\n");
				printf("“2019월 11월 8일”\n\n");
				printf("“난 미치지 않았다...하지만 요즘 누가 지켜보고 있는 것 같다 ”\n");
				printf("“이 문제들을 화장실 거울 속 친구에게 말해봐야 겠다”\n");
				printf("“ 근데 그 친구는 어째서 습기가 있어야만 나오는 거지?”\n");
				printf("1.일기장 다음으로 넘기기\n");
				printf("0. 돌아가기\n");
				
				printf(">>");
				scanf("%d",&day);
		
					switch(day){
						case 1:
							printf("“넌 여기서 절 때 못나가...넌 이용만 당할 거야...”\n\n");
							printf("뭔 개소리야...?\n");
							printf("섬득해지게..\n");
							break;
						case 0:
							return;
							break; 
					}
				break;
			case 2:
				printf("아무것도 없다.\n");
				break;
			case 0:
				return;
				break;
			default:
				printf("\n입력 거부...\n");
				break;
		}
		system("pause");
	}
}

void books(){//책장 
	int menu,num,box,free;
	int ggun,rel,ae,he;
	char pass[20] ="138637",temp[20];
	char p[20] ="85410",t[20];
	while(1){
		if(openbooks){
			system("cls");
			printf("[원룸]-[금고]\n\n");
						printf("1. 금고 확인하기\n");
						printf("2. 비밀번호 입력\n");
						printf("0. 돌아가기\n");
						printf(">>");
						scanf("%d",&num);
						switch(num){
							case 1:
								printf("튼튼해 보이는 금고다.\n");
								system("pause");
								break; 
							case 2:
								system("cls");
								printf("비밀번호 : ");
								scanf("%s", &t);
								if(!strcmp(p, t)){
									openbox = TRUE;
									printf("금고가 열렸다.\n");
									system("pause");
									opendoor = TRUE;
									openbooks = FALSE;
									return;
								}
								else{
									printf("이게 아닌가보네\n");
									system("pause");
								}
								break;
							case 0:
								return;
								break;
							default:
								printf("\n입력 거부...\n");
								break;
						}
					}
					if(openbox){
						system("cls");
						printf("[원룸]-[금고]\n\n");
						printf("금고 안에는 총과 탄약 1개, 메모지가 있다.\n");
						printf("1. 권총 살펴보기\n");
						printf("2. 탄약 살펴보기\n");
						printf("3. 메모지 살펴보기\n");
						printf("0. 돌아가기\n");
						scanf("%d", &box);
						switch(box){
							case 1:
								printf("lock 17Gen4 USA 9x19라고 적혀있다.\n");
								printf("총기 번호가 있다.\n");
								printf("번호는 [415869]\n");
								system("pause");
								break;
							case 2:
								printf("탄약 뒤에 번호가 있다.\n");
								printf("[6]\n");
								system("pause");
								break;
							case 3:
								printf("“종이에는 키보드 5번에 기호는 무엇인가?”라고 써져있다. \n");
								Gunaemm = TRUE;
								system("pause");
								break;
							case 0:
								return;
								break;
							default:
								printf("\n입력 거부...\n");
								break;
						}	
					}
					else if(open){
						system("cls");
						printf("[원룸]-[책장]\n\n");
						printf("1. 책장 확인해보기\n");
						printf("0. 돌아가기\n");
						printf(">>");
						scanf("%d",&menu);
			switch(menu){
				case 1:
						if(wet){
							printf("순서 맞게 입력하면 뒤에 공간이 열릴꺼 같은데..\n");
							printf("순서에 맞게 책을 둬보자 : \n");
							scanf("%s",&temp);
							if(!strcmp(pass, temp)){
								openbooks = TRUE;
								system("cls");
								printf("책장이 움직인다.\n");
								printf("뒤에 금고가 나왔다.\n");
								open = FALSE;
								system("pause");
								return;
							}
							else{
								printf("이게 아닌가보네..\n");
							}
						}
						else{
							printf("만화 책들임 뭉탱이로 있다.\n");
							printf("뒤에 공간이 있는거 같은데?\n");
						}
					break;
				case 0:
					return;
					break;
				default:
					printf("\n입력 거부...\n");
					break;
			}
			system("pause");
		}
	}	
}

void cro(){//옷장 
	int menu;
	
	while(1){
		system("cls");
		printf("[원룸]-[옷장]\n\n");
		printf("옷장이 있다.\n");
		printf("1. 청바지 확인해보기\n");
		printf("2. 패딩 확인해보기\n");
		printf("3. 흰티 확인해보기\n");
		printf("4. 반바지 확인해보기\n");
		printf("0. 돌아가기\n");
		
		printf(">>");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				printf("아무것도 없다.\n"); 
				break;
			case 2:
				printf("아무것도 없다.\n"); 
				break;
			case 3:
				printf("흰티 옷걸이에 메모지가 있다.\n");
				printf("메모지에는 312라고 적혀있다.\n"); 
				break;
			case 4:
				printf("반바지에는 배틀필드2042라고 적혀있다.\n"); 
				break;
			case 0:
				return;
				break;
			default:
				printf("\n입력 거부...\n");
				break;
		}
		system("pause");
	} 
}

void tol(){//화장실 
	int menu;
	int see;
	while(1){
		system("cls");
		printf("[원룸]-[화장실]\n\n");
		printf("일반 화장실이다.\n");
		printf("1. 거울을 확인한다.\n");
		printf("2. 뜨거운 물을 틀어본다.\n");
		printf("3. 차가운 물을 틀어본다.\n");
		printf("0. 돌아가기\n");
		
		printf(">>");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				if(hot){
					printf("거울에 숫자가 서졌다.\n");
					printf("85410\n");
					system("pause");
				}
				else{
					printf("별다른건 없다.\n");
					system("pause");
				}
				break;
			case 2:
					if(cold){
						if(m1){
							printf("젠장 물이 더는 안나온다...\n");
							printf("하지만 침대에서 얻은 종이를 담가 볼순있지.\n");
							printf("1. 침대에서 얻은 종이를 물에 넣어본다.\n");
							printf("0. 돌아간다.\n");
							printf(">>");
							scanf("%d",&see);
							switch(see){
								case 1:
									wet = TRUE;
									printf("종이를 물에 담그니\n");
									printf("“1. 토요타 AE86”\n");
									printf("“2. 마쓰다 FD3S형 RX-7”\n");
									printf("“3. 닛산 S13형 실비아”\n");
									printf("“4. 닛산 시루에이티”\n");
									printf("“이것들은 내가 좋아하는 만화책에 나온다”라는 글이 나왔다.\n");
									system("pause");
									break;
								case 0:
									return;
									break;
								default:
									printf("\n입력 거부...\n");
									system("pause");
									break;
								}
							}
							else{
								printf("젠장 물이 더는 안나온다...\n");
								system("pause");
								}
							}
				else{
					hot=TRUE;
					printf("거울에 김이 꼈다.\n");
					system("pause");
					}
			if(hot){
				if(m1){
					printf("1. 침대에서 얻은 종이를 물에 넣어본다.\n");
					printf("0. 돌아간다.\n");
					printf(">>");
					scanf("%d",&see);
					switch(see){
						case 1:
							wet = TRUE;
							printf("종이를 물에 담그니\n");
							printf("“1. 토요타 AE86”\n");
							printf("“2. 마쓰다 FD3S형 RX-7”\n");
							printf("“3. 닛산 S13형 실비아”\n");
							printf("“4. 닛산 시루에이티”\n");
							printf("“이것들은 내가 좋아하는 만화책에 나온다”라는 글이 나왔다.\n");
							system("pause");
							break;
						case 0:
							return;
							break;
						default:
							printf("\n입력 거부...\n");
							system("pause");
							break;
						}
					}
				}	
				break;
			case 3:
				if(hot){
					if(m1){
					printf("젠장 물이 더는 안나온다...\n");
					printf("하지만 침대에서 얻은 종이를 담가 볼순있지.\n");
					printf("1. 침대에서 얻은 종이를 물에 넣어본다.\n");
					printf("0. 돌아간다.\n");
					printf(">>");
					scanf("%d",&see);
					switch(see){
						case 1:
							wet = TRUE;
							printf("종이를 물에 담그니\n");
							printf("“1. 토요타 AE86”\n");
							printf("“2. 마쓰다 FD3S형 RX-7”\n");
							printf("“3. 닛산 S13형 실비아”\n");
							printf("“4. 닛산 시루에이티”\n");
							printf("“이것들은 내가 좋아하는 만화책에 나온다”라는 글이 나왔다.\n");
							system("pause");
							break;
						case 0:
							return;
							break;
						default:
							printf("\n입력 거부...\n");
							break;
						}
					}
					else{
						printf("젠장 물이 더는 안나온다...\n");	
					}
					}
				else{
					cold = TRUE;
					printf("물이 잘 나온다.\n");	
					system("pause");
					}
			if(cold){
				if(m1){
					printf("1. 침대에서 얻은 종이를 물에 넣어본다.\n");
					printf("0. 돌아간다.\n");
					printf(">>");
					scanf("%d",&see);
					switch(see){
						case 1:
							wet = TRUE;
							printf("종이를 물에 담그니\n");
							printf("“1. 토요타 AE86”\n");
							printf("“2. 마쓰다 FD3S형 RX-7”\n");
							printf("“3. 닛산 S13형 실비아”\n");
							printf("“4. 닛산 시루에이티”\n");
							printf("“이것들은 내가 좋아하는 만화책에 나온다”라는 글이 나왔다.\n");
							system("pause");
							break;
						case 0:
							return;
							break;
						default:
							printf("\n입력 거부...\n");
							break;
						}
					}	
			}
				break;
			case 0:
				return;
				break;
			default:
				printf("\n입력 거부...\n");
				break;
			
		system("pause");
		}
	}
}

void door(){
	int menu, boom; 
	char pass[10] = "69311",temp[10];
	while(1){
		system("cls");
		if(Gunaemm){
			printf("[원룸]-[문]\n\n");
			printf("도어락이 있다.\n");
			printf("1. 문 살피기\n");
			printf("2. 비밀번호 입력\n");
			printf("3. 자살하기\n");
			printf("0. 돌아가기\n");
			printf(">>");
			scanf("%d",&menu);
			switch(menu){
				case 1:
					printf("도어락이 있다.\n");
					printf("1. 총으로 쏴볼까?\n");
					printf("0. 돌아간다\n");
					printf(">>");
					scanf("%d",&boom);
					switch(boom){
						case 1:
							printf("총으로 쏴보자\n");
							Sleep(2000);
							printf("영화 처럼 열리면 좋겠는데.....\n");
							Sleep(2000);
							printf("(탕)\n");
							Sleep(2000);
							printf("이런 젠장....\n");
							Sleep(2000);
							printf("도어락이 고장났다...\n");
							Sleep(2000);
							printf("문이 안열려...\n");
							Sleep(2000);
							printf("# THE END #\n\n");
							Sleep(1500);
							system("pause");
							exit(0);
							break;
						case 0:
							return;
							break;
						default:
							printf("\n입력 거부...\n");
							break;
					}
					system("pause");
					break;
				case 2:
					system("cls");
					printf("\n\n[ PASSWORD ]\n\n");
					printf(">> ");
					scanf("%s", &temp);
					if(!strcmp(pass, temp)){
						system("cls");
						printf("드디어 이 그지같은 방에서\n");
						Sleep(1500);
						printf("나간(퍽!)드ㅏ\n");
						Sleep(1250);
						printf("(삑)\n");
						Sleep(2000);
						printf("??? :본부 여기는 XXXX 대상 !@#$\n");
						Sleep(2000);
						printf("??? : 실험대상은 뛰어난 추리력과\n");
						Sleep(2000);
						printf("??? : 상당히 빠른 시간내 탈출을 성공한걸로 보아\n");
						Sleep(2000);
						printf("??? : 마치 이런 상황을 여러 번 겪어본 것 같이 행동했다.\n");
						Sleep(2000);
						printf("??? : 대상이 @%&!*분류를 받아야 하는지 여부를 결정하기 위해\n");
						Sleep(2000);
						printf("??? : 추가 실험이 필요해보인다.\n");
						Sleep(2000);
						printf("(삑)\n");
						Sleep(2000);
						printf("# THE END #\n\n");
						Sleep(1500);
						system("pause");
						exit(0);
				}
				else{
					printf("이게아닌가..\n");
				}
					break;
				case 3:
					printf("더는 방법이 없나보다...\n");
					Sleep(2000);
					printf("에초에 탈출방법이 없던거 같아...\n");
					Sleep(2000);
					printf("더 이상에 방법이 없어\n");
					Sleep(2000);
					printf("그래 맞아\n");
					Sleep(2000);
					printf("탈출 방법은 이것만 있던거야...\n");
					Sleep(2000);
					printf("하하하하하하하하하하하하하하\n");
					Sleep(2000);
					printf("(철컥)\n");
					Sleep(2000);
					printf("(탕)\n");
					Sleep(2000);
					printf("# THE END #\n\n");
					Sleep(1500);
					system("pause");
					exit(0);
					break;
				case 0:
					return;
					break;
				default:
					printf("\n입력 거부...\n");
					break;
			}
		}
		else{
			printf("[원룸]-[문]\n\n");
			printf("도어락이 있다.\n");
			printf("1. 문 살피기\n");
			printf("2. 비밀번호 입력\n");
			printf("0. 돌아가기\n");
			printf(">>");
			scanf("%d",&menu);
			switch(menu){
			case 1:
				printf("도어락이 있다.\n");
				break;
			case 2:
				system("cls");
				printf("\n\n[ PASSWORD ]\n\n");
				printf(">> ");
				scanf("%s", &temp);
				if(!strcmp(pass, temp)){
					system("cls");
					printf("드디어 이 그지같은 방에서\n");
					Sleep(1500);
					printf("나간(퍽!)드ㅏ\n");
					Sleep(1250);
					printf("(삑)\n");
					Sleep(2000);
					printf("??? :본부 여기는 XXXX 대상 !@#$\n");
					Sleep(2000);
					printf("??? : 실험대상은 뛰어난 추리력과\n");
					Sleep(2000);
					printf("??? : 상당히 빠른 시간내 탈출을 성공한걸로 보아\n");
					Sleep(2000);
					printf("??? : 마치 이런 상황을 여러 번 겪어본 것 같이 행동했다.\n");
					Sleep(2000);
					printf("??? : 대상이 @%&!*분류를 받아야 하는지 여부를 결정하기 위해\n");
					Sleep(2000);
					printf("??? : 추가 실험이 필요해보인다.\n");
					Sleep(2000);
					printf("(삑)\n");
					Sleep(2000);
					printf("# THE END #\n\n");
					Sleep(1500);
					system("pause");
					exit(0);
				}
				else{
					printf("이게아닌가..\n");
				}
				break;
			case 0:
				return;
				break;
			default:
				printf("\n입력 거부...\n");
				break;
		}
		system("pause");
		}
	}
}
