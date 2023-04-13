#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct{

	unsigned short num;
	unsigned short position;

} person;

void main ()
{

	unsigned short qtdPeople, qntPeopleLeft;
	unsigned short i, idPeople;
	person queue[51000];

	scanf("%hu", &qtdPeople);

	memset(queue, 0, sizeof(queue));

	for (i = 0; i < qtdPeople; i++)
	{
		scanf("%hu", &idPeople);
		queue[i].num = idPeople;
		queue[idPeople].position = i;

	}

	scanf("%hu", &qntPeopleLeft);

	for (i = 0; i < qntPeopleLeft; i++)
	{
		scanf("%hd", &idPeople);
		queue[queue[idPeople].position].num = 0;
	}

	bool flag = false;

	for (i = 0; i < qtdPeople; i++){
		if (queue[i].num)
		{
			if (flag == true && i != qtdPeople){
				printf(" ");
                        }
			flag = true;
			printf("%hu", queue[i].num);
		}
                
        }

	printf("\n");
}