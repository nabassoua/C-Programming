void swap(int* pt_a, int* pt_b);
/*void swap(register int* pt_a, register int* pt_b);*/
/*inline void swap(int* pt_a, int* pt_b) __attribute__((always_inline));*/

int main(void)
{
	int a=1, b=2;

	swap(&a, &b);

return 0;
}

void swap(int* pt_a, int* pt_b)
/*void swap(register int* pt_a,register  int* pt_b)*/
/*inline void swap(int*  pt_a, int* pt_b)*/
{
	int tmp;
	
	tmp = *pt_a;
	*pt_a = *pt_b;
	*pt_b = tmp;
}

