#pragma once
#include"common.h"

typedef struct StackNode
{
	char data;
	struct StackNode* next;
}StackNode;

typedef struct StackNode* ListStack;

void ListStackInit(ListStack* pst)
{
	*pst = NULL;
}
void ListStackPush(ListStack* pst, char x)
{
	StackNode* p = (StackNode*)malloc(sizeof(StackNode));
	assert(p != NULL);
	p->data = x;
	p->next = *pst;
	*pst = p;
}
void ListStackShow(ListStack pst)
{
	StackNode* P = pst;
	while (P != NULL)
	{
		printf("%c->", P->data);
		P = P->next;
	}
}
char StackGetPop(ListStack *pst)
{
	assert(*pst != NULL);
	return (*pst)->data;
}
void StackPop(ListStack* pst)
{
	assert(*pst != NULL);
	StackNode* temp = *pst;
	(*pst) = (*pst)->next;
	free(temp);
}

bool ParenthesesMatch(char* s)
{
	if (s == NULL)
		return false;
	if (*s == '\0')
		return true;
	int count = 1;
	int length = strlen(s);
	char *st = (char*)malloc(sizeof(char) * length);
	int top = 0;

	while (*s != '\0')
	{
		printf("%c", *s);
		if (*s == '(' || *s == '[' || *s == '{')//×óÀ¨ºÅÑ¹Õ»
		{
			st[top++] = *s;
		}
		else
		{
			if (top == 0) {
				printf("11111111111");
				return false;
			}
			if ((*s == ')'&&st[top - 1] != '(') || (*s == ']'&&st[top - 1] != '[') || (*s == '}'&&st[top - 1] != '{')) {
				return false;
			}
			top--;
		}
		s++;
	}
	if (top == 0)
		return true;
	else
		return false;
}



/*bool isValid(char * s)
{
	if (s == NULL)
		return false;
	if (*s == '\0')
		return true;

	int len = strlen(s);
	char *st = (char*)malloc(sizeof(char) * len);
	int top = 0;

	while (*s != '\0')
	{
		if (*s == '(' || *s == '[' || *s == '{')
		{
			st[top++] = *s;
		}
		else
		{
			if (top == 0)
				return false;

			if ((*s == ')'&&st[top - 1] != '(')
				|| (*s == ']'&&st[top - 1] != '[')
				|| (*s == '}'&&st[top - 1] != '{'))
				return false;
			top--;
		}
		s++;
	}

	bool flag = (top == 0 ? 1 : 0);
	free(st);
	st = NULL;
	return flag;
}
*/
