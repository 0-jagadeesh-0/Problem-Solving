class Solution
{
public:
    bool detectLoop(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        while (true)
        {
            if (!fast->next || !fast->next->next)
            {
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                return true;
            }
        }
        return false;
    }
};