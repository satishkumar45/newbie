// logic for palindrome using linked list

void (struct node **q,struct node **s)
{
    struct node *temp;
    struct node *ptr;
    temp=*q;
    ptr=*s;
    while(temp && ptr)
    {
       if(temp->data!=ptr->data)
         printf("not palindrome\n");
       temp=temp->next;
       ptr=ptr->next;
    }
    printf("linked list is palindrome \n");

}
