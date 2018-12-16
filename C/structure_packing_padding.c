#include <stdio.h>

//Alignment requirement 

typedef struct structa_tag
{
	char c;
	short int s; //structure padding of 4 byte
} structa_t;

typedef struct structb_tag
{
	short int s;
	char c;     // structure padding of 4 byte
	int i;
}structb_t;

typedef struct structc_tag
{
	char c;		// 7 byte of structure padding : 8 byte
	double d;  //structure padding of 8 byte : no sequense of data type 
	int i;    // 8 byte
}structc_t;

typedef struct structd_tag
{
	double d;  // structure padding of 8 byte : in sequence of data type : 8 byte
	int s;		// 8 byte
	char c;
}structd_t;

int main()
{
	printf ("sizeof (structa_t) = %ld\n",sizeof(structa_t));
	printf ("sizeof (structb_t) = %ld\n",sizeof(structb_t));
	printf ("sizeof (structc_t) = %ld\n",sizeof(structc_t));
	printf ("sizeof (structd_t) = %ld\n",sizeof(structd_t));

	return 0;
}


