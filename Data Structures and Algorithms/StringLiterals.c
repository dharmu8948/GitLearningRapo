#include<stdio.h>
int main()
{
	//it is wrong way to write long paragraph
	//   printf("%s","You have to dream before your dream can come true.
	//             ---A.P.J. Abdul kalam");
	
	
	//its right way to write a long paragraph it is called splicing in c 
     printf("%s\n","You have to dream before your dream can come true.\
	             ---A.P.J. Abdul kalam");
				 
		//its more right way to write a long paragraph it is called splicing in c
     printf("%s","You have to dream before your dream can come true."
	             "---A.P.J. Abdul kalam");			 
		
}


#include<stdio.h>
int main()
{
	char *p="Hello world";
	printf("%s",p);
}
