#include<stdio.h>
int main() {
FILE*fp;
int ch;
clrscr();
fp=fopen("text.twt","W");
if(fp==0){
printf("Error opening file!\n");
return 1;
}
fprintf(fp,"Welcome to c\n");
fprintf(fp,"A language which is used to communicate with the electronics device\n");
fprintf(fp,"It has machine,assembly and high level language\n");
fprintf(fp,"It is translated into executable program through several toolchain stages\n");
fclose(fp);
fp=fopen("text.txt","a");
if(fp==0){
printf("Error opening file\n");
return 1;
}
fprintf(fp,"My c program trainer explains the concept of c fairly well\n");
fprintf(fp,"Covers the important topics in the syllabus\n");
fprintf(fp,"Encourage the students to practise coding\n");
fprintf(fp,"Provides useful examples during teaching\n");
fprintf(fp,"Maintains a friendly and supportive classroom environment\n");
fclose(fp);
fp=fopen("text.txt","r");
if(fp==0){
printf("Error opening file!\n");
return 1;
}
printf("\n c program feedback:\n");
while((ch=fgetc(fp))!=EOF){
printf("%c",ch);
}
fclose(fp);
getch();
return 0;
}
