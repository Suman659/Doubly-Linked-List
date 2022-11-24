
struct node* deleteFirst() {

   struct node *tempLink = head;

   if(head->next == NULL) {
      last = NULL;
   } else {
      head->next->prev = NULL;
   }
	
   head = head->next;
	
   //return the deleted link
   return tempLink;
}
