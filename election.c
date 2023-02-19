#include"process.c"

int main(){
    while(1){
        printf("\n\n\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\tONLINE VOTING MACHINE\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\n\n");
        printf("\t\t\xB2\xB2\xDB\xDB\t 1.STUDENT LOGIN \n\t\t\xB2\xB2\xDB\xDB\t 2.FACULTY LOGIN \n\t\t\xB2\xB2\xDB\xDB\t 3.Exit \n\n\t\t\xB2\xB2\xDB\xDB\t\t   Option:");
		char input;
        scanf(" %c",&input);
        system("cls");

        switch(input){
            case '1':
                studentPanel();
                break;
            case '2':
                adminPanel();
                break;
            case '3':
                return 0;
            default:
                printf("\nInvalid option");
                getch();
        }
    }
    return 0;
}
