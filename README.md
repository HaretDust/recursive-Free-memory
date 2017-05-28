# Project  recursive-Free-memory

project of ME  
读c primer plus 第六版 链表部分  
##原文有错误,勘误似乎也有问题,P574的 while 循环内  

	current = head;
	head = current->next;
	free(current);  
应当修改为
  
  	head = current->next;
	free(current);
	current = head;
