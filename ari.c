#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

string ari (string s)	{

	//checking number of charectors
	int nc=0, nw=0, ns=0;
	for (int i=0;s[i]!='\0';i++)	{
	//checking number of characters
		if (isalnum(s[i]))
			nc++;
	//checking number of words(spaces)
		if (s[i]==' ')
			nw++;
	//checking number of sentences
		if (s[i]=='.' || s[i]=='?' || s[i]=='!')
			ns++;
	}

	float ari= (4.71 * ((float)nc/nw)) + (0.5 * ((float)nw/ns)) - 21.43;
	if (ari != (int)ari)
		ari=(int)ari+1; 
	
	switch ((int)ari)	{
		case 1:		return "Kindergarten";
			break;
		case 2:		return "First/Second Grade";
			break;
		case 3:		return "Third Grade";
			break;
		case 4:		return "Fourth Grade";
			break;
		case 5:		return "Fifth Grade";
			break;
		case 6:		return "Sixth Grade";
			break;
		case 7:		return "Seventh Grade";
			break;
		case 8:		return "Eighth Grade";
			break;
		case 9:		return "Ninth Grade";
			break;
		case 10:	return "Tenth Grade";
			break;
		case 11:	return "Eleventh Grade";
			break;
		case 12:	return "Twelfth Grade";
			break;
		case 13:	return "College Student";
			break;
		case 14:	return "Professor";
			break;
		default: return "Error";
		}

} 
