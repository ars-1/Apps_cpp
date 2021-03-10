#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	FILE *myFile=fopen("E:\\HTML.html", "a");
	char ch1, ch2, y;
	char html[1000];
	char code[1000];
	int x, style=3;
	int paragraph=7, paragraphstyle=12, linkstyle=7, headingstyle=10;
	fputs("<html>\n<head>\n", myFile);
	cout << "\t\t\t\t\tWELCOME\n----------------------------------------------------------------------------------------------------------\n1 to Start Application\n2 to Open list of Codes\n3 to Exit\n";
	cin >> x;
	if(y=='y')
	{
		goto coding;
	}
	if(x==1)
	{
	
		cout << "Application Started\n";
		coding:
		cin >> ch1;
		cin >> ch2;
		cin >> html;
		if (strlen(html)==style && ch1=='s' && ch2=='t')
		{
			fputs("<style>\n", myFile);
			cin >> code;
			fputs(code, myFile);
			fputs("\n</style>\n", myFile);
			cout << "\n\n1 to CONTINUE\n";
			cin >> y;
		}
		if(strlen(html)==paragraph && ch1=='p' && ch2=='a')
		{
			fputs("\n<body>\n", myFile);
			cin >> code;
			fputs(code, myFile);
			cout << "\n\n1 to CONTINUE\n";
			y=getche();
		}
		if(strlen(html)==paragraphstyle && ch1=='p' && ch2=='a')
		{
			fputs("\n<body>\n", myFile);
			fputs("\n<p style=", myFile);
			cin >> code;
			fputs(code, myFile);
			cout << "\n\n1 to CONTINUE\n";
			cin >> y;
		}
		if(strlen(html)==headingstyle && ch1=='h' && ch2=='e')
		{
			fputs("h1 style=", myFile);
			cin >> code;
			fputs(code, myFile);
			cout << "\n\n1 to CONTINUE\n";
			cin >> y;
		}
		if(strlen(html)==linkstyle && ch1=='l' && ch2=='i')
		{
			fputs("\n<a href=", myFile);
			cout << "LINK in quotes\n";
			cin >> code;
			fputs(code, myFile);
			cout << "Styling in quotes and end with >TEXT</a>";
			cin >> code;
			fputs(code, myFile);
			cout << "\n\n1 to CONTINUE\n";
			cin >> y;
		}
		fputs("\n</body>\n", myFile);
	}
	if(x==2)
	if(x==3)
	getche();
	
}
