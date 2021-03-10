#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	char file[30];
	cout << "Enter File Name with .html extension";
  cin >> file;
  FILE *goodFile=fopen(file, "a");
  char text[100];
  char table[100];
  char x;
  
  cout << "\t\t\t\t\t\t\t\tWELCOME\n---------------------------------------------------------------------------------------------------------------------\n";
  cout << "\t\t\tNOTE: Spaces Not Allowed, Instead Use '_' underscore or dash '_' and output file will be in the following directory E:\\HtmlTable.html";
fputs("\n<!DOCTYPE html>\n<html>\n<head>\n", goodFile);
fputs("<style>\n", goodFile);
fputs("table {\n", goodFile);
  fputs("border-collapse: collapse;\n", goodFile);
  fputs("border-spacing: 0;\n", goodFile);
  fputs("width: 100%;\n", goodFile);
  fputs("border: 1px solid #ddd;\n", goodFile);
fputs("}\n", goodFile);

fputs("th, td {\n", goodFile);
  fputs("text-align: left;\n", goodFile);
 fputs("padding: 16px;\n", goodFile); 
fputs("}\n", goodFile);

fputs("tr:nth-child(even) {\n", goodFile);
  fputs("background-color: lightgreen;\n", goodFile);
fputs("}\n", goodFile);
fputs("tr:nth-child(odd) {\n", goodFile);
  fputs("background-color: lightblue;\n", goodFile);
fputs("}\n", goodFile);
fputs("</style>\n", goodFile);
fputs("</head>\n", goodFile);
fputs("<body>\n", goodFile);

fputs("<h2>Table</h2>\n", goodFile);
fputs("<p>For New Table Delete or Rename This One</p>\n", goodFile);

fputs("<table>\n", goodFile);
  fputs("<tr>", goodFile);
    fputs("<th>First Name</th>", goodFile);
    fputs("<th>Last Name</th>", goodFile);
    fputs("<th>Age</th>", goodFile);
  fputs("</tr>", goodFile);

  name:

  fputs("<tr>\n", goodFile);
    fputs("<td>", goodFile);
    cout << "\nFirst Name\n";
    cin >> text;
    fputs(text, goodFile);
    fputs("</td>\n", goodFile);
    fputs("<td>", goodFile);
        cout << "\nLast Name\n";
    cin >> text;
    fputs(text, goodFile);
    fputs("</td>\n", goodFile);
    fputs("<td>", goodFile);
        cout << "\nAge\n";
    cin >> text;
    fputs(text, goodFile);
    fputs("</td>\n", goodFile);    
  fputs("</tr>", goodFile);
   cout << "NEXT? (Y/N)\n";
   cin >> x;
   switch(x)
   {
   	case 'y':
   	case 'Y':	
   	goto name;
   	break;
   }

  
fputs("</table>\n", goodFile);

fputs("</body>\n", goodFile);
fputs("</html>\n", goodFile);
getche();
}

