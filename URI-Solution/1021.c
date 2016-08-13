#include <stdio.h>
int main()
{
	int hundred = 0, fifty = 0, twenty = 0, ten = 0, five = 0, two = 0, one = 0;
	float n;
	int p_fifty = 0, p_tfive = 0, p_ten = 0, p_five = 0;
	float p_one = 0;
	scanf("%f", &n);
	if (n >= 100) {
		hundred = n / 100;
		n = n - (hundred * 100);
		///printf("%0.2f\n",n);
	}
	if (n >= 50) {
		fifty = n / 50;
		n = n - (fifty * 50);
		///printf("%0.2f\n",n);
	}
	if (n >= 20) {
		twenty = n / 20;
		n = n - (twenty * 20);
		///printf("%0.2f\n",n);
	}
	if (n >= 10) {
		ten = n / 10;
		n = n - (ten * 10);
		///printf("%0.2f\n",n);
	}
	if (n >= 5) {
		five = n / 5;
		n = n - (five * 5);
		///printf("%0.2f\n",n);
	}
	if (n >= 2) {
		two = n / 2;
		n = n - (two * 2);
		///printf("%0.2f\n",n);
	}
	if (n >= 1) { ///1.73=1
		one = n / 1;
		n = n - (one * 1);
		///printf("%0.2f\n",n);
	}
	if (n >= .50) {///.73
		p_fifty = n / 0.50;
		n = n - (p_fifty*0.50);
		///printf("%0.2f\n",n);
	}
	if (n >= .25) {
		p_tfive = n / 0.25;
		n = n - (p_tfive*0.25);
		///printf("%0.2f\n",n);
	}
	if (n >= .10) {
		p_ten = n / 0.10;
		n = n - (p_ten*0.10);
		///printf("%0.2f\n",n);
	}
	if (n >= .05) {
		p_five = n / 0.05;
		n = n - (p_five*0.05);
		///printf("%0.2f\n",n);
	}
	if(n > 0.0){
        p_one = n /(0.01);
	}
	printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", hundred, fifty, twenty, ten, five, two);
	printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%0.0f moeda(s) de R$ 0.01\n",one, p_fifty, p_tfive, p_ten, p_five, p_one);
	return 0;
}

