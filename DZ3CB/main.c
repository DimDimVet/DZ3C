# include <stdio.h>
# include <stdbool.h>
# include <conio.h>
//
int valueIntLine[]={23, 56, 73, 22};
int valueIntColumn[]={443, 345, 21, 78};
float valueFloatLine[]={1.27, 2.71, 3.14, 9.81};
float valueFloatColumn[]={6.62, 1.6, 7.81, 5.68};
char strLine[]={'S','k','i','l','l'};
char strColumn[]={'B','o','x'};

int countMassiv=0;
char controlChar[]={'Y','y'};
//
void loadMenu();
void setConsolIntLine();
void setConsolIntColumn();
void setConsolFloatLine();
void setConsolFloatColumn();
void setConsolStrLine();
void setConsolStrColumn();
//
int main ()
{
    loadMenu();
    return 0;
}
//
void loadMenu()
{
    printf("Start DZ3\n");
    printf("Executor program -> Press Y...\n");

    char pressButton;
    bool isStop=true;
    countMassiv=sizeof(controlChar)/sizeof(controlChar[0]);

    while(isStop)
    {

        pressButton=getch();
        printf("Press %c\n",pressButton);

        for(int i=0; i < countMassiv;i++)
        {
            if(controlChar[i]==pressButton){isStop=false;}
        }
    }

    printf("\n\n");
    setConsolIntLine();
}

void setConsolIntLine()
{
    countMassiv=sizeof(valueIntLine)/sizeof(valueIntLine[0]);

    for(int i=0; i< countMassiv; i++)
    {
        printf("%i\t",valueIntLine[i]);// \t
    }
    printf("\n\n");
    setConsolIntColumn();
}
void setConsolIntColumn()
{
    countMassiv=sizeof(valueIntColumn)/sizeof(valueIntColumn[0]);

    for(int i=0; i< countMassiv; i++)
    {
        printf("%i\n",valueIntColumn[i]);// \n
    }
    printf("\n\n");
    setConsolFloatLine();
}
void setConsolFloatLine()
{
    countMassiv=sizeof(valueFloatLine)/sizeof(valueFloatLine[0]);

    for(int i=0; i< countMassiv; i++)
    {
        printf("%f\t",valueFloatLine[i]);// \t
    }
    printf("\n\n");
    setConsolFloatColumn();
}
void setConsolFloatColumn()
{
    countMassiv=sizeof(valueFloatColumn)/sizeof(valueFloatColumn[0]);

    for(int i=0; i< countMassiv; i++)
    {
        printf("%f\n",valueFloatColumn[i]);// \n
    }
    printf("\n\n");
    setConsolStrLine();
}
void setConsolStrLine()
{
    countMassiv=sizeof(strLine)/sizeof(strLine[0]);

    for(int i=0; i< countMassiv; i++)
    {
        printf("%c",strLine[i]);//
    }
    printf("\n\n");
    setConsolStrColumn();
}
void setConsolStrColumn()
{
    countMassiv=sizeof(strColumn)/sizeof(strColumn[0]);

    for(int i=0; i< countMassiv; i++)
    {
        printf("%c\n",strColumn[i]);//\n
    }
    printf("\n\n");
}
