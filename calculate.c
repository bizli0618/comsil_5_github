#include <stdio.h>
void main() {
	float a, b, i;
	char calculate;
	for (i = 0; i <= 4; i++) {
		printf("��Ģ ������� �Է��ϼ���[��)2 * 2] : ");
		scanf("%f %c %f", &a, &calculate, &b);
		switch (calculate) {
		case '+':
			printf("%.2f + %.2f = %.2f\n", a, b, a + b);
			break;
		case '-':
			printf("%.2f - %.2f = %.2f\n", a, b, a - b);
			break;
		case '*':
			printf("%.2f * %.2f = %.2f\n", a, b, a * b);
			break;
		case '/':
			printf("%.2f / %.2f = %.2f\n", a, b, a / b);
			break;
		default:
			printf("�ùٸ� ������� �Է��ϼ���");
		}
	}
}