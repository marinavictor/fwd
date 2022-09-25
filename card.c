#include "card.h"
#include<stdio.h>


EN_cardError_t getCardHolderName(ST_cardData_t* cardData)
{
	printf("please enter your card name\n");

	scanf("%s", cardData->cardHolderName);
	typedef unsigned char uint8_t;
	 uint8_t n = 0;
	 n = sizeof(cardData->cardHolderName) / sizeof(cardData->cardHolderName[0]);
	 if (cardData->cardHolderName = 0 || n < 20 || n>24)
	 {
		 return WRONG_NAME;
	 }
	 else
	 {
		 return OK;
	 }
}
EN_cardError_t getCardExpiryDate(ST_cardData_t* cardData)
{

	printf("please enter your CARD EXPIRATION DATE\n");

	scanf("%s", cardData->cardExpirationDate);

	int n = 0;
	n = sizeof(cardData->cardExpirationDate) / sizeof(cardData->cardExpirationDate[0]);
	if (cardData->cardExpirationDate == 0 || n < 20 || n>24)
	{
		return WRONG_EXP_DATE;
	}
	else
	{
		return OK;
	}
}
EN_cardError_t getCardPAN(ST_cardData_t* cardData)
{

	printf("please enter your CARD Primary Card Number \n");

	scanf("%s", cardData->primaryAccountNumber);

	int n = 0;
	n = sizeof(cardData->primaryAccountNumber) / sizeof(cardData->primaryAccountNumber[0]);
	if (cardData->primaryAccountNumber = 0 || n < 16 || n>19)
	{
		return WRONG_PAN;
	}
	else
	{
		return OK;
	}

}