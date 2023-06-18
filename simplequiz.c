#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
    int total1,total2,total3;

    puts(" Welcome to the Game\n\n");

    puts(">press 7 to start the game\n");
    puts("> press 0 to quit the game");
    scanf("%d",&i);
    if(i==7)
    {
        puts("The Game Has started\n");

    }
    else if(i==0)
    {
         puts("The game Has Ended\n");
    }
    else
    {
        puts("Invalid option:");
    }

    if(i==7)
    {
        printf("1) which one is the first search engine on internet\n\n");
        printf("1)Google\n");
        puts("2)Archie");
        puts("3)Wais");
        puts("4)Altavisted");

           puts("Enter Your Answer: ");
           scanf("%d",&ans1);
           if(ans1==1)
           {
            puts("Correct Answer");
            point1=5;
            printf("You have scored %d point\n",point1);
           }
           else
           {
                  printf("Wrong Answer\n");
                  point01=0;
                  printf("You have scored %d point\n",point01);
           }
              printf("2) Which one is the first web browser invented in 1990?\n\n");
              printf("1) Internet Expolorer\n");
              printf("2) Mosaic\n");
              puts("3) Mozilla");
              puts("4) Nexus");

              puts("Enter you answer;");
              scanf("%d",&ans2);
              if(ans2==4)
              {
                printf("Correct answer\n");
                point2=5;
                printf("you have scored %d point\n",point2);
              }
              else
              {
                puts("Wrong answer\n");
                point02=0;
                printf("You have scored %d point\n",point02);
              }

              printf("3) First Computer virus in knon as ?\n\n");
              puts("1) Rabbit");
              puts("2) Creeper Virus");
              puts("3) Elk cloner");
              puts("4) SCA virus");

              puts("ENter you answer");
              scanf("%d",&ans3);

              if(ans3==2)
              {
                 printf("Correct answer\n");
                 point3=5;
                 printf("You have score %d points\n",point3);
              }
              else
              {
                printf("Wrong Answer\n");
                point03=0;
                printf("You have scored %d point\n",point03);
              }
              puts("Firewall in computer is used for ?");
              puts("1) security");
              puts("2) Data Transmission");
              puts("3) Monitioring");
              puts("4) Authentication ");

              printf("Enter your answer\n");
              scanf("%d",&ans4);
              if(ans4==1)
              {
                puts("Correct Answer");
                point4=5;
                printf("You have score %d point\n",point4);
              }
              else
              {
                printf("Wrong answer\n\n");
                point04=0;
                printf("You have score %d point\n",point04);
              }

              puts("5) which of  the following is not a database manangement software\n");
              puts("1) Mysql");
              puts("2) Oracle");
              puts("3) Cobal");
              puts("4) sybase");

              printf("ENter you answer");
              scanf("%d",&ans5);

              if(ans5==3)

              {
                printf("Correct answer");
                point5=5;
                printf("You have scored %d point\n",point5);

              }
              else
              {
                puts("wrong Answer");
                point05=0;
                printf("You have score %d point\n",point05);
              }
    }
    return 0;
}
