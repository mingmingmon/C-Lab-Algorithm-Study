#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void underbar(int count) {

	for (int i = 0; i < 4 * count; i++) {
		printf("_");
	}
	
}




int fibo1(int count,int N) {

	underbar(count);
	printf("\"����Լ��� ������?\"\n");
	

	

	if (N == 0) {
		

		
		underbar(count);
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		underbar(count);
		printf("��� �亯�Ͽ���.\n");
		
		return 0;

	}

	else {
		underbar(count);
		printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
		underbar(count);
		printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
		underbar(count);
		printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");

		count++;
		N--;

		fibo1(count,N);

		underbar(count-1);
		printf("��� �亯�Ͽ���.\n");
		return 0;
	}
		
	

}





int main() {
	
	int N = 0;
	scanf("%d", &N);

	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");

	int count = 0;
	fibo1(count,N);


	return 0;
}