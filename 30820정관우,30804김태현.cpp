#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

void intro();
void room(); //�� 
void bad(); // 1.����ħ�� 
void books(); // 2.å��
void cro(); // 3.���� 
void tol(); // 4.ȭ��� 
void mirorr(); //�ſ� 
void box(); //�ݰ� 
void door();//5.���Թ� 
void door_password();

int Gun = FALSE; //�� ȹ�� ���� 
int aemm = FALSE; //ź�� ȹ�� ����
int hot = FALSE; //�߰ſ� �� ���� 
int cold = FALSE; //���� ����
int openbooks = FALSE; //å�� ���� ���� 
int openbox = FALSE; // �ݰ� ���� ����
int m1 = FALSE; //ħ�� ���� 
int wet = FALSE; //���� �پ����� 
int open = FALSE;
int opendoor = FALSE;
int Gunaemm = FALSE;
int main() {
	int menu;
	
	while(1) {
		printf("No One Escape 1.0\n\n");
		printf("1. ����\n");
		printf("0. ����\n");
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
				printf("�Է� �ź�...\n\n");
				break;
		}
	}
	
}

void intro() {
	system("cls");
	printf("\n\n");
	printf("���� ������ ���� �� �ȿ� �ִ� �� ����.\n");
	Sleep(1500);
	printf("���� �����... ����� ���� �ʴ´�.\n\n");
	Sleep(2500);
	printf("�� ���배�� ���� ���� �����....\n");
	Sleep(1500);
	printf("��ü ���� �� ���⿡ ������ �� ����?\n\n");
	Sleep(2500);
	printf("������ ������ �׷� �� ���� �ð��� ����....\n");
	Sleep(1500);
	printf("�� �������� ���� ��������.....\n\n");
	Sleep(1500);
	open = TRUE;
	system("pause");
}

void room() {
	int menu,Re;
	
	while(1) {
		if(openbooks){
			system("cls");
			printf("[����]\n\n");
			printf("���⼭ �� �� �ִ� �͵��� ã�ƾ���...\n\n");
			printf("1. �����޸� ħ��  2. �ݰ�  3. ����\n");
			printf("4. ȭ���  5. ���Թ�\n");
		}
		else if(opendoor){
			system("cls");
			printf("[����]\n\n");
			printf("���⼭ �� �� �ִ� �͵��� ã�ƾ���...\n\n");
			printf("1. �����޸� ħ��  2. �ݰ�  3. ����\n");
			printf("4. ȭ���  5. ���Թ�\n");
		}
		else{
			system("cls");
			printf("[����]\n\n");
			printf("���⼭ �� �� �ִ� �͵��� ã�ƾ���...\n\n");
			printf("1. �����޸� ħ��  2. å��  3. ����\n");
			printf("4. ȭ���  5. ���Թ�\n");
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
				printf("\n�Է� �ź�...\n");
				system("pause");
		}
	}
	
}


void bad(){//ħ�� 
	int menu,day;
	while(1){
		system("cls");
		printf("[����]-[ħ��]\n\n");
		printf("ħ�뿡 ������ �ִ�.\n");
		printf("1. ������ �����.\n");
		printf("2. ħ�븦 Ȯ���Ѵ�.\n");
		printf("0. ���ư���\n");
		
		printf(">>");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				m1=TRUE;
				printf("���̿� �ϱ����� �ִ�.\n");
				printf("���̿��� �̷��� ���ִ�.\n");
				printf("������ ���� �� ������ ���� �ȴ� �� �����Ѵ١���� �ۿ� �Ƚ��ִ�...\n\n");
				printf("�ϱ��忡�� �̷��� �����ִ�.\n");
				printf("��2019�� 11�� 8�ϡ�\n\n");
				printf("���� ��ġ�� �ʾҴ�...������ ���� ���� ���Ѻ��� �ִ� �� ���� ��\n");
				printf("���� �������� ȭ��� �ſ� �� ģ������ ���غ��� �ڴ١�\n");
				printf("�� �ٵ� �� ģ���� ��°�� ���Ⱑ �־�߸� ������ ����?��\n");
				printf("1.�ϱ��� �������� �ѱ��\n");
				printf("0. ���ư���\n");
				
				printf(">>");
				scanf("%d",&day);
		
					switch(day){
						case 1:
							printf("���� ���⼭ �� �� ������...�� �̿븸 ���� �ž�...��\n\n");
							printf("�� ���Ҹ���...?\n");
							printf("����������..\n");
							break;
						case 0:
							return;
							break; 
					}
				break;
			case 2:
				printf("�ƹ��͵� ����.\n");
				break;
			case 0:
				return;
				break;
			default:
				printf("\n�Է� �ź�...\n");
				break;
		}
		system("pause");
	}
}

void books(){//å�� 
	int menu,num,box,free;
	int ggun,rel,ae,he;
	char pass[20] ="138637",temp[20];
	char p[20] ="85410",t[20];
	while(1){
		if(openbooks){
			system("cls");
			printf("[����]-[�ݰ�]\n\n");
						printf("1. �ݰ� Ȯ���ϱ�\n");
						printf("2. ��й�ȣ �Է�\n");
						printf("0. ���ư���\n");
						printf(">>");
						scanf("%d",&num);
						switch(num){
							case 1:
								printf("ưư�� ���̴� �ݰ��.\n");
								system("pause");
								break; 
							case 2:
								system("cls");
								printf("��й�ȣ : ");
								scanf("%s", &t);
								if(!strcmp(p, t)){
									openbox = TRUE;
									printf("�ݰ� ���ȴ�.\n");
									system("pause");
									opendoor = TRUE;
									openbooks = FALSE;
									return;
								}
								else{
									printf("�̰� �ƴѰ�����\n");
									system("pause");
								}
								break;
							case 0:
								return;
								break;
							default:
								printf("\n�Է� �ź�...\n");
								break;
						}
					}
					if(openbox){
						system("cls");
						printf("[����]-[�ݰ�]\n\n");
						printf("�ݰ� �ȿ��� �Ѱ� ź�� 1��, �޸����� �ִ�.\n");
						printf("1. ���� ���캸��\n");
						printf("2. ź�� ���캸��\n");
						printf("3. �޸��� ���캸��\n");
						printf("0. ���ư���\n");
						scanf("%d", &box);
						switch(box){
							case 1:
								printf("lock 17Gen4 USA 9x19��� �����ִ�.\n");
								printf("�ѱ� ��ȣ�� �ִ�.\n");
								printf("��ȣ�� [415869]\n");
								system("pause");
								break;
							case 2:
								printf("ź�� �ڿ� ��ȣ�� �ִ�.\n");
								printf("[6]\n");
								system("pause");
								break;
							case 3:
								printf("�����̿��� Ű���� 5���� ��ȣ�� �����ΰ�?����� �����ִ�. \n");
								Gunaemm = TRUE;
								system("pause");
								break;
							case 0:
								return;
								break;
							default:
								printf("\n�Է� �ź�...\n");
								break;
						}	
					}
					else if(open){
						system("cls");
						printf("[����]-[å��]\n\n");
						printf("1. å�� Ȯ���غ���\n");
						printf("0. ���ư���\n");
						printf(">>");
						scanf("%d",&menu);
			switch(menu){
				case 1:
						if(wet){
							printf("���� �°� �Է��ϸ� �ڿ� ������ ������ ������..\n");
							printf("������ �°� å�� �ֺ��� : \n");
							scanf("%s",&temp);
							if(!strcmp(pass, temp)){
								openbooks = TRUE;
								system("cls");
								printf("å���� �����δ�.\n");
								printf("�ڿ� �ݰ� ���Դ�.\n");
								open = FALSE;
								system("pause");
								return;
							}
							else{
								printf("�̰� �ƴѰ�����..\n");
							}
						}
						else{
							printf("��ȭ å���� �����̷� �ִ�.\n");
							printf("�ڿ� ������ �ִ°� ������?\n");
						}
					break;
				case 0:
					return;
					break;
				default:
					printf("\n�Է� �ź�...\n");
					break;
			}
			system("pause");
		}
	}	
}

void cro(){//���� 
	int menu;
	
	while(1){
		system("cls");
		printf("[����]-[����]\n\n");
		printf("������ �ִ�.\n");
		printf("1. û���� Ȯ���غ���\n");
		printf("2. �е� Ȯ���غ���\n");
		printf("3. ��Ƽ Ȯ���غ���\n");
		printf("4. �ݹ��� Ȯ���غ���\n");
		printf("0. ���ư���\n");
		
		printf(">>");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				printf("�ƹ��͵� ����.\n"); 
				break;
			case 2:
				printf("�ƹ��͵� ����.\n"); 
				break;
			case 3:
				printf("��Ƽ �ʰ��̿� �޸����� �ִ�.\n");
				printf("�޸������� 312��� �����ִ�.\n"); 
				break;
			case 4:
				printf("�ݹ������� ��Ʋ�ʵ�2042��� �����ִ�.\n"); 
				break;
			case 0:
				return;
				break;
			default:
				printf("\n�Է� �ź�...\n");
				break;
		}
		system("pause");
	} 
}

void tol(){//ȭ��� 
	int menu;
	int see;
	while(1){
		system("cls");
		printf("[����]-[ȭ���]\n\n");
		printf("�Ϲ� ȭ����̴�.\n");
		printf("1. �ſ��� Ȯ���Ѵ�.\n");
		printf("2. �߰ſ� ���� Ʋ���.\n");
		printf("3. ������ ���� Ʋ���.\n");
		printf("0. ���ư���\n");
		
		printf(">>");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				if(hot){
					printf("�ſ￡ ���ڰ� ������.\n");
					printf("85410\n");
					system("pause");
				}
				else{
					printf("���ٸ��� ����.\n");
					system("pause");
				}
				break;
			case 2:
					if(cold){
						if(m1){
							printf("���� ���� ���� �ȳ��´�...\n");
							printf("������ ħ�뿡�� ���� ���̸� �㰡 ��������.\n");
							printf("1. ħ�뿡�� ���� ���̸� ���� �־��.\n");
							printf("0. ���ư���.\n");
							printf(">>");
							scanf("%d",&see);
							switch(see){
								case 1:
									wet = TRUE;
									printf("���̸� ���� ��״�\n");
									printf("��1. ���Ÿ AE86��\n");
									printf("��2. ������ FD3S�� RX-7��\n");
									printf("��3. �ֻ� S13�� �Ǻ�ơ�\n");
									printf("��4. �ֻ� �÷翡��Ƽ��\n");
									printf("���̰͵��� ���� �����ϴ� ��ȭå�� ���´١���� ���� ���Դ�.\n");
									system("pause");
									break;
								case 0:
									return;
									break;
								default:
									printf("\n�Է� �ź�...\n");
									system("pause");
									break;
								}
							}
							else{
								printf("���� ���� ���� �ȳ��´�...\n");
								system("pause");
								}
							}
				else{
					hot=TRUE;
					printf("�ſ￡ ���� ����.\n");
					system("pause");
					}
			if(hot){
				if(m1){
					printf("1. ħ�뿡�� ���� ���̸� ���� �־��.\n");
					printf("0. ���ư���.\n");
					printf(">>");
					scanf("%d",&see);
					switch(see){
						case 1:
							wet = TRUE;
							printf("���̸� ���� ��״�\n");
							printf("��1. ���Ÿ AE86��\n");
							printf("��2. ������ FD3S�� RX-7��\n");
							printf("��3. �ֻ� S13�� �Ǻ�ơ�\n");
							printf("��4. �ֻ� �÷翡��Ƽ��\n");
							printf("���̰͵��� ���� �����ϴ� ��ȭå�� ���´١���� ���� ���Դ�.\n");
							system("pause");
							break;
						case 0:
							return;
							break;
						default:
							printf("\n�Է� �ź�...\n");
							system("pause");
							break;
						}
					}
				}	
				break;
			case 3:
				if(hot){
					if(m1){
					printf("���� ���� ���� �ȳ��´�...\n");
					printf("������ ħ�뿡�� ���� ���̸� �㰡 ��������.\n");
					printf("1. ħ�뿡�� ���� ���̸� ���� �־��.\n");
					printf("0. ���ư���.\n");
					printf(">>");
					scanf("%d",&see);
					switch(see){
						case 1:
							wet = TRUE;
							printf("���̸� ���� ��״�\n");
							printf("��1. ���Ÿ AE86��\n");
							printf("��2. ������ FD3S�� RX-7��\n");
							printf("��3. �ֻ� S13�� �Ǻ�ơ�\n");
							printf("��4. �ֻ� �÷翡��Ƽ��\n");
							printf("���̰͵��� ���� �����ϴ� ��ȭå�� ���´١���� ���� ���Դ�.\n");
							system("pause");
							break;
						case 0:
							return;
							break;
						default:
							printf("\n�Է� �ź�...\n");
							break;
						}
					}
					else{
						printf("���� ���� ���� �ȳ��´�...\n");	
					}
					}
				else{
					cold = TRUE;
					printf("���� �� ���´�.\n");	
					system("pause");
					}
			if(cold){
				if(m1){
					printf("1. ħ�뿡�� ���� ���̸� ���� �־��.\n");
					printf("0. ���ư���.\n");
					printf(">>");
					scanf("%d",&see);
					switch(see){
						case 1:
							wet = TRUE;
							printf("���̸� ���� ��״�\n");
							printf("��1. ���Ÿ AE86��\n");
							printf("��2. ������ FD3S�� RX-7��\n");
							printf("��3. �ֻ� S13�� �Ǻ�ơ�\n");
							printf("��4. �ֻ� �÷翡��Ƽ��\n");
							printf("���̰͵��� ���� �����ϴ� ��ȭå�� ���´١���� ���� ���Դ�.\n");
							system("pause");
							break;
						case 0:
							return;
							break;
						default:
							printf("\n�Է� �ź�...\n");
							break;
						}
					}	
			}
				break;
			case 0:
				return;
				break;
			default:
				printf("\n�Է� �ź�...\n");
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
			printf("[����]-[��]\n\n");
			printf("������� �ִ�.\n");
			printf("1. �� ���Ǳ�\n");
			printf("2. ��й�ȣ �Է�\n");
			printf("3. �ڻ��ϱ�\n");
			printf("0. ���ư���\n");
			printf(">>");
			scanf("%d",&menu);
			switch(menu){
				case 1:
					printf("������� �ִ�.\n");
					printf("1. ������ ������?\n");
					printf("0. ���ư���\n");
					printf(">>");
					scanf("%d",&boom);
					switch(boom){
						case 1:
							printf("������ ������\n");
							Sleep(2000);
							printf("��ȭ ó�� ������ ���ڴµ�.....\n");
							Sleep(2000);
							printf("(��)\n");
							Sleep(2000);
							printf("�̷� ����....\n");
							Sleep(2000);
							printf("������� ���峵��...\n");
							Sleep(2000);
							printf("���� �ȿ���...\n");
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
							printf("\n�Է� �ź�...\n");
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
						printf("���� �� �������� �濡��\n");
						Sleep(1500);
						printf("����(��!)�夿\n");
						Sleep(1250);
						printf("(��)\n");
						Sleep(2000);
						printf("??? :���� ����� XXXX ��� !@#$\n");
						Sleep(2000);
						printf("??? : �������� �پ �߸��°�\n");
						Sleep(2000);
						printf("??? : ����� ���� �ð��� Ż���� �����Ѱɷ� ����\n");
						Sleep(2000);
						printf("??? : ��ġ �̷� ��Ȳ�� ���� �� �޾ �� ���� �ൿ�ߴ�.\n");
						Sleep(2000);
						printf("??? : ����� @%&!*�з��� �޾ƾ� �ϴ��� ���θ� �����ϱ� ����\n");
						Sleep(2000);
						printf("??? : �߰� ������ �ʿ��غ��δ�.\n");
						Sleep(2000);
						printf("(��)\n");
						Sleep(2000);
						printf("# THE END #\n\n");
						Sleep(1500);
						system("pause");
						exit(0);
				}
				else{
					printf("�̰ԾƴѰ�..\n");
				}
					break;
				case 3:
					printf("���� ����� ��������...\n");
					Sleep(2000);
					printf("���ʿ� Ż������ ������ ����...\n");
					Sleep(2000);
					printf("�� �̻� ����� ����\n");
					Sleep(2000);
					printf("�׷� �¾�\n");
					Sleep(2000);
					printf("Ż�� ����� �̰͸� �ִ��ž�...\n");
					Sleep(2000);
					printf("����������������������������\n");
					Sleep(2000);
					printf("(ö��)\n");
					Sleep(2000);
					printf("(��)\n");
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
					printf("\n�Է� �ź�...\n");
					break;
			}
		}
		else{
			printf("[����]-[��]\n\n");
			printf("������� �ִ�.\n");
			printf("1. �� ���Ǳ�\n");
			printf("2. ��й�ȣ �Է�\n");
			printf("0. ���ư���\n");
			printf(">>");
			scanf("%d",&menu);
			switch(menu){
			case 1:
				printf("������� �ִ�.\n");
				break;
			case 2:
				system("cls");
				printf("\n\n[ PASSWORD ]\n\n");
				printf(">> ");
				scanf("%s", &temp);
				if(!strcmp(pass, temp)){
					system("cls");
					printf("���� �� �������� �濡��\n");
					Sleep(1500);
					printf("����(��!)�夿\n");
					Sleep(1250);
					printf("(��)\n");
					Sleep(2000);
					printf("??? :���� ����� XXXX ��� !@#$\n");
					Sleep(2000);
					printf("??? : �������� �پ �߸��°�\n");
					Sleep(2000);
					printf("??? : ����� ���� �ð��� Ż���� �����Ѱɷ� ����\n");
					Sleep(2000);
					printf("??? : ��ġ �̷� ��Ȳ�� ���� �� �޾ �� ���� �ൿ�ߴ�.\n");
					Sleep(2000);
					printf("??? : ����� @%&!*�з��� �޾ƾ� �ϴ��� ���θ� �����ϱ� ����\n");
					Sleep(2000);
					printf("??? : �߰� ������ �ʿ��غ��δ�.\n");
					Sleep(2000);
					printf("(��)\n");
					Sleep(2000);
					printf("# THE END #\n\n");
					Sleep(1500);
					system("pause");
					exit(0);
				}
				else{
					printf("�̰ԾƴѰ�..\n");
				}
				break;
			case 0:
				return;
				break;
			default:
				printf("\n�Է� �ź�...\n");
				break;
		}
		system("pause");
		}
	}
}
