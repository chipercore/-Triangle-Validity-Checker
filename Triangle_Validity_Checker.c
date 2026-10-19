

#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);

    printf(" /░░░░    /░░░   /░░░░   /░ /░    /█▀▀▀/    /░░░░           /░░░░    /░░░    /░░░░    /█▀▀▀/\n");
    printf("│ ▒__/   │/_▒/  │_▒ /▒  │ ▒▒▒▒   │ ▓▓▓     │_▒ /▒          │ ▒__/   │_▒/▒   │_▒ /▒   │ ▓▓▓\n");
    printf("│ ▓       │ ▓   │ ▓▓▓/  │ ▓_/▓   │_▒_/     │ ▓▓▓/          │ ▓      │ ▓ ▓   │ ▓▓▓/   │_▒_/\n");
    printf("│ ████    /███  │ █_/   │ █│ █   │ ░░░░    │ █_/█          │ ████   │ ███   │ █_/█   │ ░░░░\n");
    printf("│/___/   │/__/  │//     │//│//   │/___/    │// //          │/___/   │/__/   │// //   │/___/\n");
    printf("                                                                                               ");
    printf("                                                  Dᴇᴠᴇʟᴏᴘᴇᴅ Bʏ Cʜɪᴘᴇʀ  • ᴠᴇʀsɪᴏɴ 1.0 • ᴄʜɪᴘᴇʀ ᴄᴏʀᴇ    ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             \n");

/*

\(a + b > c\)  (যেকোনো দুই বাহুর যোগফল তৃতীয় বাহু অপেক্ষা বড় হতে হবে)
\(a + c > b\)
\(b + c > a\)

*/

    int a,b,c,ab,ac,bc;
    printf("Enter Length of the first side:");
    scanf("%d",&a);
    printf("Enter Length of the second side:");
    scanf("%d",&b);
    printf("Enter Length of the third side:");
    scanf("%d",&c);

    ab = a+b;
    ac = a+c;
    bc = b+c;

    if
        (ab > c && ac >b && bc >a )
        {
            printf("Yes, a triangle can be drawn.");

        }

    else

        {
            printf("The sum of two sides is less than the third side, so you cannot draw a triangle.");
        }



    return 0;


}
