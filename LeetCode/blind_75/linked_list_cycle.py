from typing import Optional


class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        slow, fast = head, head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
            if slow == fast:
                return True
        return False


def create_linked_list(values, pos):
    """
    Creates a linked list from the list of values.
    If pos >= 0, it creates a cycle linking the last node to the node at index 'pos'.
    """
    if not values:
        return None

    head = ListNode(values[0])   # Create the head of the linked list
    current = head
    cycle_node = None

    # Iterate over the values and create nodes
    for index in range(1, len(values)):
        current.next = ListNode(values[index])
        print("Current1", current.next.val)
        current = current.next
        print("Current2", current.val)

        # If we are at the position where the cycle should start, store that node
        if index == pos:
            cycle_node = current
            print("Cycle Node", cycle_node.val)
    # If pos is not -1, create the cycle by connecting the last node to the cycle_node
    if pos >= 0:
        current.next = cycle_node

    return head


s = Solution()
linked_list = create_linked_list([3, 1, 2, 0, -4], 2)
print(linked_list)
print(s.hasCycle(linked_list))
