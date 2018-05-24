
struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode Stack;

/*
 * CreateStack-Create a linked stack,and return the head pointer S.
 */
Stack CreateStack();
/*
 * IsEmpty-Judge if a stack S is empty,if it is return 1,else return 0.
 */
int IsEmpty(Stack S);
/*
 * MakeEmpty-Clear stack S.
 */
void MakeEmpty(Stack S);
/*
 * Push-Push an element into the stack S.
 */
void Push(Stack S,ElementType e);
/*
 * GetTop-Return the top element in the stack S.
 */
ElementType GetTop(Stack S);
/*
 * Pop-Delete the top element.
 */
void Pop(Stack S);
