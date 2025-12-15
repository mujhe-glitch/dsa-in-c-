#include <stdio.h>
struct Student 
{
    char name[30];
    int m, s, e;
    float perc;
    char result;
};
void calculate(struct Student *st) 
{
    int total = st->m + st->s + st->e;
    st->perc = total / 3.0;

    if (st->perc >= 35)
        st->result = 'P';  
    else
        st->result = 'F';  
}
int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];   

    for (i = 0; i < n; i++) 
    {
        printf("\nEnter details for student %d\n", i+1);

        printf("Enter Name: ");
        scanf("%s", s[i].name); 

        printf("Enter Maths Marks: ");
        scanf("%d", &s[i].m);

        printf("Enter Science Marks: ");
        scanf("%d", &s[i].s);

        printf("Enter English Marks: ");
        scanf("%d", &s[i].e);

        calculate(&s[i]);
    }

    printf("\n--- Student Report ---\n");
    for (i = 0; i < n; i++) {
        printf("\nName: %s", s[i].name);
        printf("\nMaths: %d, Science: %d, English: %d", s[i].m, s[i].s, s[i].e);
        printf("\nPercentage: %.2f", s[i].perc);
        printf("\nResult: %c\n", s[i].result);
    }

    return 0;
}
