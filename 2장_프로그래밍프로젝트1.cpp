#include <cstdio>
#define MAX_DEGREE 80
#include <iostream>
using namespace std;

class Polynomial {
	int degree;
	float coef[MAX_DEGREE];

public:
	Polynomial() { degree = 0; }

	void read() {
		printf("다항식의 최고 차수를 입력하시오: ");
		scanf_s("%d", &degree);
		printf("각 항의 계수를 입력하시오 (총 %d개): ", degree + 1);
		for (int i = 0; i <= degree; i++)
			scanf_s("%f", coef + i);
	}

	void display(const char* str = " Poly = ") {
		printf("\t%s", str);
		for (int i = 0; i < degree; i++)
			printf("%5.1f x^%d + ", coef[i], degree - i);
		printf("%4.1f\n", coef[degree]);
	}

	void display_change(const char* str = " Poly = ") {
		printf("\t%s", str);
		for (int i = 0; i < degree; i++)
		{
			if (coef[i] == 0) 
				continue;
			else if (coef[i] == 1) 
				printf(" x^%d + ", degree - i);
			else
			{
				if (coef[i] > 0)
					printf("%.1lf x^%d + ", coef[i], degree - i);
				else
					printf("(%.1lf) x^%d + ", coef[i], degree - i);
			}
		}

		if (coef[degree] >= 0)
			printf("%4.1f\n", coef[degree]);
		else 
			printf("(%4.1f) ", coef[degree]);
	}

	void trim(const char* str = " Poly = ") {
		printf("\t%s", str);
		for (int i = 0; i < degree; i++)
		{
			if (coef[i] == 0)
				continue;
			else
			{
				if (coef[i] > 0)
					printf("%.1lf x^%d + ", coef[i], degree - i);
				if (coef[i]<0)
					printf("(%.1lf) x^%d + ", coef[i], degree - i);
				break;
			}
		}

		if (coef[degree] >= 0)
			printf("%4.1f\n", coef[degree]);
		else
			printf("(%4.1f) ", coef[degree]);
	}
		
	void add(Polynomial a, Polynomial b) {
		if (a.degree > b.degree) {
			*this = a;
			for (int i = 0; i <= b.degree; i++)
				coef[i + (degree - b.degree)] += b.coef[i];
		}
		else {
			*this = b;
			for (int i = 0; i <= a.degree; i++)
				coef[i + (degree - a.degree)] += a.coef[i];
		}
	}

	void sub(Polynomial a, Polynomial b) {
		if (a.degree > b.degree) {
			*this = a;
			for (int i = 0; i <= b.degree; i++)
				coef[i + (degree - b.degree)] -= b.coef[i];
		}
		else {
			*this = b;
			for (int i = 0; i <= a.degree; i++)
				coef[i + (degree - a.degree)] -= a.coef[i];
			for (int i = 0; i <= degree; i++)
				coef[i] = -coef[i];
		}
	}

	void mult(Polynomial a, Polynomial b) {
		degree = a.degree + b.degree;

		for (int i = 0; i <= degree; i++)
			coef[i] = 0;

		if (a.degree < b.degree)
		{
			Polynomial temp;
			temp = b;
			b = a;
			a = temp;
		}
		for (int i = 0; i <= a.degree; i++)
		{
			for (int j = 0; j <= b.degree; j++)
				coef[degree - (i + j)] = coef[degree - (i + j)] + (a.coef[a.degree - i] * b.coef[b.degree - j]);
		}
	}
		
	bool isZero() { return degree == 0; }
	void negate() {
		for (int i = 0; i < degree; i++)
			coef[i] = -coef[i];
	}
};

void main() {
	Polynomial a, b, c, d, e;
	a.read();
	b.read();
	c.add(a, b);
	d.sub(a, b);
	e.mult(a, b);

	a.display("A = ");
	b.display("B = ");
	c.display("A + B = ");
	d.display("A - B = ");
	e.display("A * B = ");
	c.display_change("변경 후 --> A + B = ");
	d.display_change("변경 후 --> A - B = ");

	d.trim("A - B = ");
}