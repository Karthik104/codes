#include<stdio.h>
#include<string.h>
struct customer
{
	int id;
	long int accno;
	char name[20];
	long int bal;
	char password[20];
	int gift[20];
}c[3];

struct giftcard
{
	long int cno;
	int pin;
	long int balance;
	char transaction[20][20];
//	int rewardpoints=0;
//	int flag=0;
}g[10];

int login()
{
	int crid,i,m=0;
	char a[20],b[20];;
	printf("enter customer id and password:");
	scanf("%d",&crid);
	gets(a);
	for(i=1;i<4;i++)
	{
		if(crid==c[i].id)
		{
			m=i;
			strcpy(b,c[i].password);
			printf("1\n");
			break;
		}
	}
	if(strlen(a)==strlen(b))
	for(i=0;i<strlen(b)-1;i++)
	{
		
		if((a[i]=='z'&&b[i]=='a')||(a[i]=='Z'&&b[i]=='A')||(a[i]=='0'&&b[i]=='9')||(a[i]==b[i]-1))
		{
			printf("2\n");
			continue;
		}
		else{
			printf("wrong");
			return 0;
		}
	}
	printf("\ncustomerid: %lld\naccountno: %lld\nbalance: %lld\nname: ",c[m].id,c[m].accno,c[m].bal);
	puts(c[m].name);
}


int main()
{
	int n;
	
	c[1].id=1;
	c[1].accno=11011;
	strcpy(c[1].name,"kumar");
	c[1].bal=10000;
	strcpy(c[1].password,"ApipNbjm");
	
	c[2].id=2;
	c[2].accno=22022;
	strcpy(c[2].name,"Madhu")
	c[2].bal=20000;
	strcpy(c[2].password,"Cboljoh");
	
	c[3].id=3;
	c[3].accno=33033;
	strcpy(c[3].name,"Robin");
	c[3].bal=30000;
	strcpy(c[3].password,"kbwb22");
	
	printf("1.Account login\n");
	printf("2.Purchase\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:login();
			   break;
		case 2:printf("success p");
			   break;
		default :printf("try again");
	}
}
