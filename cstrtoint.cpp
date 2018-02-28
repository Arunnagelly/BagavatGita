#include<iostream>
#include<cstdlib>
#include<cctype>
using namespace std;
void read_and_clean(int& n);

void new_line();

int main()
{

	int n;
	char ans;
	do
	{
		cout<<"Enter an integer and press Return:";
		read_and_clean(n);
		cout<<"That string converts to the strings "<<n<<endl;
		cout<<"Again? (yes/no): ";
		cin>>ans;
		new_line();
	}while((ans !='n')&&(ans != 'N'));
	return 0;
}

void read_and_clean(int& n)
{

	const int ARRAY_SIZE =6;
	char digit_string[ARRAY_SIZE];
	char next;
	cin.get(next);
	int index =0;
	while(next!='\n')
	{
		if((isdigit(next)) && (index < ARRAY_SIZE -1))
		{
			digit_string[index] = next;
			index++;
		}
		cin.get(next);
	}
	digit_string[index] ='\0';
	n= atoi(digit_string);
}

void new_line()
{
	char symbol;
	do
	{
		cin.get(symbol);
		
	}while(symbol != '\n');
}
