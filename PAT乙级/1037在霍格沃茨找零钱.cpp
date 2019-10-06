#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<math.h>

typedef struct money {
		long galleon;
		int sickle;
		int knut;
		long sum;
	}money;
int main() {
	money P, A, R;
	R.galleon = R.sickle = R.knut = 0;
	scanf("%ld.%d.%d %ld.%d.%d", &P.galleon, &P.sickle, &P.knut, &A.galleon, &A.sickle, &A.knut);
	P.sum =(long) 493 * P.galleon + 29 * P.sickle + P.knut;
	A.sum =(long) 493 * A.galleon + 29 * A.sickle + A.knut;
	R.sum = A.sum - P.sum;
	R.galleon = (floor)(R.sum / 493);
	R.sickle = (floor)((R.sum - R.galleon * 493) / 29);
	R.knut = R.sum - R.galleon * 493 - R.sickle * 29;
	if(R.galleon >= 0 && R.sickle >= 0 && R.knut >=0)
		printf("%ld.%d.%d", R.galleon, R.sickle, R.knut);
	else if(R.galleon < 0 && R.sickle >=0 && R.knut>=0)
		printf("%ld.%d.%d", R.galleon, R.sickle, R.knut);
	else if( R.galleon < 0 && R.sickle <0 && R.knut < 0)
		printf("%ld.%d.%d", R.galleon, (-1)*R.sickle, (-1)*R.knut);
	else if(R.galleon < 0 && R.sickle >=0 && R.knut < 0)
		printf("%ld.%d.%d", R.galleon, R.sickle, (-1)*R.knut);
	system("pause");
	return 0;
}