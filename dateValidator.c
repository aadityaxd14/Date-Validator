#include<stdio.h>
int leapyear(int yyyy){
    if( ((yyyy%4 == 0) && (yyyy%100 != 0)) || (yyyy%400 == 0) ){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int dd,mm,yyyy;
    int flag = 0;
    printf("Enter to check the date(dd-mm-yyyy): ");
    scanf("%d %d %d",&dd,&mm,&yyyy);

    flag = leapyear(yyyy); // function call

    if( (dd<1 || dd>31) && (mm<1 || mm>12) ){
        printf("Enter the valid date and month\n");
    }

    // Months having 31 days{01,03,05,07,08,10,12}

    else if(mm==1 || mm== 3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12){
        if(dd>=1 && dd<= 31){
            printf("The date is valid,");
            if(flag==1){
                printf("and also a 'Leap year'\n");
            }
            else{
                printf("but not a 'Leap year'\n");
            }
        }
        else{
            printf("Enter a valid date\n");
        }
    }

    else if(mm==2 || mm==4 || mm==6 || mm==9 || mm==11){
        if(dd>=1 && dd<=30){
            printf("The date is valid\n");
            if(flag==1){
                printf("and also a 'Leap year'\n");
            }
            else{
                printf("but not a 'Leap year'\n");
            }
        }
        else{
            printf("Enter a valid date\n");
        }
    }

    else if(mm==2){
        if(dd>=1 && dd<=29){
            printf("The date is valid,");
            // flag = leapyear(yyyy);
            if(flag==1){
                printf("and also a 'Leap year'\n");
            }
            else{
                printf("but not a 'Leap year'\n");
            }
        }
        else{
            printf("Enter a valid date\n");
        }
    }

    else{
        printf("Enter a valid month\n");
    }
    return 0;
}