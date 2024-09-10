
#include <locale.h>
#include <stdlib.h> 

void main()

{

	setlocale(LC_ALL, "RUS"); // для переключения русской кодировки

	puts("здраствуй вася"); // вывод строки
	
	/*system("pause");
	return 5555;*/

}