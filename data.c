struct  film{
	char name[TSIZE];
	int data;
	struct film * next;
};
struct film * GcMemony(film *);
struct film * GcMemony(film * head)
{
	int n = 0;

	if (head->next != NULL)
	{
		printf("GC start at %d\n", n = head->data);
		head->next = GcMemony(head->next);
	}
	if (head->next == NULL)
	{
		printf("free start at %d\n", n = head->data);
		free(head);
		printf("free %d end\n", n);
		return NULL;
	}
}
