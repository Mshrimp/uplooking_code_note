# include <stdio.h>

void main()
{
	/* 定义字符型变量，并给它们付初值 */
	char c1, c2, c3, c4, c5, c6, c7;
	c1 = 'C';
	c2 = 'h';
	c3 = 'i';
	c4 = 'n';
	c5 = 'e';
	c6 = 's';
	c7 = 'e';

	/* 输出原码 */
	printf("initiative code:%c%c%c%c%c%c%c\n", c1, c2, c3, c4, c5, c6, c7);

	/* 对字符进行译码运算 */
	c1 = c1 + 6;
	c2 = c2 + 6;
	c3 = c3 + 6;
	c4 = c4 + 6;
	c5 = c5 + 6;
	c6 = c6 + 6;
	c7 = c7 + 6;

	/* 输出译码结果 */
	printf("New code:%c%c%c%c%c%c%c\n", c1, c2, c3, c4, c5, c6, c7);
}