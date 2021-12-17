#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int top1=-1,top2=-1;
char s1[SIZE],s2[SIZE];
char item1,item2;
void push1()
{
    if (top1== SIZE-1){
        printf("Stack1 overflow\n");
    }
    else
    {
        printf("Enter item : ");
        fflush(stdin);
        scanf("%c",&item1);
          top1=top1+1;
        s1[top1]=item1;
    }
    
  
}
void push2(){
    if (top2== SIZE-1){
        printf("Stack2 overflow\n");    
    }
    else
    {
    printf("Enter item : ");
       fflush(stdin);
     scanf("%c",&item2);
                
    top2=top2+1;
    s2[top2]=item2;
    }
    
}
int pop1(){
    if(top1==-1){
        return -1;
    }
    else
    {
        return s1[top1--];
    }
    

}
int pop2(){
    if(top2==-1){
        return -1;
    }
    else
    return s2[top2--];
}
void display1(){
    int i;
    if(top1==-1){
        printf("Stack1 is empty\n");
       
    }
    else
    {
       printf("Contents of stack1 : \n");
    for(i=top1;i>=0;i--){
        printf("%c\n",s1[i]);
    }
    }
    
   
}
void display2(){
    int i;
    if(top2==-1){
        printf("Stack2 is empty\n");
        
    }
    else
    {
           printf("Contents of stack2 : \n");
    for(i=top2;i>=0;i--){
        printf("%c\n",s2[i]);
    }
    }
    

}
void compare()
{
    int i,c=0;
  
    if(top1==top2){
        for(i=0;i<=top1;i++){
            if(s1[i]==s2[i]){
                c=c+1;}
        }
        if(c==top1+1){printf("EQUAL\n");}
        else{printf("NOT EQUAL\n");}
    }
    else{printf("NOT EQUAL\n");}
}


int main()
{
   int choice;
   char id1,id2;
   printf("1:Push into Stack1\n2:Push into stack2\n3:Pop Stack1\n4.Pop Stack2\n5.Display Stack1\n6.Display Stack2\n7.Compare\n8:Exit\n");
   for(;;){
        printf("\nEnter choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1: 
                push1();
                break;
            case 2: 
                push2();
                break;
            case 3:id1=pop1();
                if(id1==-1){printf("Stack1 Underflow\n");}
                else {printf("Deleted Item is %c\n",id1);}
                break;
            case 4:id2=pop2();
                if(id2==-1){printf("Stack2 Underflow\n");}
                else {printf("Deleted Item is %c\n",id2);}
                break;
            case 5:display1();
                break;
            case 6:display2();
                break;
            case 7: compare();
                break;
            case 8: exit(0);
            default: printf("Enter proper instructional value\n");
                break;
        }
    }
    return 0;
}
