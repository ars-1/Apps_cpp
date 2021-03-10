#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	char file[30];
	cout << "Enter File Name with .html extension\n";
	cout << "user>>";
  cin >> file;
  FILE *htmlFile=fopen(file, "a");
  FILE *add=fopen("C:\\Users\\HP\\Music\\all.html", "a");
  char text[100];
  char table;
  char x;
  int a;
  int b, c;
  
  cout << "\t\t\t\t\t\t\t\tWELCOME\n---------------------------------------------------------------------------------------------------------------------\n";
  cout << "\t\t\tNOTE: Spaces Not Allowed, Instead Use '_' underscore or dash '_'";
fputs("\n<!DOCTYPE html>\n<head>\n", htmlFile);
fputs("\n<!DOCTYPE html>\n<head>\n", add);
fputs("\n<link rel=\"icon\" type=\"image\\gif\" src=\"\" sizes=\"16x16\">\n", htmlFile);
fputs("\n<title>Table||HTML</title>\n", htmlFile);
fputs("<style>\n", htmlFile);
fputs("table {\n", htmlFile);
  fputs("border-collapse: collapse;\n", htmlFile);
  fputs("width: 100%;\n", htmlFile);
  fputs("\n", htmlFile);
fputs("}\n", htmlFile);

fputs("\n<link rel=\"icon\" type=\"image\\gif\" src=\"\" sizes=\"16x16\">\n", add);
fputs("\n<title>Table||HTML</title>\n", add);
fputs("<style>\n", add);
fputs("table {\n", add);
  fputs("border-collapse: collapse;\n", add);
  fputs("width: 100%;\n", add);
  fputs("\n", add);
fputs("}\n", add);

fputs("table, td, th {\n", htmlFile);
fputs("border: 1px solid black;\n", htmlFile);
fputs("}\n", htmlFile);
fputs("th{color:blue; font-size: 20px; padding:20px;}\n", htmlFile);
fputs("td{color:black; font-size: 15px; padding:10px;}\n", htmlFile);
fputs("</style>\n", htmlFile);
fputs("<body>\n", htmlFile);

fputs("table, td, th {\n", add);
fputs("border: 1px solid black;\n", add);
fputs("}\n", add);
fputs("th{color:blue; font-size: 20px; padding:20px;}\n", add);
fputs("td{color:black; font-size: 15px; padding:10px;}\n", add);
fputs("</style>\n", add);
fputs("<body>\n", add);

fputs("<h2>", add);
fputs(file, add);
fputs("</h2>\n", add);
fputs("<p>For New Table Delete or Rename This One</p>\n", htmlFile);


fputs("<table>\n", htmlFile);
  fputs("<tr>", htmlFile);
     fputs("<th>Name</th>", htmlFile);
     fputs("<th>Price</th>", htmlFile);
     fputs("<th>QTY.</th>", htmlFile);
     fputs("<th>T. Price</th>", htmlFile);
  fputs("</tr>", htmlFile);
  
  fputs("<table>\n", add);
  fputs("<tr>", add);
     fputs("<th>Name</th>", add);
     fputs("<th>Price</th>", add);
     fputs("<th>QTY.</th>", add);
     fputs("<th>T. Price</th>", add);
  fputs("</tr>", add);

  name:

  fputs("<tr>\n", htmlFile);
    fputs("<td>", htmlFile);
      fputs("<tr>\n", add);
    fputs("<td>", add);
    cout << "\nName\n";
    cin >> text;
    fputs(text, htmlFile);
    fputs("</td>\n", htmlFile);
    fputs("<td>", htmlFile);
    fputs(text, add);
    fputs("</td>\n", add);
    fputs("<td>", add);
        cout << "\nPrice\n";
    cin >> text;
        cout << "\nType Price again\n";
    cin >> b;
    fputs(text, htmlFile);
    fputs("</td>\n", htmlFile);
    fputs("<td>", htmlFile);
    fputs(text, add);
    fputs("</td>\n", add);
    fputs("<td>", add);
        cout << "\nQTY.\n";
    cin >> text;
        cout << "\nType QTY. again\n";
    cin >> a;
    fputs(text, htmlFile);
    fputs("</td>\n", htmlFile);    
    fputs("<td>", htmlFile);
    fputs(text, add);
    fputs("</td>\n", add);    
    fputs("<td>", add);
        cout << "\nT. Price\n";
        c=a*b;
        cout << "\nType  " << c++ << "  in T.Price\n";
    cin >> text;
    fputs(text, htmlFile);
    fputs("</td>\n", htmlFile);
      fputs("</tr>", htmlFile);
    fputs(text, add);
    fputs("</td>\n", add);
      fputs("</tr>", add);
   cout << "NEXT? (Y/N)\n";
   cin >> x;
   switch(x)
   {
   	case 'n':
   	case 'N':	
   	cout << "\n\t\t\t\t\tGOOD-BYE\n";
   	break;
              
    default:
    goto name;
    break;
   }
cout << "\nType" << c << "now";
  
fputs("</table>\n", htmlFile);

fputs("</body>\n", htmlFile);
fputs("</html>\n", htmlFile);

fputs("</table>\n", add);

fputs("</body>\n", add);
fputs("</html>\n", add);
getche();
}
