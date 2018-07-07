#include <stdlib.h>//exit
#include<stdio.h>
#include<string.h>
struct student
{
	
	int numbers;
	char name[10];
	char sex[10];
	int dateofbirt;
	char class1[15];
	char phoneNo[15];
	char judge[100];
	int zd;
//	int judge3;
//	int judge4;
//	int judge5;
	int score;
};
int main()
{
    struct student s[100];
	FILE *fp1,*fp2;
	int i=0,j,a=0,c=0,d,e=1;
	int f[d];
	fp1 =fopen("student1.csv","r");
    if(fp1==NULL)
	{
		printf("error");
		exit(-1);//0为正常退出，其他为异常退出 
	}
	else
	{
		fscanf(fp1,"%*[^\n]%*c");
	    while(!feof(fp1))//若文件未读完返回0，循环继续。读完返回1.循环结束 
       {
	        fscanf(fp1,"%d,%[^,],%[^,],%d,%[^,],%[^,],%s",
	                    &s[i].numbers,&s[i].name,&s[i].sex,&s[i].dateofbirt,&s[i].class1,
						    &s[i].phoneNo,&s[i].judge);
          
            
            //printf("%d ",i);
            i++;
          //  printf("%d ",i);
       }
	   j=i;
	 i=0;
	  // for(i=0;i<j;i++)
	   int max,min,fs;
	   char delims[]=",";
	   char *result=NULL;
	
	   
	   result=strtok(s[0].judge,delims);
	   while(result!=NULL)
	   {
	   	
	   //	printf("%s ",result);
	   fs=atoi(result);
	    
	    printf("%d ",fs);
	   	 result = strtok( NULL, delims);
	   	c++;
	   	
        f[i]=fs;
        i++;
       // printf("%d ",f[i]);
      
       
	   }
	  printf("%d ",f[4]);
	   
   /* for(i=0;i<j;i++)
        {
	        printf("%d,%s,%s,%d,%s,%s,%d,%d,%d,%d,%d\n",s[i].numbers,
			        s[i].name,s[i].sex,s[i].dateofbirt,s[i].class1,s[i].phoneNo,
					    s[i].judge1,s[i].judge2,s[i].judge3,s[i].judge4,s[i].judge5);
	    }*/  
		 
	   
} 
d=c/i-1;//评委数量 

 fclose(fp1);
 printf("%d ",c);
 j=i;
//for(i=0;i<d;i++)
// printf("%d",f[i]);
/*    j=i;
    int max[100],min[100];
    
    for(i=0;i<j;i++)
    {
	    max[i]=min[i]=s[i].judge1;
    }
    j=i;
    
    for(i=0;i<j;i++)
    {
	    if(s[i].judge2>max[i])
	       max[i]=s[i].judge2;
	    if(s[i].judge3>max[i])
	       max[i]=s[i].judge3;
	    if(s[i].judge4>max[i])
	       max[i]=s[i].judge4;
	    if(s[i].judge5>max[i])
	       max[i]=s[i].judge5;
    }
    j=i;
    
    for(i=0;i<j;i++)
    {
	    if(s[i].judge2<min[i])
	       min[i]=s[i].judge2;
	    if(s[i].judge3<min[i])
	       min[i]=s[i].judge3;
	    if(s[i].judge4<min[i])
	       min[i]=s[i].judge4;
	    if(s[i].judge5<min[i])
	       min[i]=s[i].judge5;
    }
    j=i;
    
    for(i=0;i<j;i++)
    {
	    s[i].score=(s[i].judge1+s[i].judge2+s[i].judge3+s[i].judge4+s[i].judge5-max[i]-min[i])/3;
    }
    j=i;
    i=0;
    
    fp2=fopen("student2.csv","w");
    fprintf(fp2,"numbers,name,sex,dateofbirth,class,phoneNo,judge1,judge2,judge3,judge4,judge5,score\n");
    
	while(i<j)
    {
        fprintf(fp2,"%d,%s,%s,%d,%s,%s,%d,%d,%d,%d,%d,%d\n",
		        s[i].numbers,s[i].name,s[i].sex,s[i].dateofbirt,s[i].class1,
				    s[i].phoneNo,s[i].judge1,s[i].judge2,s[i].judge3,s[i].judge4,s[i].judge5,s[i].score);
    i++;
    }
    fclose(fp2);
	
*/    return 0; 
}

