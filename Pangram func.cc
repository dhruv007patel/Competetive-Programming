#include<iostream.h>
#include<string.h>
#include<conio.h>
void isPangram()
{
    int i;
    char str[26];
    cout << "Enter a string to check if its Pangram or not: ";
    for (i = 0; i < 26; i++) {
    cin >> str[i];

    if ((str[i] >= 97 && str[i] <= 122)||((str[i] >= 65 && str[i] <= 91))
    {

        cout << "It is Pangram" << endl;
        break;
    } else {
        cout << "it is not Pangram" << endl;
        break;
    }

    }
}

int main()
{
    isPangram();
    getch();
    return 0;
}