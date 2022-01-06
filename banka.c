#include <stdio.h>
#include <stdlib.h>


int hesap( int id ,char username[20],char passwd[20])
{
int secim;
int cash[]={10,20,30,40,50}; /*para miktarları index numarası kullanıcı adı indexi ile aynı olucak şekilde görüntüler*/
system("clear"); /*linux çekirdeği kullanan işletim sistemleri için ekranı temizler*/
basla:
printf("hoşgeldiniz %s\nseçim yapınız:\n1-)hesap bakiyesi görüntüle\n2-)şifre değiştir\n3-)kullanıcı adı değiştir\n4-)para çek\n5-)çıkış\n6-)para yatır\n",username);
scanf("%d",&secim); /*secimi oku*/
if(secim==1) /*eğer hesap bakiyesi görüntülenmek istiyorsa*/
{
printf("bakiyeniz %d\n tl \n devam etmek için bir tuşa basınız... ",cash[id]);
scanf("%d",&secim);
system("clear");
goto basla;
}
else if (secim==2) /*şifre değişikliği ise */
{
printf("yeni şifrenizi giriniz:\n");
int sifre;
scanf("%d",&sifre);
passwd=sifre;
system("clear"); /*temizle*/
goto basla;
}


else if(secim==3) /*kullanıcı adı değiştir ise */
{
printf("yeni id  giriniz:\n");
char id2[20];
scanf("%s",&id2);
username=id2;
system("clear"); /*temizle*/
goto basla;

goto basla;
}

else if(secim==5)
{
system("exit"); /*linux sistemler için terminal çıkış komutu*/

}

else if(secim==4) /*para çekme*/
{
printf("çekeceğiniz miktarı giriniz: ");
int param;
scanf("%d",&param);
cash[id]=cash[id]-param;
system("clear");
goto basla;

}

else if(secim==6)
{
printf("yatıracağınız miktarı giriniz:\n");
int miktar;
scanf("%d",&miktar);
cash[id]+=miktar;
system("clear");
goto basla;

}
else
{
printf("böyle bir seçenek yok!\n");
goto basla;
}
}



void main()
{


char* getusername[10];
char* getpasswd[10];
char* username[]={"Admin","root"}; /*kullanıcı adları*/
char* passwd[]={"0000","123"}; /*şifreler*/
int uzunluk = sizeof(username)/sizeof(username[0]); /*dizenin büyüklüğünü aldık*/
printf("Kullanıcı adınızı giriniz:\n");
scanf("%s",getusername); /*kullanıcıdan kullanıcı adını aldık*/
printf("şifrenizi  giriniz:\n");
scanf("%s",getpasswd); /*kullanıcıdan şifresini aldık  aldık*/

for(int i=0;i<uzunluk;i++)
{
if(strcmp(getusername,username[i])==0 && strcmp(getpasswd,passwd[i])==0) /*eğer şifre ve kullanıcı adı uyuşursa*/
{
printf("giriş başarılı\ndevam etmek için bir tuşa basınız..\n");
scanf("");
hesap(i,username[i],passwd[i]);
}

}









}
