/* ANSI C standard syntax - 1989 */
void function_1 (void) ;
int function_2 (int a, int b, int c);

int main(void)
{

	function_1();

return 0;
}

void function_1 (void) 
{
	int ret_1;
	
	ret_1 = function_2 (1, 2, 3);
}

/* K&R C original syntax - 1978 */
int function_2 (a_2, b_2, c_2) 
int a_2;
int b_2;
int c_2;
{
	return a_2 + b_2 + c_2;
}
