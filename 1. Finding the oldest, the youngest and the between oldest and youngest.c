/*This program can take the input of the age of your father, mother and uncle and shows who is the oldest, who is youngest
 and whose age is between oldest and youngest
 Author:Fatema Tuj Juhra Sadia(222-16-667)*/
 #include<stdio.h>
int main(){
int father_age, mother_age, uncle_age;

printf("Enter your father's age = ");
scanf("%d",&father_age);
printf("Enter your mother's age = ");
scanf("%d",&mother_age);
printf("Enter your uncle's age = ");
scanf("%d",&uncle_age);

if(father_age>mother_age && mother_age>uncle_age){
    printf("Your father is the oldest\n Your uncle is the youngest\n Your mother is between the oldest and youngest");
}else if(father_age>uncle_age && uncle_age>mother_age){
    printf("Your father is the oldest\n Your mother is the youngest\n Your uncle is between the oldest and youngest");
}else if(mother_age>father_age && father_age>uncle_age){
    printf("Your mother is the oldest\n Your uncle is the youngest\n Your father is between the oldest and youngest");
}else if(mother_age>uncle_age && uncle_age>father_age){
    printf("Your mother is the oldest\n Your father is the youngest\n Your uncle is between the oldest and youngest");
}else if(uncle_age>father_age && father_age>mother_age){
    printf("Your uncle is the oldest\n Your mother is the youngest\n Your father is between the oldest and youngest");
}else if(uncle_age>mother_age && mother_age>father_age){
    printf(" Your uncle is the oldest\n Your father is the youngest\n Your mother is between the oldest and youngest");
}else{
printf("Invalid");
}
return 0;
}
