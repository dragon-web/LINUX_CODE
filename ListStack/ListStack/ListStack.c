#include"ListStack.h"

int main()
{
	
	//char arr[] = { '{',']','}','(','(',')','('};
	char arr1[] = "()[][[]][][]]]]]][][]{}{}{}{}}{{";
	char a[] = { '{',']','[','(',')' };

	if (ParenthesesMatch(arr1))
	printf("ƥ��");
	else
	printf("��ƥ��");

	system("pause");
	return 0;
}