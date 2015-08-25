￼#include<stdio.h> #include<stdlib.h> #include<ctype.h>
void displayscore();
void help();
void writescore(float a,char b[20]); void lifeline1( char ac,char bc);
void lifeline2(int h,int i,int w ,int q); void lifeline();
void wrong(char ag);
void allscore(float sc,char ty[20]);
void wrong(char ag)
{
printf("\n\t\tOOPS!! YOU ENTERED A WRONG ANSWER \n \n\t\tTHE CORRECT ANSWER
IS %c",ag); }
void lifeline()
{
printf("\n\n\t\t\tWHICH LIFE LINE DO YOU PREFER");
printf("\n\tFOR 50-50 ENTER T\nFOR AUDIENCE POLE ENTER P"); }
void lifeline1(char ac,char bc)
{
printf("\n\t\t The answers may be in %c or %c",ac,bc);
}
void lifeline2(int k,int l,int m,int n)
{
printf("\n\t\t A:%d percent",k); printf("\n\t\t B:%d percent",l); printf("\n\t\t C:%d percent",m); printf("\n\t\t D:%d percent",n);
}
void displayscore()
{
char name[30];
float s;
FILE *f; f=fopen("score","r"); fscanf(f,"%s\n%f",name,&s);
printf("\n\n\t\t"); printf("\n\n\t\t%s %.2f",name,s); fclose(f);
}
void help()
{
printf("\n\n\t\t1.There Are Three Levels In This Quiz
Contest\n\n\t\t2.Atleast Three Questions Must Be Answered To Enter The Next Level"); printf("\n\n\t\t3.This Contest Provides Two Lifelines 50-50 And Audience Pole
Which Can Be Used Only Once");
printf("\n\n\t\t4.You Cannot Use Two Lifelines At A Time"); printf("\n\n\t\t5.The Score Provided Will Be From The Total Questions That
You Have Faced");
}
void writescore(float score,char plnm[20]) {
float sc;char nm[20]; FILE *f,*fs; f=fopen("score","r");
fscanf(f,"%s%f",nm,&sc);
if(score>=sc)
{
sc=score;
fclose(f); f=fopen("score","w"); fprintf(f,"%s\n%.2f",plnm,sc);
}
fclose(f);
}
void allscore(float score,char plnm[20])
{ FILE *fs; fs=fopen("list","a+");
fprintf(fs," %shasscoredthe%.2f\n",plnm,score);
fclose(fs); }
int x=1,z=1,k,l,m,n;
int main()
{
int countq,countr,r,i,a,b,age;
int pa,nq[6],w;
float score;
char choice,playername[20],ad,af,ab,lf,ag,at,tn;
￼mainhome:
printf("\n\t\t\t\t<<<<<WELCOME TO QUIZ PROGRAM>>>>>"); printf("\n\tEnter 'V' To View High Score"); printf("\n\tEnter 'H' For Help");
printf("\n\tEnter 'S' to Start game\t\t");
scanf(" %c",&choice); if(choice=='V'||choice=='v')
{
displayscore();
goto mainhome; }
else
{
help();
goto mainhome; }
else
if(choice=='S'||choice=='s')
{ FILE *fp;
fp=fopen("details","a+"); printf("\n\n\n\n\t\t\t\tENTER YOUR NAME :"); scanf("%s",playername); printf("\n\n\n\n\t\t\t\tENTER YOUR AGE :"); scanf("%d",&age);
fprintf(fp,"\nNAME: %s AGE:
fclose(fp); home:
%d\n",playername,age);
if(choice=='H'||choice=='h')
SCIENCE THAT STUDIES ");
THE SCIENCE THAT STUDIES -INSECTS");
{
printf("\n\n\n\t\tENTOMOLOGY IS THE
fprintf(fg,"\n\n\n\t\tENTOMOLOGY IS
TERMS\t\tD.FORMATION OF ROCKS\t");
\n\tENTER Y OR N");
countq++;a++; if(x==1||z==1)
{
printf("\n\t NEEDALIFELINE
scanf(" %c",&lf);
ad='B'; af='C';ag='B'; if(lf=='Y'||lf=='y')
{
50 HAS BEEN UTILISED");
k=5 ;l=45 ;m=30 ;n=20 ; lifeline();
scanf(" \n\t%c",&ab);
if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\n\t50-
} if(ab=='p'||ab=='P')
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
}
printf("\n\n\tAUDIENCE POLE HAS BEEN UTILISED");
LIFELINES\n\t");
printf("\n\n\t\t\tNO scanf(" \n\t%c",&at);
if(at=='b'||at=='B')
countq=countr=0; a=b=0;
i=1;
FILE *fg; fg=fopen("question-answer","a+");
start: r=rand()%10+1; nq[i]=r;
for(w=0;w<i;w++) if(nq[w]==r) goto start;
switch(r)
{
case 1:
￼printf("\n\n\t\tA. BEHAVIOUR OF HUMAN BEINGS\t\tB.INSECTS\n\t\tC. THE ORIGIN AND HISTORY OF TECHNICAL AND SCIENTIFIC
} }else
￼\n\t\t\t<<<CORRECT>>>\n\t\t");
printf("\n\n\t\t\tREASON:ENTYOMOLOGY IS THE BRANCH OF ZOOLOGY CONCERNED WITH THE STUDY OF INSECTS");
break; }
else {
printf("\n\n\t\t\tREASON:ENTYOMOLOGY IS THE BRANCH OF ZOOLOGY CONCERNED WITH THE STUDY OF INSECTS");
ITALIAN ASTRONOMER WHO ");
{
printf("\n\n\n\t\tGALILEO WAS AN
}break; case 2:
fprintf(fg,"\n\n\n\t\tGALILEO WAS AN ITALIAN ASTRONOMER WHO - DEVELOPED THE TELESCOPE,DISCOVERED FOUR SATELLITES OF
JUPITER,DISCOVERED THE MOVEMENT OF PENDULUM PRODUCES A REGULAR TIME MOVEMENT");
printf("\n\n\t\tA. DEVELOPED THE TELESCOPE\t\tB. DISCOVERED FOUR SATELLITES OF JUPITER\n\t\tC. DISCOVERED THE
MOVEMENT OF PENDULUM PRODUCES A REGULAR TIME MOVEMENT\t\tD. ALL OF THE ABOVE\t"); countq++;a++;
\n\tENTER Y or N \t");
if(x==1||z==1) {
printf(" \n\t NEED A LIFELINE
scanf(" %c",&lf);
ad='A'; af='D';ag='D'; if(lf=='Y'||lf=='y')
{k=40 ;l=5 ;m=5 ;n=50 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
HAS BEEN UTILISED \t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
{
printf("
countr++;b++;
wrong(ag);
break; }
LIFELINES\n\t");
printf("\n\t\t\t<<<CORRECT>>>\n\t\t");
}
} else printf("\n\n\t\t\tNO
scanf(" %c",&at);
if(at=='d'||at=='D') {
countr++;b++;
break; }
else {
wrong(ag); break;
}
FOLLOWING IS A PALINDROME");
FOLLOWING IS A PALINDROME- MALAYALAM");
1234\n\t\tC. 1212\t\tD. BOTH A AND C\t");
{
printf("\n\n\n\t\tWHICH OF THE
fprintf(fg,"\n\n\n\t\t\tWHICH OF THE
printf("\n\n\t\tA. MALAYALAM\t\tB.
\n\tENTER Y OR N \t");
countq++;a++; if(x==1||z==1)
{
printf(" \n\t NEED A LIFELINE
scanf(" %c",&lf);
ad='A'; af='D';ag='A'; if(lf=='Y'||lf=='y')
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
}break; case 3:
{
k=57 ;l=13 ;m=10 ;n=20 ; lifeline();
scanf(" \n\t%c",&ab);
if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
}
￼
￼LIFELINES\n\t");
{printf("\n\t\t\t<<<CORRECT>>>\n\t\t");
}
}else printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='a'||at=='A')
countr++;b++;
printf("\n\tREASON:PALINDROME IS A WORD,PHRASE,NUMBER OR OTHER SEQUENCE OF CHARACHTERS WHICH READS THE SAME BACKWARD OR FORWARD\t");
break; }
else {
wrong(ag);
printf("\n\tREASON:PALINDROME IS A WORD,PHRASE,NUMBER OR OTHER SEQUENCE OF CHARACHTERS WHICH READS THE SAME BACKWARD OR FORWARD\t");
DEPOSITS OF ............. IN THE WORLD");
{
printf("\n\n\t\t\tINDIA HAS LARGEST
}break; case 4:
fprintf(fg,"\n\n\t\t\tINDIA HAS LARGEST DEPOSITS OF ....MICA......... IN THE WORLD");
printf("\n\n\t\tA. GOLD\t\tB. COPPER\n\t\tC. MICA\t\tD. NONE OF THE ABOVE\t");
\n\tENTER Y OR N \t");
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
ad='C'; af='B';ag='C'; if(lf=='Y'||lf=='y')
{k=17 ;l=33 ;m=46 ;n= 4; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
{ lifeline2(k,l,m,n);
HAS BEEN UTILISED\t");
break; }
}
￼printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
z++; }else
}
LIFELINES\n\t");
}else printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='c'||at=='C')
{
printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
BRITISH GEOLOGICAL SURVEY REPORTS(2005),KODARMA DISTRICT IN JHARKHAND STATE IN INDIA
HAD THE LARGEST DEPOSITS OF MICA IN THE WORLD"); }
break;
else
{ wrong(ag);
printf("\n\t\tREASON:THE BRITISH GEOLOGICAL SURVEY REPORTS(2005),KODARMA DISTRICT IN JHARKHAND STATE IN INDIA
HAD THE LARGEST DEPOSITS OF MICA IN THE WORLD");
}
}break; case 5:
break;
SIGNIFIES....");
'BLACK FLAG' SIGNIFIES....PROTEST....");
{
printf("\n\n\n\t\t\tTHE 'BLACK FLAG'
fprintf(fg,"\n\n\n\t\t\tTHE
printf("\n\n\t\tA. REVOLUTION OR DANGER\t\tB. PEACE\n\t\tC. PROTEST\t\tD.TRUCE \t");
\n\tENTER Y OR N \t");
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
ad='C'; af='A';ag='C'; if(lf=='Y'||lf=='y')
{k=33 ;l=7 ;m=46 ;n=14 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
HAS BEEN UTILISED\t");
}
countr++;b++; printf("\n\t\tREASON:THE
￼printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
{ lifeline2(k,l,m,n);
z++; }else
}
LIFELINES\n\t");
printf("\n\t\t<<<CORRECT>>>\n\t\t");
}else printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='c'||at=='C')
{
countr++;b++;
break; }
else
{ wrong(ag);
.....");
IS .....SCIENCE OF LANGUAGES");
{
printf("\n\n\n\t\tPHILOLOGY IS
fprintf(fg,"\n\n\n\t\t\tPHILOLOGY
printf("\n\n\t\t\tA. STUDY OF BONES\t\tB. STUDY OF MUSCLES\n\t\tC. STUDY OF ARCHITECTURE\t\tD. SCIENCE OF
LANGUAGES\t");
\n\tENTER Y OR N \t");
countq++;a++; if(x==1||z==1)
{
printf(" \n\t NEED A LIFELINE
scanf(" %c",&lf);
ad='C'; af='D';ag='D'; if(lf=='Y'||lf=='y')
{k=15 ;l=15 ;m=20 ;n=50 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
HAS BEEN UTILISED\t");
}break; case 6:
break; }
}
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
￼LIFELINES\n\t");
printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
}
}else printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='d'||at=='D')
{
countr++;b++;
break; }
else
{ wrong(ag);
AIR\t");
\n\tENTER Y OR N \t");
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
ad='C'; af='B';ag='B'; if(lf=='Y'||lf=='y')
{k=8 ;l=70 ;m=20 ;n=2 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
}
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t"); }
case 7: {
printf("\n\n\n\t\t\tRICHTER SCALE IS
USED FOR MEASURING .........");
SCALE IS USED FOR MEASURING ..INTENSITY OF EARTH QUAKES.......");
printf("\n\n\t\t\tA. DENSITY OF LIQUID\t\tB. INTENSITY OF EARTH QUAKES\n\t\tC. VELOCITY OF WIND\t\tD. HUMIDITY OF
} }break;
break;
}
fprintf(fg,"\n\n\n\t\t\tRICHTER
￼LIFELINES\n\t");
printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
}else printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='b'||at=='B')
{
countr++;b++;
break; }
case 8: {
ON THE MODERN PERIODIC TABLE IS .....");
ELEMENT ON THE MODERN PERIODIC TABLE IS .. NITROGEN...");
OXYGEN\n\t\tC. CARBON\t\tD. SULPHUR\t");
\n\tENTER Y OR N \t");
printf("\n\n\t\t\tA. NITROGEN\t\tB.
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
ad='A'; af='B';ag='A'; if(lf=='Y'||lf=='y')
{k=45 ;l=30 ;m=13 ;n=12 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
} printf("\n\n\t\t\tNO
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
LIFELINES\n\t");
{
else
break;
} }break;
wrong(ag);
printf("\n\n\n\t\t\tSEVENTH ELEMENT
} }else
fprintf(fg,"\n\n\n\t\t\tSEVENTH
scanf(" %c",&at); if(at=='a'||at=='A')
{
printf("\n\t\t\t<<<CORRECT>>>\n\t\t");
ELEMENTS ARE PLACED IN THE PERIODIC TABLE ACCORDING TO THEIR ATOMIC NUMBERS");
countr++;b++;
break; }
else
{
ELEMENTS ARE PLACED IN THE PERIODIC TABLE ACCORDING TO THEIR ATOMIC NUMBERS");
￼ANIMAL IS KNOWN AS 'ARACHNOPHOBIA'");
WHAT ANIMAL IS KNOWN AS 'ARACHNOPHOBIA'-SPIDERS");
ANTS\n\t\tC. COCKROACHES\t\tD.MOSQUITOES \t");
{
\n\tENTER Y OR N \t");
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
ad='A'; af='C';ag='A'; if(lf=='Y'||lf=='y')
{k=56 ;l=14 ;m=19 ;n=11 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
} printf("\n\n\t\t\tNO
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
LIFELINES\n\t");
}
}break; case 9:
break;
} }else
printf("\n\t\tRESAON: THE
wrong(ag); printf("\n\t\tRESAON: THE
{
printf("\n\n\n\t\t\tTHE FEAR OF WHAT
fprintf(fg,"\n\n\n\t\t\tTHE FEAR OF printf("\n\t\tA. SPIDERS\t\t B.
countq++;a++; if(x==1||z==1)
scanf(" %c",&at);
￼printf("\n\t\t\t<<<CORRECT>>>\n\t\t");
if(at=='a'||at=='A') {
countr++;b++; printf("\n\t\tREASON:FROME
GREEK LANGUAGE 'ARACHNE' MEANS 'SPIDER' AND 'PHOBOS' MEANS 'FEAR'");
break; }
else
{ wrong(ag);
printf("\n\t\tREASON:FROME GREEK LANGUAGE 'ARACHNE' MEANS 'SPIDER' AND 'PHOBOS' MEANS 'FEAR'");
HISTORY OF TIME'......");
WROTE 'BRIEF HISTORY OF TIME'..STEPHEN HAWKING....");
fprintf(fg,"\n\n\n\t\tWHO
}
}break; case 10:
break;
printf("\n\n\t\tA. ALBERT EINSTEIN \t\tB. GALILEO\n\t\tC. STEPHEN HAWKING\t\tD. ARCHIMEDES\t");
\n\tENTER Y OR N ");
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
ad='B'; af='C';ag='C'; if(lf=='Y'||lf=='y')
{k=10 ;l=23 ;m=55 ;n=12 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
}
LIFELINES\n\t");
}else printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='c'||at=='C')
{
printf("\n\n\n\t\tWHO WROTE 'BRIEF
}
￼printf("\n\t\t<<<CORRECT>>>\n\t\t");
countr++;b++;
break; }
else
{ wrong(ag);
LEVEL ");
{
printf("\n\n\t\t\t\t\tYOU HAVE ENTERED INTO SECOND
countq=countr=0; i=1;
start1:
r=rand()%10+1; nq[i]=r; for(w=0;w<i;w++)
if(nq[w]==r)
goto start1; switch(r)
{
case 1:
{
printf("\n\n\n\t\t\t'DOE' IS WHAT
fprintf(fg,"\n\n\n\t\t\t'DOE' IS
KIND OF ANIMAL");
WHAT KIND OF ANIMAL-FEMALE DEER");
} i++;
if(i<=5) goto start;
if(countr>=3)
printf("\n\n\t\tA. MALE HORSE\t\tB. FEMALE DEER\n\t\tC. FEMALE HORSE\t\tD. MALE DEER\t");
\n\tENTER Y OR N \t");
countq++;a++; if(x==1||z==1)
{
printf(" \n\t NEED A LIFELINE
scanf(" %c",&lf);
ad='C'; af='B';ag='B'; if(lf=='Y'||lf=='y')
{k=10 ;l=47 ;m=23 ;n=20 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
HAS BEEN UTILISED\t");
} }break;
break;
{
{
￼printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
lifeline2(k,l,m,n); z++;
}else }
LIFELINES\n\t");
printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
}else printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='b'||at=='B')
{
countr++;b++;
break; }
else
{ wrong(ag);
WINGS DOES A BEE HAVE?");
PAIR OF WINGS DOES A BEE HAVE?-2");
3\n\t\tC. 4\t\tD. 1\t");
\n\tENTER Y OR N \t");
printf("\n\n\n\t\t\tHOW MANY PAIR OF fprintf(fg,"\n\n\n\t\t\tHOW MANY
printf("\n\n\t\t\tA. 2\t\tB.
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
} }break;
case 2: {
break;
}
ad='A'; af='D';ag='A'; if(lf=='Y'||lf=='y')
{k=50 ;l=10 ;m=10 ;n=30 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
LIFELINES\n\t");
printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
}
}else printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='a'||at=='A')
{
countr++;b++;
break; }
else
{ wrong(ag);
case 3: {
SANCTUARY IS LOCATED AT");
SANCTUARY IS LOCATED AT- DIPHU,ASSAM");
printf("\n\n\n\t\t\tGARAMPANI fprintf(fg,"\n\n\n\t\t\tGARAMPANI
printf("\n\n\t\t\tA. JUNAGARH,GUJARAT\t\tB. DIPHU,ASSAM\n\t\tC. KOHIMA,NAGALAND\t\tD. GANGTOK,SIKKIM\t");
\n\tENTER Y OR N \t");
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
ad='A'; af='B';ag='B'; if(lf=='Y'||lf=='y')
{k=30 ;l=50 ;m=10 ;n=10 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
} printf("\n\n\t\t\tNO
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
} }break;
break;
} }else
}
￼
LIFELINES\n\t");
￼printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
scanf(" %c",&at); if(at=='b'||at=='B')
{
countr++;b++;
break; }
else
{ wrong(ag);
case 4: {
printf("\n\n\n\t\t\tHITLER PARTY WHICH CAME INTO POWER IN 1933 IS KNOWN AS .....");
fprintf(fg,"\n\n\n\t\t\tHITLER PARTY WHICH CAME INTO POWER IN 1933 IS KNOWN AS .. NAZI PARTY...");
printf("\n\n\t\t\tA. LABOUR PARTY\t\tB. DEMOCRATIC PARTY\n\t\tC. KU-KLUX-KLAN\t\tD. NAZI PARTY\t");
\n\tENTER Y OR N \t");
countq++;a++; if(x==1||z==1)
{
printf(" \n\t NEED A LIFELINE
scanf(" %c",&lf);
ad='A'; af='D';ag='D'; if(lf=='Y'||lf=='y')
{k=30 ;l=15 ;m=15 ;n=40 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
}
LIFELINES\n\t");
}else printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='d'||at=='D')
} }break;
break;
}
ASSOCIATED WITH ......");
IS ASSOCIATED WITH ..BADMINTON....");
printf("\n\n\n\t\t\t'THOMAS CUP' IS fprintf(fg,"\n\n\n\t\t\t'THOMAS CUP'
\n\tENTER Y OR N \t");
countq++;a++; if(x==1||z==1)
{
printf(" \n\t NEED A LIFELINE
scanf(" %c",&lf);
ad='A'; af='B';ag='A'; if(lf=='Y'||lf=='y')
{k=43 ;l=25 ;m=17 ;n=15 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
} printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='a'||at=='A')
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
LIFELINES\n\t");
printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
} }break;
case 5: {
break;
printf("\n\n\t\t\tA. BADMINTON\t\tB. BILLIARDS\n\t\tC. LAWN TENNIS\t\tD. TABLE TENNIS\t");
} }else
{
￼printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
countr++;b++;
break; }
else
{ wrong(ag);
{
countr++;b++; break;
IS .......");
CURRENT IS ...AMPERE....");
AMPERE\n\t\tC. OHM\t\tD. WATT\t");
\n\tENTER Y OR N \t");
printf("\n\n\n\t\t\tUNIT OF CURRENT fprintf(fg,"\n\n\n\t\t\tUNIT OF
printf("\n\n\t\t\tA. VOLT\t\tB.
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEED A LIFELINE
scanf(" %c",&lf);
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
LIFELINES\n\t");
{printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
printf("\n\n\t\t\tREASON:IT IS NAMED AFTER THE ANDRE MARIE AMPERE,FRENCH MATHEMATICIAN AND PHYSICT,CONSIDERED AS
THE FATHER OF ELECTRO DYNAMICS ");
}
else
{ wrong(ag);
￼} }break;
case 6: {
break;
ad='A'; af='B';ag='B'; if(lf=='Y'||lf=='y')
{k=45 ;l=55 ;m=0 ;n=0 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
}
printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='b'||at=='B')
} }else
countr++;b++;
break; }
else
{ wrong(ag); printf("\n\n\t\t\tREASON:IT
IS NAMED AFTER THE ANDRE MARIE AMPERE,FRENCH MATHEMATICIAN AND PHYSICT,CONSIDERED AS THE FATHER OF ELECTRO DYNAMICS ");
￼LIBRARY\t");
\n\tENTER Y OR N \t");
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
ad='A'; af='C';ag='C'; if(lf=='Y'||lf=='y')
{k=20 ;l=30 ;m=40 ;n=10 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
}
LIFELINES\n\t");
{printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
}else printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='c'||at=='C')
countr++;b++;
break; }
}
}break; case 7:
break;
KNOWN BY THE NAME OF .......");
LIBRARY IS KNOWN BY THE NAME OF ..HAMMARSKJOELD LIBRARY.....");
printf("\n\n\t\t\tA. NATIONS LIBRARY\t\tB. U THANT LIBRARY\n\t\tC. HAMMARSKJOELD LIBRARY\t\tD. TRYGVE LIE
{
printf("\n\n\n\t\t\tTHE UN LIBRARY IS
}
fprintf(fg,"\n\n\n\t\t\tTHE UN
ESTABLISHED IN ......"); ESTABLISHED IN ...1946...");
1957\n\t\tC. 1945\t\tD. 1946\t");
\n\tENTER Y OR N \t");
printf("\n\n\n\t\t\tUNESCO WAS fprintf(fg,"\n\n\n\t\t\tUNESCO WAS
printf("\n\n\t\t\tA. 1919\t\tB.
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
LIFELINES\n\t");
{printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
} }break;
break;
} }break;
case 8: {
break;
else
{ wrong(ag);
￼ad='A'; af='D';ag='D'; if(lf=='Y'||lf=='y')
{k=20 ;l=13 ;m=12 ;n=55 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
} printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='d'||at=='D')
countr++;b++;
break; }
else
{ wrong(ag);
} }else
BRIGHTEST PLANET IN THE NIGHT SKY"); BRIGHTEST PLANET IN THE NIGHT SKY- VENUS");
VENUS\n\t\tC. MARS\t\tD. JUPITER\t");
\n\tENTER Y OR N \t");
fprintf(fg,"\n\n\n\t\t\tWHAT IS THE
printf("\n\n\t\t\tA. MERCURY\t\tB.
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
ad='A'; af='B';ag='B'; if(lf=='Y'||lf=='y')
{k=25 ;l=40 ;m=15 ;n=20 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
} printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='b'||at=='B')
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
LIFELINES\n\t");
{printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
case 9:
{
printf("\n\n\n\t\t\tWHAT IS THE
￼printf("REASON:ITS THICK CLOUDS REFLECT MOST OF THE SUNLIGHT THAT REACHES IT(ABOUT 70 PERCENT) BACK INTO
SPACE.");
printf("REASON:ITS THICK CLOUDS REFLECT MOST OF THE SUNLIGHT THAT REACHES IT(ABOUT 70 PERCENT) BACK INTO
SPACE.");
} }else
countr++;b++;
break; }
else
{ wrong(ag);
break;
}
}break; case 10:
{
CUP FOOT BALL TOURNMENT HELD IN ......."); fprintf(fg,"\n\n\n\t\t\tTHE 2006 WORLD CUP FOOT BALL TOURNMENT HELD IN ....GERMANY...");
￼CHINA\n\t\tC. GERMANY\t\tD. BRAZIL\t");
\n\tENTER Y OR N \t");
printf("\n\n\t\t\tA. FRANCE\t\tB.
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEEDALIFELINE
scanf(" \n\t%c",&lf);
ad='A'; af='C';ag='C'; if(lf=='Y'||lf=='y')
{k=30 ;l=10 ;m=40 ;n=20 ; lifeline();
scanf(" %c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
}
LIFELINES\n\t");
{printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
} }break;
} i++;
break;
printf("\n\n\n\t\t\tTHE 2006 WORLD
}
}else printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='c'||at=='C')
countr++;b++;
break; }
else
{ wrong(ag);
THIRD LEVEL");
if(countr>=3)
{
printf("\n\n\n\t\t\t\tYOU HAVE ENTERED INTO
countq=countr=0; i=1;
start2:
r=rand()%10+1; nq[i]=r; for(w=0;w<i;w++) if(nq[w]==r) goto start2;
switch(r) {
case 1:
{
printf("\n\n\n\t\t\tSCOTTISH
if(i<=5)
goto start1;
} else
￼ENTER THE SECOND LEVEL ");
{
printf("\n\n\t\t YOU ARE NOT QUALIFIED TO
goto score; }
BACTERIOLOGIST WHO DISCOVERED PENICILLIN WAS ..........."); fprintf(fg,"\n\n\n\t\t\tSCOTTISH BACTERIOLOGIST WHO DISCOVERED PENICILLIN WAS ....ALEXANDER FLEMING.......");
printf("\n\n\t\t\tA. ALEXANDER FLEMING\t\tB. ALBERT EINSTEIN\n\t\tC. ARCHEMEDIS\t\tD. CHARLES DARWIN\t");
\n\tENTER Y OR N \t");
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
ad='A'; af='D';ag='A'; if(lf=='Y'||lf=='y')
{k=50 ;l=10 ;m=16 ;n=24 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
} }else
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
}
￼LIFELINES\n\t");
printf("\n\n\t\t\tNO
{printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
} }break;
case 2:
break;
{
printf("\n\n\n\t\t\tWHEN IS
INTERNATIONAL WORKERS DAY");
fprintf(fg,"\n\n\n\t\t\tWHEN IS INTERNATIONAL WORKERS DAY-1st MAY");
printf("\n\n\t\t\tA. 19th APRIL\t\tB. 4th MAY\n\t\tC. 1st MAY\t\tD. 12th NOVEMBER\t"); countq++;a++;
\n\tENTER Y OR N \t");
if(x==1||z==1) {
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
ad='B'; af='C';ag='C'; if(lf=='Y'||lf=='y')
{k=10 ;l=30 ;m=50 ;n=10 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
}
LIFELINES\n\t");
}else printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='c'||at=='C')
scanf(" %c",&at); if(at=='a'||at=='A')
countr++;b++;
break; }
else
{ wrong(ag);
}
￼{printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
1918\n\t\tC. 1919\t\tD. 1920\t");
\n\tENTER Y OR N \t");
printf("\n\n\t\t\tA. 1917\t\tB.
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
ad='A'; af='C';ag='C'; if(lf=='Y'||lf=='y')
{k=13 ;l=30 ;m=50 ;n=7 ; lifeline();
scanf(" %c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
}
LIFELINES\n\t");
}else printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='c'||at=='C')
countr++;b++; break;
{printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
} }break;
case 3:
break;
{
printf("\n\n\n\t\t\tTHE TREATY OF
VERSAILLES WAS SIGNED IN ......");
fprintf(fg,"\n\n\n\t\t\tTHE TREATY OF VERSAILLES WAS SIGNED IN ..1919....");
countr++;b++;
break; }
else
{ wrong(ag);
}
\n\tENTER Y OR N \t");
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
ad='C'; af='D';ag='C'; if(lf=='Y'||lf=='y')
{k=10 ;l=10 ;m=50 ;n=30 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
} printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='c'||at=='C')
countr++;b++;
break; }
else
{ wrong(ag);
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
LIFELINES\n\t");
{printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
} }break;
case 4:
break;
SURROUNDED BY ........ IN THE EAST");
SURROUNDED BY ..ASSAM AND MIZORAM...... IN THE EAST");
printf("\n\n\t\t\tA. ASSAM\t\tB. MIZORAM\n\t\tC. BOTH A AND B\t\tD. BANGLADESH\t");
} }else
}
break;
}
else
{ wrong(ag);
￼{
printf("\n\n\n\t\t\tTRIPURA IS
fprintf(fg,"\n\n\n\t\t\tTRIPURA IS
WORLDS DIABETES DAY?");
WORLDS DIABETES DAY?-14th NOVEMBER");
NOVEMBER\t\tB. 11th DECEMBER\n\t\tC. 15th OCTOBER\t\tD. 1st JULY\t");
\n\tENTER Y OR N \t");
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
ad='A'; af='B';ag='A'; if(lf=='Y'||lf=='y')
{k=40 ;l=33 ;m=7 ;n=20 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
} printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='a'||at=='A')
countr++;b++;
break; }
else
{ wrong(ag);
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
LIFELINES\n\t");
{printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
} }break;
case 6: {
break;
}break; case 5:
{
printf("\n\n\n\t\t\tWHEN IS THE
￼printf("\n\n\n\t\t\tWHEN DID INDIA ENTER INTO SPACE AGE BY LAUNCHING THE SATELLITE 'ARYABHATTA'");
} }else
fprintf(fg,"\n\n\n\t\t\tWHEN IS THE
printf("\n\n\t\t\tA. 14th
fprintf(fg,"\n\n\n\t\t\tWHEN DID
INDIA ENTER INTO SPACE AGE BY LAUNCHING THE SATELLITE 'ARYABHATTA'-1975");
￼1932\n\t\tC. 1975\t\tD. 1990\t");
\n\tENTER Y OR N \t");
printf("\n\n\t\t\tA. 1966\t\tB.
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
ad='A'; af='C';ag='C'; if(lf=='Y'||lf=='y')
{k=30 ;l=10 ;m=50 ;n=10 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
} printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='c'||at=='C')
countr++;b++;
break; }
else
{ wrong(ag);
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
LIFELINES\n\t");
{printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
} }break;
case 7:
break;
ATHLETICS INTRODUCED IN THE OLYMPICS");
{
printf("\n\n\n\t\t\tWHEN AND WHERE
fprintf(fg,"\n\n\n\t\t\tWHEN AND WHERE ATHLETICS INTRODUCED IN THE OLYMPICS- 1896 AT ATHENS");
printf("\n\n\t\t\tA. 1896 AT ATHENS\t\tB. 1900 AT PRIS\n\t\tC. 1992 AT BARCELONA\t\tD. 1995 ATATHENS\t");
} }else
countq++;a++;
￼\n\tENTER Y OR N \t");
if(x==1||z==1) {
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
ad='A'; af='D';ag='A'; if(lf=='Y'||lf=='y')
{k=50 ;l=10 ;m=10 ;n=30 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
} printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='a'||at=='A')
countr++;b++;
break; }
else
{ wrong(ag);
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
LIFELINES\n\t");
{printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
} }break;
case 8:
break;
EXPLODED FIRST ATOMIC DEVICE?");
CHINA EXPLODED FIRST ATOMIC DEVICE?-1964");
1963\n\t\tC. 1964\t\tD. 1965\t");
fprintf(fg,"\n\n\n\t\t\tWHEN DID
printf("\n\n\t\t\tA. 1962\t\tB.
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEEDALIFELINE
\n\tENTER Y OR N \n\t");
scanf(" %c",&lf);
} }else
{
printf("\n\n\n\t\t\tWHEN DID CHINA
HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
LIFELINES\n\t");
{printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
} }break;
case 9:
break;
BAHADUR SHASTRI'S DEATH ANNIVERSARY?"); BAHADUR SHASTRI'S DEATH ANNIVERSARY?-JAN 11");
JAN 20\n\t\tC. JAN 27\t\tD. JAN 31\t");
\n\tENTER Y OR N \t");
ad='A'; af='C';ag='C'; if(lf=='Y'||lf=='y')
{k=33 ;l=17 ;m=40 ;n=10 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
} printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='c'||at=='C')
countr++;b++;
break; }
else
{ wrong(ag);
￼} }else
{
printf("\n\n\n\t\t\tWHEN IS LAL
fprintf(fg,"\n\n\n\t\t\tWHEN IS LAL
printf("\n\n\t\t\tA. JAN 11\t\t B.
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
ad='A'; af='B';ag='A'; if(lf=='Y'||lf=='y')
{k=50 ;l=30 ;m=12 ;n=8 ; lifeline();
scanf(" \n\t%c",&ab);
￼HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
if(ab=='t'||ab=='T')
{ if(x==1) {
lifeline1(ad,af); x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
LIFELINES\n\t");
{printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
}else printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='a'||at=='A')
countr++;b++;
break; }
else
{ wrong(ag);
CONSTANT IS .....");
PLANCKS CONSTANT IS ..h...");
h\n\t\tC. k\t\tD. V\t");
\n\tENTER Y OR N \t");
{
printf("\n\n\n\t\t\tSYMBOL OF PLANCKS
fprintf(fg,"\n\n\n\t\t\tSYMBOL OF
printf("\n\n\t\t\tA. c\t\tB.
countq++;a++; if(x==1||z==1)
{
printf(" \n\tNEEDALIFELINE
scanf(" %c",&lf);
ad='A'; af='B';ag='B'; if(lf=='Y'||lf=='y')
{k=46 ;l=50 ;m=3 ;n=1 ; lifeline();
scanf(" \n\t%c",&ab); if(ab=='t'||ab=='T')
{ if(x==1) {
} }break;
case 10:
break;
}
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
}
lifeline1(ad,af);
￼HAS BEEN UTILISED\t");
printf("\n\tAUDIENCE POLE HAS BEEN UTILISED\t");
x++;
}else printf("\n\t50-50
} if(ab=='p'||ab=='P')
LIFELINES\n\t");
{printf("\n\n\t\t\t<<<CORRECT>>>\n\t\t");
}else printf("\n\n\t\t\tNO
scanf(" %c",&at); if(at=='b'||at=='B')
countr++;b++;
break; }
else
{ wrong(ag);
THIRD LEVEL\n\t\t");
fclose(fg); score:
} else
}
{
if(z==1)
{ lifeline2(k,l,m,n);
z++; }else
}
break;
{
goto start2;
}
{ printf("\n\t\tYOU ARE NOT QUALIFIED TO ENTER
goto score; }
score=(((float)b/a)*100);
printf("\n\n\t\t\tThe Score You Have Scored %.2f",score); if(score<0)
score=0;
if(score==100) printf("\n\n\t\t\tEXCELLENT");
else if(score>=80&&score<=100)
printf("\n\n\t\t\tVERY GOOD"); else
if(score>60&&score<80)
printf("\n\n\t\t\tGOOD"); else
if(score<60)
printf("\n\n\t\t\tBETTER LUCK NEXT TIME");
} }break;
}
i++;
if(i<=5)
printf(" \n\n\t\t\tIF YOU WISH TO PLAY AGAIN PRESS 'Y' OTHERWISE PRESS 'N'"); scanf(" %c", &tn);
if(tn=='y'||tn=='Y') {
allscore(score,playername); writescore(score,playername); x=1;z=1;
goto home; }
if(tn=='n'||tn=='N')
{ allscore(score,playername);
writescore(score,playername); }
￼} }
￼