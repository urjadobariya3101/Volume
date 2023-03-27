#include<stdio.h>
enum week{
	
	Monday=1 , Tuesday , Wednesday , Thursday , Friday , Saturday , Sunday
	
};

int main(){
	
	enum week i;
	
	for(i=Monday ; i<=Sunday ; i++){
		printf("%d\n",i);
	}
	
	return 0;
}
