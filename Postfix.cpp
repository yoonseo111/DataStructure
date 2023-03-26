#include "OperandStack.h"

double calcPostfixExpr(FILE* fp = stdin)
{
	char			c;
	double			val;
	OperandStack	st;

	int count = 0;
	while ((c = getc(fp)) != '\n') {
		if (c == '+' || c == '-' || c == '*' || c == '/') {
			double val2 = st.pop();
			double val1 = st.pop();
			switch (c) {
			case '+': st.push(val1 + val2); break;
			case '-': st.push(val1 - val2); break;
			case '*': st.push(val1 * val2); break;
			case '/': st.push(val1 / val2); break;
			}
			count++;
			if (count == 3) {
				printf("%s", "(2번 문제)\n");
				printf("%.1f\n", val2);
				printf("%.1f\n", val1);
			}
		}
		else if (c >= '0' && c <= '9') {
			ungetc(c, fp);
			fscanf_s(fp, "%lf", &val);

			st.push(val);
		}
	}

	return (st.pop());
}


void main()
{
	OperandStack st;
	printf("수식 입력 = ");
	double res = calcPostfixExpr();
	printf("%s", "--------\n");
	printf("%s", "(1번 문제)\n");
	st.display();
	printf("%s", "--------\n");
	printf("%s", "(결과)\n");
	printf("%.1f\n", res);
}