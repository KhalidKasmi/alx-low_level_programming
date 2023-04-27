/**
 * list_len: is a function to give the length of a linked list_len
 * *h: a pointer to the head of the list 
 * 
 * return: the number of elements
 */
 
 

size_t list_len(const list_t *h){
    size_t l = 0;
    while (h!= NULL ){
        l++;
        h = h->next ;
         }
         return l;
}
