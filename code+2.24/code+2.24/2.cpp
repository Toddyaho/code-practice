 int sum(int a)
{
	 int c = -1;
	 static int b = 0;
	 b += 1;
	 c += 1;
	 return(a + b + c);	
}