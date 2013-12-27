include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct numNode{
	char n;
	struct numNode *upper;
}Num;

Num * createlist(char *s){
	char *h=s;
	Num *node,*lastnode=NULL,*head;
	s+=strlen(s)-1;
	while(s>=h){
		node=(Num *)malloc(sizeof(Num));
		if(*s>='0'&&*s<='9')
			node->n=*s-'0';
		else
			node->n=0;
		node->upper=NULL;
		if(lastnode){
			lastnode->upper=node;
		}
		else{
			head=node;
		}
		lastnode=node;
		s--;
	}
	return head;
}

void deletelist(Num *head){
	Num *node=head,*next;
	while(node){
	next=node->upper;
	free(node);
	node=next;
	}
}

void printlist(Num *head){
	Num *node=head;
	if(!node)
		return;
	printlist(node->upper);
	printf("%d",node->n);
}

Num * numadd(Num *op1,Num *op2){
	int carry=0,opnum1,opnum2;
	Num *n1=op1,*n2=op2,*node,*lastnode=NULL,*head;
	while(n1||n2||carry){
		node=(Num *)malloc(sizeof(Num));
		if(n1){
			opnum1=n1->n;
			n1=n1->upper;
		}else
			opnum1=0;
		if(n2){
			opnum2=n2->n;
			n2=n2->upper;
		}else
	opnum2=0;
	node->n=(opnum1+opnum2+carry)%10;
	carry=(opnum1+opnum2+carry)>=10?1:0;
	node->upper=NULL;
	if(lastnode){
		lastnode->upper=node;
	}else{
		head=node;}
	lastnode=node;
	}
	return head;
}

int main(){
	char buf[1024];
	Num *op1,*op2,*res;
	printf("Operand #1 : ");
	scanf("%[0-9]*",buf);
	op1=createlist(buf);
	getchar();
	printf("Operand #2 : ");
	scanf("%[0-9]*",buf);
	op2=createlist(buf);
	res=numadd(op1,op2);
	printlist(op1);
	printf("\n + \n");
	printlist(op2);
	printf("\n = \n");
	printlist(res);
	printf("\n");
	deletelist(op1);
	deletelist(op2);
	deletelist(res);
	return 0;
}
