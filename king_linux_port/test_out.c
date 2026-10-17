```c
#include <stdint.h>
#include <stdlib.h>

typedef struct CNode {
    struct CNode *pNext;
    struct CNode *pPrev;
    void *data;
} CNode;

typedef struct CPtrList {
    void *vtable;
    CNode *m_pNodeHead;
    CNode *m_pNodeTail;
    int m_nCount;
} CPtrList;

/* Equivalent to MFC CPtrList::NewNode (FUN_0063197a) */
static CNode *NewNode(CPtrList *list, CNode *pPrev, CNode *pNext)
{
    CNode *pNode = (CNode *)malloc(sizeof(CNode));
    if (!pNode) {
        return NULL;
    }
    pNode->pPrev = pPrev;
    pNode->pNext = pNext;
    pNode->data = NULL;
    list->m_nCount++;
    return pNode;
}

CNode *AddTail(CPtrList *this_ptr, void *newElement)
{
    CNode *pNewNode = NewNode(this_ptr, this_ptr->m_pNodeTail, NULL);
    if (!pNewNode) {
        return NULL;
    }

    pNewNode->data = newElement;

    if (this_ptr->m_pNodeTail == NULL) {
        this_ptr->m_pNodeHead = pNewNode;
    } else {
        this_ptr->m_pNodeTail->pNext = pNewNode;
    }

    this_ptr->m_pNodeTail = pNewNode;
    return pNewNode;
}
```
