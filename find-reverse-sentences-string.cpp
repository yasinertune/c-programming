#include <stdio.h>
#include <string.h>

void print_string(const char sentences[5][50])
{
	for (int i = 0; i<5; i++)
	{
		printf("'%s' uzunluk %d\n", sentences[i], strlen(sentences[i]));
	}
}

int main()
{
	char sentences[5][50] =
	{ "Bilgisayar Muhendisligi Bilgisayar Laboratuvari",
	  "Ikinci Sinif",
	  "String cumlelerin uzunluk toplamini buluyoruz.",
	  "Gedik Universitesi Muhendislik Fakultesi",
	  "Bilgisayar Muhendisligi"
	};

	print_string(sentences);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0, k = strlen(sentences[i]) - 1; j < k; j++, k--)
		{
			char temp = sentences[i][j];
			sentences[i][j] = sentences[i][k];
			sentences[i][k] = temp;
		}
	}

	printf("\n\n");
	print_string(sentences);

}
