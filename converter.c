#include <stdio.h>

int converter(int othercount,int computercount,int dramacount,int musiccount, int techcount, int artcount,int a[])
{
    FILE * tech;
    FILE * art;
    FILE * music;
    FILE * drama;
    FILE * computer;
    FILE * other;
    FILE * class2;
    FILE*overflow2;
    overflow2 = fopen("secondflow.txt","r");
    computer = fopen("computer.txt","a+");
    class2 = fopen("class2.txt","a+");
    drama = fopen("drama.txt","a+");
    music = fopen("music.txt","a+");
    other = fopen("other.txt","a+");
    tech = fopen("tech.txt","a+");
    art = fopen("art.txt","a+");
int move2 = 2;
int lg,lg2,lg3,lg4,lg5,lg6,lg7;
int holder = 0;
int avalable;
int overflowcount = 0;
    for(int move = 1;move <= move2; move++)
{
    if (1 <= techcount)
    {
        avalable = 1;
    }
    else if(1 <= artcount)
    {
        avalable = 2;
    }
    else if (1 <= musiccount)
    {
        avalable = 3;
    }
    else if (1 <= dramacount)
    {
        avalable = 4;
    }
    else if (1 <= computercount)
    {
        avalable = 5;
    }
    else if(1 <= othercount)
    {
        avalable = 6;
    }
    else
    {
        avalable = 117;
    }
    move2 = move2 + 1;
    holder = lg;
   fscanf(overflow2,"%d %d %d %d %d %d %d",&lg,&lg2,&lg3,&lg4,&lg5,&lg6,&lg7);

   if (lg != EOF )
   {
      fprintf(class2,"%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
if( lg2 ==  (avalable + 10) || lg3 ==  (avalable + 10)|| lg4 == (avalable + 10) || lg5 == (avalable + 10) ||lg6 == (avalable + 10)|| lg7 == (avalable + 10)     )
              {
                  printf("error");
              }

if (lg == holder)
    {
        move2 = 0;
}
if (lg != holder)
   {



      switch(avalable)
      {
        case 1:
          {

              fprintf(tech, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
              techcount = techcount - 1;
          }
        break;
        case 2:
            {
                fprintf(art, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                artcount = artcount - 1;
            }
        break;
        case 3:
            {
                fprintf(music, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                musiccount = musiccount - 1;
            }
        break;
        case 4:
            {
                fprintf(drama, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                dramacount = dramacount - 1;
            }
        break;
        case 5:
            {
                fprintf(computer, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                computercount = computercount - 1;
            }
        break;
        case 6:
            {
                fprintf(other, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                 othercount = othercount - 1;

            }
        break;

        default:
         printf("\n\t\t\t\t\t\t\tto many students, bigger class size needed\n");
         overflowcount = overflowcount + 1;
        break;

      }}

   }



printf("\n\n\n\t\t\t %d %d %d %d %d %d\t\t\tamount of students without placment :%d \n",othercount,computercount,dramacount,musiccount,techcount,artcount,overflowcount);
}


    fclose(tech);
    fclose(art);
    fclose(music);
    fclose(drama);
    fclose(computer);
    fclose(other);
    fclose(overflow2);
    fclose(class2);
    a[0]=othercount;
    a[1]=computercount;
    a[2]=dramacount;
    a[3]=musiccount;
    a[4]=techcount;
    a[5]=artcount;

if(overflowcount >=1)
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\t\t\t\tyou need % d more class space\n\n\n\n\n\n\n\n\n", overflowcount);
    exit(0);
}
class2 = fopen("class2","r");

return (a);
}
