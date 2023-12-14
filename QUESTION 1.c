#include<stdio.h>
#include<stdlib.h>
struct Contact{
    char name[50];
    char email[50];
    char Phone_no[50];
};
int no_of_contacts = 0;
struct Contact* add_contact(struct Contact* contact){
    if(no_of_contacts == 0){
        contact = malloc((no_of_contacts+1)*sizeof(struct Contact));
    }else{
        contact = realloc(contact,(no_of_contacts+1)*sizeof(struct Contact));
    }
    if(contact == NULL){
        printf("Memory allocation not found.\n");
        exit(1);
    }
printf("Enter Name:");
scanf("%s",&contact[no_of_contacts].name);
printf("Enter Email:");
scanf("%s",&contact[no_of_contacts].email);
printf("Enter Phone Number:");
scanf("%s",&contact[no_of_contacts].Phone_no);
no_of_contacts++;
return contact;
};
void Display_contact(struct Contact*contact){
    for(int i=0;i<no_of_contacts;i++){
        printf("Name:%s ",contact[i].name);
        printf("Email:%s ",contact[i].email);
        printf("Phone Number:%s ",contact[i].Phone_no);
        printf("\n\n");
    }}
void del_conatct(struct Contact*contact,int index){
    if(index<0 || index>no_of_contacts){
        printf("Invalid Index");
    }for(int i=index;i<no_of_contacts-1;i++){
        contact[i] = contact[i+1];
    }
    no_of_contacts--;
    contact = realloc(contact,(no_of_contacts+1)*sizeof(struct Contact));
}

int main(){
    struct Contact*contact;
    int choice;
    int index;
    int exit = 1;
    printf("1.Add Contact\n2.Display Contacts\n3.Delete Contact\n4.Exit\n");
    while(1){
    printf("Enter Your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            contact = add_contact(contact);
            break;
        case 2:
            Display_contact(contact);
            break;
        case 3:
            printf("Enter the index no. of the contact that you want to delete:");
            scanf("%d",&index);
            del_conatct(contact,index);
            break;
        case 4:
            free(contact);
            exit = 0;
            break;
        default:
            printf("Invalid choice");

            }}
            return 0;


   }









