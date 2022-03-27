int main(void) 
{
	char *pointer_to_static_ro_field = "hello, world\n";

    *pointer_to_static_ro_field = 'H';
 
	return 0;
}
