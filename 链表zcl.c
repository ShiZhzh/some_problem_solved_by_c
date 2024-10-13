struct ListNode* createList(int a[], int n) {
    // TODO: ��д��������ĺ���
    int i;
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));

    //����ָ��
    struct ListNode* pcurrent = head;
    for (i = 0; i < n; i++)
    {
        //����һ���½ڵ�
        struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));


        pcurrent->val = a[i];
        if (i != n - 1)
        {
            pcurrent->next = newnode;
            pcurrent = pcurrent->next;
        }
        if (i == n - 1)
            pcurrent->next = NULL;
            
    }
    return head;
}


//    // TODO: ��д��������ĺ���
//    //pcurrent
//    struct ListNode* header = (struct ListNode*)malloc(sizeof(struct ListNode));
//    header->val = INT_MIN;
//    header->next = head;
//
//    struct ListNode *ppre=header;
//    struct ListNode* p=ppre->next;
//    struct ListNode* pcurrent = head->next;
// //   struct ListNode* p = ppre;
// //   struct ListNode* copy = NULL;
//    while (pcurrent != NULL)
//    {
//        ppre = header;
//        p = ppre->next;
//        while (p->next != pcurrent)
//        {
//            if (p->val > pcurrent->val)
//            {
//                //copy = pcurrent;
//                p->next = pcurrent->next;
//                ppre->next = pcurrent;
//                pcurrent->next = p;
//                break;
//            }
//            ppre = p;
//            p = p->next;
//        };
//        if (p->next == pcurrent)
//            pcurrent = pcurrent->next;
//        else
//            pcurrent = p->next;
//    }
//    return header->next;
//}
struct ListNode* sortList(struct ListNode* head) {
    struct ListNode* ppre=head;
    struct ListNode* p = ppre->next;
    int x=0;
    while (ppre->next != NULL)
    {
        p = ppre->next;
        while (p!= NULL)
        {
            if (ppre->val > p->val)
            {
                x=ppre->val;
                ppre->val = p->val;
                p->val = x;
            }
            p = p->next;
        }
        ppre = ppre->next;
    }

    return head;
}
void output(struct ListNode* head) {
    // TODO: ��д���ÿ���ڵ�ֵ�ĺ���
    
    struct ListNode* p = NULL;
    p = head;
    while (1) {
        if (p == NULL)
            break;
        if (p != NULL)
            printf("%d\n", p->val);
        p = p->next;
    }
}

struct ListNode* insertNode(struct ListNode* head, int n) {
    // TODO: ��д�������������ֵ�ĺ���

    struct ListNode* ppre = head;
    struct ListNode* pcurrent = head->next;
   // struct ListNode* temp = NULL;

    while (pcurrent != NULL)
    {
        if ((ppre->val <= n) && (pcurrent->val > n))
        {
            //�����½ڵ�
            struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
            newnode->val = n;
            newnode->next = pcurrent;
            ppre->next = newnode;
            break;
        }

       // temp = pcurrent;
        ppre = pcurrent;
        pcurrent = pcurrent->next;
      
        //temp = NULL;
    }
    if (pcurrent == NULL)
    {
        struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->val = n;
        newnode->next = NULL;
        ppre->next = newnode;
    }
    return head;
}

struct ListNode* removeNode(struct ListNode* head, int n) {
    // TODO: ��дɾ��������ָ��ֵ�ĺ���

    //����ָ�룻
    struct ListNode* pcurrent=NULL,*ppre=NULL;
    ppre = head;
    pcurrent = ppre->next;

    while (pcurrent != NULL)
    {
        if (pcurrent->val == n)
        {
            ppre->next = pcurrent->next;
            free(pcurrent);
            break;
        }
        ppre = pcurrent;
        pcurrent = pcurrent->next;

    }
    return head;
}
