#include "headers.h"
#include "declarations.h"
Node* creatNode(Node *start)
{
	printf("%s : Begin\n", __func__);
	Node *new_node;
        Node *current;
	int len;
        new_node = (Node*)malloc(sizeof(Node));
        if (!new_node)
        {
                perror("malloc");
                exit(EXIT_FAILURE);
        }
        new_node->next = NULL;
	new_node->dept = (char *)malloc(5); // Adjust the size as needed
        new_node->ename = (char *)malloc(20); // Adjust the size as needed

        if(!start)
        {
		new_node->empid = 0;
		new_node->dept = "hello";
		new_node->ename = "hello";
		new_node->salary = 0.0;
                start = new_node;
        }
        else
        {
        	printf("%s : Enter the empid\n", __func__);
        	scanf("%d", &new_node->empid);
		getchar();
        	printf("%s : Enter the Dept\n", __func__);
		fgets(new_node->dept, 5, stdin);	
		len = strlen(new_node->dept);
		new_node->dept[len-1] = '\0';
        	printf("%s : Enter the Emp name\n", __func__);
		fgets(new_node->ename, 20, stdin);	
		len = strlen(new_node->ename);
		new_node->ename[len-1] = '\0';
        	printf("%s : Enter the Emp Salary\n", __func__);
		scanf("%f", &new_node->salary);
                current = start;
                while(current->next)
                {
                        current = current->next;
                }
                current->next = new_node;
        }
	printf("%s : End\n", __func__);
        return start;
}
